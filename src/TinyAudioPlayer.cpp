#include "TinyAudioPlayer.h"

#include <string.h>

#if defined(ESP32)
#ifdef __has_include
#if __has_include(<esp_arduino_version.h>)
#include <esp_arduino_version.h>
#endif
#endif
#endif

#ifndef TINY_AUDIO_PWM_FREQUENCY
#if defined(ESP8266)
#define TINY_AUDIO_PWM_FREQUENCY 60000UL
#else
#define TINY_AUDIO_PWM_FREQUENCY 62500UL
#endif
#endif

#ifndef TINY_AUDIO_ESP32_PWM_BITS
#define TINY_AUDIO_ESP32_PWM_BITS 8
#endif

#ifndef TINY_AUDIO_ESP32_PWM_CHANNEL
#define TINY_AUDIO_ESP32_PWM_CHANNEL 0
#endif

#ifndef TINY_AUDIO_ESP32_TIMER_NUMBER
#define TINY_AUDIO_ESP32_TIMER_NUMBER 0
#endif

#ifndef TINY_AUDIO_CENTER_VALUE
#define TINY_AUDIO_CENTER_VALUE 127
#endif

#ifndef TINY_AUDIO_IDLE_VALUE
#define TINY_AUDIO_IDLE_VALUE TINY_AUDIO_CENTER_VALUE
#endif

#ifndef TINY_AUDIO_FADE_MS
#define TINY_AUDIO_FADE_MS 4
#endif

#if defined(ESP32) && !defined(ARDUINO_ISR_ATTR)
#define ARDUINO_ISR_ATTR IRAM_ATTR
#endif

#if defined(ARDUINO_ARCH_AVR)
#define TINY_AUDIO_AVR_PWM_NONE 0
#define TINY_AUDIO_AVR_PWM_1A 1
#define TINY_AUDIO_AVR_PWM_1B 2
#define TINY_AUDIO_AVR_PWM_2A 3
#define TINY_AUDIO_AVR_PWM_2B 4
#define TINY_AUDIO_AVR_PWM_3A 5
#define TINY_AUDIO_AVR_PWM_3B 6
#define TINY_AUDIO_AVR_PWM_3C 7
#define TINY_AUDIO_AVR_PWM_4A 8
#define TINY_AUDIO_AVR_PWM_4B 9
#define TINY_AUDIO_AVR_PWM_4C 10
#define TINY_AUDIO_AVR_PWM_5A 11
#define TINY_AUDIO_AVR_PWM_5B 12
#define TINY_AUDIO_AVR_PWM_5C 13
#endif

extern const AudioClipInfo audioClips[] TINY_AUDIO_METADATA_PROGMEM;
extern const uint16_t audioClipCount;
extern const uint16_t audioSampleRate;

TinyAudioPlayer TinyAudio;
TinyAudioPlayer *TinyAudioPlayer::activePlayer = nullptr;

#if defined(ESP32) && defined(TINY_AUDIO_ESP32_USE_TIMER)
static void ARDUINO_ISR_ATTR tinyAudioEsp32TimerIsr() {
  if (TinyAudioPlayer::activePlayer) {
    TinyAudioPlayer::activePlayer->handleInterrupt();
  }
}
#endif

TinyAudioPlayer::TinyAudioPlayer()
  : _speakerPin(TINY_AUDIO_DEFAULT_SPEAKER_PIN),
    _directSpeakerMode(false),
    _volumePercent(100),
    _playing(false),
    _sampleIndex(0),
    _queueHead(0),
    _queueTail(0),
    _queueCount(0),
    _queueGapActive(false),
    _queueGapUntilMs(0),
    _currentLoadChunk(nullptr),
    _currentChunk{0, 0},
    _currentChunkCount(0),
    _currentChunkIndex(0),
    _currentChunkStart(0),
    _currentLength(0),
    _currentSampleRate(8000),
    _sampleIntervalMicros(125),
    _lastSampleMicros(0),
    _lastError(TINY_AUDIO_ERROR_NONE)
#if defined(ARDUINO_ARCH_AVR)
    ,
    _avrPwmChannel(TINY_AUDIO_AVR_PWM_NONE)
#endif
#if defined(ESP32)
    ,
    _esp32Timer(nullptr)
#endif
{
}

void TinyAudioPlayer::begin(bool directSpeakerMode, uint8_t volumePercent) {
  begin(TINY_AUDIO_DEFAULT_SPEAKER_PIN, directSpeakerMode, volumePercent);
}

void TinyAudioPlayer::begin(int speakerPin, bool directSpeakerMode, uint8_t volumePercent) {
  if (speakerPin < 0) {
    speakerPin = TINY_AUDIO_DEFAULT_SPEAKER_PIN;
  }

  begin((uint8_t)speakerPin, directSpeakerMode, volumePercent);
}

void TinyAudioPlayer::begin(uint8_t speakerPin, bool directSpeakerMode, uint8_t volumePercent) {
  _speakerPin = speakerPin;
  _directSpeakerMode = directSpeakerMode;
  setVolume(volumePercent);
  _currentSampleRate = audioSampleRate > 0 ? audioSampleRate : 8000;
  _sampleIntervalMicros = samplePeriodMicros();
  _lastError = TINY_AUDIO_ERROR_NONE;
  activePlayer = this;

  pinMode(_speakerPin, OUTPUT);
  setupOutput();
  setupSampleTimer();
  setOutput(TINY_AUDIO_IDLE_VALUE);
}

bool TinyAudioPlayer::play(const char *name) {
  return play(name, _volumePercent);
}

bool TinyAudioPlayer::play(const char *name, uint8_t volumePercent) {
  AudioClipInfo clip;
  if (!findClip(name, clip)) {
    _lastError = TINY_AUDIO_ERROR_CLIP_NOT_FOUND;
    return false;
  }

  return queueOrStart(clip, volumePercent, 0, audioSampleRate);
}

bool TinyAudioPlayer::play(uint16_t index) {
  return play(index, _volumePercent);
}

bool TinyAudioPlayer::play(uint16_t index, uint8_t volumePercent) {
  AudioClipInfo clip;
  if (!readClip(index, clip)) {
    _lastError = TINY_AUDIO_ERROR_INDEX_OUT_OF_RANGE;
    return false;
  }

  return queueOrStart(clip, volumePercent, 0, audioSampleRate);
}

bool TinyAudioPlayer::playOrFirst(const char *name) {
  if (play(name)) {
    return true;
  }

  return play((uint16_t)0);
}

bool TinyAudioPlayer::playOrFirst(const char *name, uint8_t volumePercent) {
  if (play(name, volumePercent)) {
    return true;
  }

  return play((uint16_t)0, volumePercent);
}

void TinyAudioPlayer::stop() {
  disableSampleTimer();
  _playing = false;
  _sampleIndex = 0;
  clearQueue();
  _currentLoadChunk = nullptr;
  _currentChunk = AudioDataChunk{0, 0};
  _currentChunkCount = 0;
  _currentChunkIndex = 0;
  _currentChunkStart = 0;
  _currentLength = 0;
  setOutput(TINY_AUDIO_IDLE_VALUE);
}

void TinyAudioPlayer::loop() {
  if (!_playing) {
    serviceQueue();
  }

#if !defined(ARDUINO_ARCH_AVR)
  if (!_playing) {
    return;
  }

  uint32_t now = micros();
  uint8_t samplesThisCall = 0;
#if defined(ESP8266)
  const uint8_t maxSamplesPerCall = 8;
#else
  const uint8_t maxSamplesPerCall = 32;
#endif

  while (_playing && (uint32_t)(now - _lastSampleMicros) >= _sampleIntervalMicros) {
    _lastSampleMicros += _sampleIntervalMicros;
    playNextSample();
    samplesThisCall++;
    if (samplesThisCall >= maxSamplesPerCall) {
#if defined(ESP8266)
      _lastSampleMicros = micros();
#endif
      break;
    }
    now = micros();
  }
#endif
}

void TinyAudioPlayer::waitAudioDone(uint16_t pauseAfterMs) {
#if defined(ESP8266) || defined(ESP32)
  uint32_t lastYieldMs = millis();
  while (isPlaying()) {
    loop();
    if ((uint32_t)(millis() - lastYieldMs) >= 1UL) {
      yield();
      lastYieldMs = millis();
    }
  }
#else
  while (isPlaying()) {
    loop();
    delay(1);
  }
#endif

  uint32_t endTime = millis() + pauseAfterMs;
  while ((int32_t)(millis() - endTime) < 0) {
    loop();
    delay(1);
  }
}

void TinyAudioPlayer::setVolume(uint8_t percent) {
  _volumePercent = clampVolume(percent);
}

bool TinyAudioPlayer::isPlaying() const {
  return _playing || _queueCount > 0 || _queueGapActive;
}

bool TinyAudioPlayer::isSamplePlaying() const {
  return _playing;
}

uint8_t TinyAudioPlayer::volume() const {
  return _volumePercent;
}

uint16_t TinyAudioPlayer::clipCount() const {
  return audioClipCount;
}

uint8_t TinyAudioPlayer::queueCount() const {
  return _queueCount;
}

bool TinyAudioPlayer::queueGapActive() const {
  return _queueGapActive;
}

uint32_t TinyAudioPlayer::sampleIndex() const {
  return _sampleIndex;
}

uint32_t TinyAudioPlayer::currentLength() const {
  return _currentLength;
}

uint16_t TinyAudioPlayer::currentSampleRate() const {
  return _currentSampleRate;
}

uint8_t TinyAudioPlayer::lastError() const {
  return _lastError;
}

const char *TinyAudioPlayer::lastErrorText() const {
  switch (_lastError) {
    case TINY_AUDIO_ERROR_NONE:
      return "none";
    case TINY_AUDIO_ERROR_CLIP_NOT_FOUND:
      return "clip not found";
    case TINY_AUDIO_ERROR_INDEX_OUT_OF_RANGE:
      return "index out of range";
    case TINY_AUDIO_ERROR_QUEUE_FULL:
      return "queue full";
    case TINY_AUDIO_ERROR_LOAD_CHUNK_FAILED:
      return "load chunk failed";
    case TINY_AUDIO_ERROR_NUMBER_OUT_OF_RANGE:
      return "number out of range";
    case TINY_AUDIO_ERROR_NUMBER_WORD_NOT_FOUND:
      return "number word not found";
    default:
      return "unknown";
  }
}

void TinyAudioPlayer::handleInterrupt() {
  playNextSample();
}

bool TinyAudioPlayer::readClip(uint16_t index, AudioClipInfo &clip) const {
  if (index >= audioClipCount) {
    return false;
  }

#if defined(TINY_AUDIO_METADATA_IN_RAM)
  memcpy(&clip, &audioClips[index], sizeof(AudioClipInfo));
#elif defined(ARDUINO_ARCH_AVR) || defined(ESP8266)
  memcpy_P(&clip, &audioClips[index], sizeof(AudioClipInfo));
#else
  memcpy(&clip, &audioClips[index], sizeof(AudioClipInfo));
#endif

  return true;
}

bool TinyAudioPlayer::findClip(const char *name, AudioClipInfo &clip) const {
  for (uint16_t i = 0; i < audioClipCount; i++) {
    if (!readClip(i, clip)) {
      continue;
    }

    if (nameEquals(name, clip.name)) {
      return true;
    }
  }

  return false;
}

bool TinyAudioPlayer::nameEquals(const char *ramName, const char *storedName) const {
#if defined(TINY_AUDIO_METADATA_IN_RAM)
  return strcmp(ramName, storedName) == 0;
#elif defined(ARDUINO_ARCH_AVR) || defined(ESP8266)
  for (uint16_t i = 0; ; i++) {
    char a = ramName[i];
    char b = (char)pgm_read_byte_near(storedName + i);

    if (a != b) {
      return false;
    }
    if (a == '\0') {
      return true;
    }
  }
#else
  return strcmp(ramName, storedName) == 0;
#endif
}

uint8_t TinyAudioPlayer::applyVolume(uint8_t sample) const {
  int centered = (int)sample - TINY_AUDIO_CENTER_VALUE;
  int amplified = TINY_AUDIO_CENTER_VALUE + (centered * (int)_volumePercent) / 100;

  if (amplified < 0) {
    return 0;
  }
  if (amplified > 255) {
    return 255;
  }
  return (uint8_t)amplified;
}

uint8_t TinyAudioPlayer::applyEnvelope(uint8_t sample) const {
#if TINY_AUDIO_FADE_MS <= 0
  return sample;
#else
  if (_currentSampleRate == 0 || _currentLength < 4) {
    return sample;
  }

  uint32_t fadeSamples = ((uint32_t)_currentSampleRate * (uint32_t)TINY_AUDIO_FADE_MS + 999UL) / 1000UL;
  uint32_t halfLength = _currentLength / 2UL;

  if (fadeSamples > halfLength) {
    fadeSamples = halfLength;
  }
  if (fadeSamples == 0) {
    return sample;
  }

  uint32_t position = _sampleIndex;
  uint32_t remaining = position < _currentLength ? _currentLength - position - 1UL : 0;
  uint32_t scale = fadeSamples;

  if (position < scale) {
    scale = position;
  }
  if (remaining < scale) {
    scale = remaining;
  }
  if (scale >= fadeSamples) {
    return sample;
  }

  int centered = (int)sample - TINY_AUDIO_CENTER_VALUE;
  int smoothed = TINY_AUDIO_CENTER_VALUE + (centered * (int32_t)scale) / (int32_t)fadeSamples;

  if (smoothed < 0) {
    return 0;
  }
  if (smoothed > 255) {
    return 255;
  }
  return (uint8_t)smoothed;
#endif
}

uint8_t TinyAudioPlayer::clampVolume(uint8_t percent) const {
  return percent > 100 ? 100 : percent;
}

bool TinyAudioPlayer::queueOrStart(const AudioClipInfo &clip, uint8_t volumePercent, uint16_t gapBeforeMs, uint16_t sampleRate) {
  bool wasPlaying = _playing;
  disableSampleTimer();

  bool ok = false;
  if (_playing || _queueCount > 0 || _queueGapActive) {
    ok = enqueueClip(clip, volumePercent, gapBeforeMs, sampleRate);
    if (wasPlaying) {
      enableSampleTimer();
    }
  } else {
    ok = startClip(clip, volumePercent, sampleRate);
    if (ok) {
      enableSampleTimer();
    }
  }

  if (ok) {
    _lastError = TINY_AUDIO_ERROR_NONE;
  }
  return ok;
}

bool TinyAudioPlayer::startClip(const AudioClipInfo &clip, uint8_t volumePercent, uint16_t sampleRate) {
  _volumePercent = clampVolume(volumePercent);
  _currentSampleRate = sampleRate > 0 ? sampleRate : 8000;
  _sampleIntervalMicros = samplePeriodMicros();
  setupSampleTimer();
  _currentLoadChunk = clip.loadChunk;
  _currentChunkCount = clip.chunkCount;
  _currentChunkIndex = 0;
  _currentChunkStart = 0;
  _currentLength = clip.length;
  _sampleIndex = 0;

  if (!loadCurrentChunk()) {
    _playing = false;
    _currentLoadChunk = nullptr;
    _currentLength = 0;
    _lastError = TINY_AUDIO_ERROR_LOAD_CHUNK_FAILED;
    setOutput(TINY_AUDIO_IDLE_VALUE);
    return false;
  }

  _playing = true;
#if !defined(ARDUINO_ARCH_AVR)
  _lastSampleMicros = micros();
#else
  _lastSampleMicros = 0;
#endif
  setOutput(TINY_AUDIO_CENTER_VALUE);
  return true;
}

bool TinyAudioPlayer::enqueueClip(const AudioClipInfo &clip, uint8_t volumePercent, uint16_t gapBeforeMs, uint16_t sampleRate) {
  if (_queueCount >= TINY_AUDIO_QUEUE_SIZE) {
    _lastError = TINY_AUDIO_ERROR_QUEUE_FULL;
    return false;
  }

  _queue[_queueTail].clip = clip;
  _queue[_queueTail].volumePercent = clampVolume(volumePercent);
  _queue[_queueTail].gapBeforeMs = gapBeforeMs;
  _queue[_queueTail].sampleRate = sampleRate > 0 ? sampleRate : 8000;
  _queueTail = (uint8_t)((_queueTail + 1) % TINY_AUDIO_QUEUE_SIZE);
  _queueCount++;
  return true;
}

bool TinyAudioPlayer::dequeueClip(AudioQueueItem &item) {
  if (_queueCount == 0) {
    return false;
  }

  item = _queue[_queueHead];
  _queueHead = (uint8_t)((_queueHead + 1) % TINY_AUDIO_QUEUE_SIZE);
  _queueCount--;
  return true;
}

bool TinyAudioPlayer::startNextQueuedClip() {
  AudioQueueItem item;
  if (!dequeueClip(item)) {
    return false;
  }

  return startClip(item.clip, item.volumePercent, item.sampleRate);
}

void TinyAudioPlayer::serviceQueue() {
  if (_playing || _queueCount == 0) {
    return;
  }

  AudioQueueItem &nextItem = _queue[_queueHead];

  if (nextItem.gapBeforeMs > 0) {
    if (!_queueGapActive) {
      _queueGapActive = true;
      _queueGapUntilMs = millis() + nextItem.gapBeforeMs;
      return;
    }

    if ((int32_t)(millis() - _queueGapUntilMs) < 0) {
      return;
    }
  }

  _queueGapActive = false;
  startNextQueuedClip();
  if (_playing) {
    enableSampleTimer();
  }
}

void TinyAudioPlayer::finishCurrentClip() {
  disableSampleTimer();
  _playing = false;
  _sampleIndex = 0;
  _currentLoadChunk = nullptr;
  _currentChunk = AudioDataChunk{0, 0};
  _currentChunkCount = 0;
  _currentChunkIndex = 0;
  _currentChunkStart = 0;
  _currentLength = 0;
  setOutput(_queueCount > 0 || _queueGapActive ? TINY_AUDIO_CENTER_VALUE : TINY_AUDIO_IDLE_VALUE);
}

void TinyAudioPlayer::clearQueue() {
  _queueHead = 0;
  _queueTail = 0;
  _queueCount = 0;
  _queueGapActive = false;
  _queueGapUntilMs = 0;
}

bool TinyAudioPlayer::loadCurrentChunk() {
  if (!_currentLoadChunk || _currentChunkIndex >= _currentChunkCount) {
    _currentChunk = AudioDataChunk{0, 0};
    return false;
  }

  if (!_currentLoadChunk(_currentChunkIndex, _currentChunk)) {
    _currentChunk = AudioDataChunk{0, 0};
    return false;
  }

  return _currentChunk.length > 0;
}

uint8_t TinyAudioPlayer::readChunkByte(uint16_t offset) const {
#if defined(TINY_AUDIO_USE_FAR_PROGMEM)
  return pgm_read_byte_far(_currentChunk.data + offset);
#else
  return pgm_read_byte_near(_currentChunk.data + offset);
#endif
}

void TinyAudioPlayer::setupOutput() {
#if defined(ARDUINO_ARCH_AVR)
  _avrPwmChannel = TINY_AUDIO_AVR_PWM_NONE;
#endif

  if (_directSpeakerMode) {
    digitalWrite(_speakerPin, LOW);
    return;
  }

#if defined(ARDUINO_ARCH_AVR)
#if defined(__AVR_ATmega2560__)
  switch (_speakerPin) {
    case 2:
      TCCR3A = _BV(COM3B1) | _BV(WGM30);
      TCCR3B = _BV(WGM32) | _BV(CS30);
      OCR3B = TINY_AUDIO_IDLE_VALUE;
      _avrPwmChannel = TINY_AUDIO_AVR_PWM_3B;
      break;
    case 3:
      TCCR3A = _BV(COM3C1) | _BV(WGM30);
      TCCR3B = _BV(WGM32) | _BV(CS30);
      OCR3C = TINY_AUDIO_IDLE_VALUE;
      _avrPwmChannel = TINY_AUDIO_AVR_PWM_3C;
      break;
    case 5:
      TCCR3A = _BV(COM3A1) | _BV(WGM30);
      TCCR3B = _BV(WGM32) | _BV(CS30);
      OCR3A = TINY_AUDIO_IDLE_VALUE;
      _avrPwmChannel = TINY_AUDIO_AVR_PWM_3A;
      break;
    case 6:
      TCCR4A = _BV(COM4A1) | _BV(WGM40);
      TCCR4B = _BV(WGM42) | _BV(CS40);
      OCR4A = TINY_AUDIO_IDLE_VALUE;
      _avrPwmChannel = TINY_AUDIO_AVR_PWM_4A;
      break;
    case 7:
      TCCR4A = _BV(COM4B1) | _BV(WGM40);
      TCCR4B = _BV(WGM42) | _BV(CS40);
      OCR4B = TINY_AUDIO_IDLE_VALUE;
      _avrPwmChannel = TINY_AUDIO_AVR_PWM_4B;
      break;
    case 8:
      TCCR4A = _BV(COM4C1) | _BV(WGM40);
      TCCR4B = _BV(WGM42) | _BV(CS40);
      OCR4C = TINY_AUDIO_IDLE_VALUE;
      _avrPwmChannel = TINY_AUDIO_AVR_PWM_4C;
      break;
    case 9:
      TCCR2A = _BV(COM2B1) | _BV(WGM21) | _BV(WGM20);
      TCCR2B = _BV(CS20);
      OCR2B = TINY_AUDIO_IDLE_VALUE;
      _avrPwmChannel = TINY_AUDIO_AVR_PWM_2B;
      break;
    case 10:
      TCCR2A = _BV(COM2A1) | _BV(WGM21) | _BV(WGM20);
      TCCR2B = _BV(CS20);
      OCR2A = TINY_AUDIO_IDLE_VALUE;
      _avrPwmChannel = TINY_AUDIO_AVR_PWM_2A;
      break;
    case 44:
      TCCR5A = _BV(COM5C1) | _BV(WGM50);
      TCCR5B = _BV(WGM52) | _BV(CS50);
      OCR5C = TINY_AUDIO_IDLE_VALUE;
      _avrPwmChannel = TINY_AUDIO_AVR_PWM_5C;
      break;
    case 45:
      TCCR5A = _BV(COM5B1) | _BV(WGM50);
      TCCR5B = _BV(WGM52) | _BV(CS50);
      OCR5B = TINY_AUDIO_IDLE_VALUE;
      _avrPwmChannel = TINY_AUDIO_AVR_PWM_5B;
      break;
    case 46:
      TCCR5A = _BV(COM5A1) | _BV(WGM50);
      TCCR5B = _BV(WGM52) | _BV(CS50);
      OCR5A = TINY_AUDIO_IDLE_VALUE;
      _avrPwmChannel = TINY_AUDIO_AVR_PWM_5A;
      break;
    default:
      _directSpeakerMode = true;
      digitalWrite(_speakerPin, LOW);
      break;
  }
#else
  if (_speakerPin == 9) {
    TCCR1A = _BV(COM1A1) | _BV(WGM10);
    TCCR1B = _BV(WGM12) | _BV(CS10);
    OCR1A = TINY_AUDIO_IDLE_VALUE;
    _avrPwmChannel = TINY_AUDIO_AVR_PWM_1A;
  } else if (_speakerPin == 10) {
    TCCR1A = _BV(COM1B1) | _BV(WGM10);
    TCCR1B = _BV(WGM12) | _BV(CS10);
    OCR1B = TINY_AUDIO_IDLE_VALUE;
    _avrPwmChannel = TINY_AUDIO_AVR_PWM_1B;
  } else {
    _directSpeakerMode = true;
    digitalWrite(_speakerPin, LOW);
  }
#endif
#elif defined(ESP8266)
  analogWriteRange(255);
  analogWriteFreq(TINY_AUDIO_PWM_FREQUENCY);
  analogWrite(_speakerPin, TINY_AUDIO_IDLE_VALUE);
#elif defined(ESP32)
#if defined(ESP_ARDUINO_VERSION_MAJOR) && ESP_ARDUINO_VERSION_MAJOR >= 3
  ledcAttach(_speakerPin, TINY_AUDIO_PWM_FREQUENCY, TINY_AUDIO_ESP32_PWM_BITS);
  ledcWrite(_speakerPin, TINY_AUDIO_IDLE_VALUE);
#else
  ledcSetup(TINY_AUDIO_ESP32_PWM_CHANNEL, TINY_AUDIO_PWM_FREQUENCY, TINY_AUDIO_ESP32_PWM_BITS);
  ledcAttachPin(_speakerPin, TINY_AUDIO_ESP32_PWM_CHANNEL);
  ledcWrite(TINY_AUDIO_ESP32_PWM_CHANNEL, TINY_AUDIO_IDLE_VALUE);
#endif
#else
  analogWrite(_speakerPin, TINY_AUDIO_IDLE_VALUE);
#endif
}

void TinyAudioPlayer::setupSampleTimer() {
#if defined(ARDUINO_ARCH_AVR)
  disableSampleTimer();

#if defined(__AVR_ATmega2560__)
  uint32_t compare = timerCompare(1);
  uint8_t clockBits = _BV(CS10);

  if (compare > 65535UL) {
    compare = timerCompare(8);
    clockBits = _BV(CS11);
  }
  if (compare > 65535UL) {
    compare = timerCompare(64);
    clockBits = _BV(CS11) | _BV(CS10);
  }

  TCCR1A = 0;
  TCCR1B = _BV(WGM12) | clockBits;
  OCR1A = (uint16_t)(compare > 65535UL ? 65535UL : compare);
#else
  struct Timer2Option {
    uint16_t prescaler;
    uint8_t clockBits;
  };

  const Timer2Option options[] = {
    { 1, _BV(CS20) },
    { 8, _BV(CS21) },
    { 32, _BV(CS21) | _BV(CS20) },
    { 64, _BV(CS22) },
    { 128, _BV(CS22) | _BV(CS20) },
    { 256, _BV(CS22) | _BV(CS21) },
    { 1024, _BV(CS22) | _BV(CS21) | _BV(CS20) }
  };

  uint8_t ocr = 249;
  uint8_t clockBits = _BV(CS21);

  for (uint8_t i = 0; i < sizeof(options) / sizeof(options[0]); i++) {
    uint32_t compare = timerCompare(options[i].prescaler);
    if (compare <= 255UL) {
      ocr = (uint8_t)compare;
      clockBits = options[i].clockBits;
      break;
    }
  }

  TCCR2A = _BV(WGM21);
  TCCR2B = clockBits;
  OCR2A = ocr;
#endif
#elif defined(ESP32) && defined(TINY_AUDIO_ESP32_USE_TIMER)
  disableSampleTimer();

  if (_esp32Timer) {
    timerEnd(_esp32Timer);
    _esp32Timer = nullptr;
  }

#if defined(ESP_ARDUINO_VERSION_MAJOR) && ESP_ARDUINO_VERSION_MAJOR >= 3
  _esp32Timer = timerBegin(_currentSampleRate > 0 ? _currentSampleRate : 8000UL);
  if (_esp32Timer) {
    timerAttachInterrupt(_esp32Timer, tinyAudioEsp32TimerIsr);
    timerAlarm(_esp32Timer, 1, true, 0);
    timerStop(_esp32Timer);
  }
#else
  _esp32Timer = timerBegin(TINY_AUDIO_ESP32_TIMER_NUMBER, 80, true);
  if (_esp32Timer) {
    timerAttachInterrupt(_esp32Timer, tinyAudioEsp32TimerIsr, true);
    timerAlarmWrite(_esp32Timer, samplePeriodMicros(), true);
    timerAlarmDisable(_esp32Timer);
  }
#endif
#endif
}

uint32_t TinyAudioPlayer::samplePeriodMicros() const {
  if (_currentSampleRate == 0) {
    return 125;
  }

  uint32_t period = (1000000UL + _currentSampleRate / 2UL) / _currentSampleRate;
  return period > 0 ? period : 1;
}

uint32_t TinyAudioPlayer::timerCompare(uint32_t prescaler) const {
  if (_currentSampleRate == 0 || prescaler == 0) {
    return 0;
  }

  uint32_t divisor = prescaler * (uint32_t)_currentSampleRate;
  uint32_t ticks = ((uint32_t)F_CPU + divisor / 2UL) / divisor;
  return ticks > 0 ? ticks - 1UL : 0;
}

void TinyAudioPlayer::enableSampleTimer() {
#if defined(ARDUINO_ARCH_AVR)
#if defined(__AVR_ATmega2560__)
  TCNT1 = 0;
  TIMSK1 = _BV(OCIE1A);
#else
  TCNT2 = 0;
  TIMSK2 = _BV(OCIE2A);
#endif
#elif defined(ESP32) && defined(TINY_AUDIO_ESP32_USE_TIMER)
  if (_esp32Timer) {
#if defined(ESP_ARDUINO_VERSION_MAJOR) && ESP_ARDUINO_VERSION_MAJOR >= 3
    timerWrite(_esp32Timer, 0);
    timerStart(_esp32Timer);
#else
    timerWrite(_esp32Timer, 0);
    timerAlarmEnable(_esp32Timer);
#endif
  }
#endif
}

void TinyAudioPlayer::disableSampleTimer() {
#if defined(ARDUINO_ARCH_AVR)
#if defined(__AVR_ATmega2560__)
  TIMSK1 = 0;
#else
  TIMSK2 = 0;
#endif
#elif defined(ESP32) && defined(TINY_AUDIO_ESP32_USE_TIMER)
  if (_esp32Timer) {
#if defined(ESP_ARDUINO_VERSION_MAJOR) && ESP_ARDUINO_VERSION_MAJOR >= 3
    timerStop(_esp32Timer);
#else
    timerAlarmDisable(_esp32Timer);
#endif
  }
#endif
}

void TinyAudioPlayer::setOutput(uint8_t value) {
  value = applyVolume(value);

  if (_directSpeakerMode) {
    digitalWrite(_speakerPin, value >= 128 ? HIGH : LOW);
    return;
  }

#if defined(ARDUINO_ARCH_AVR)
  switch (_avrPwmChannel) {
    case TINY_AUDIO_AVR_PWM_1A:
      OCR1A = value;
      break;
    case TINY_AUDIO_AVR_PWM_1B:
      OCR1B = value;
      break;
    case TINY_AUDIO_AVR_PWM_2A:
      OCR2A = value;
      break;
    case TINY_AUDIO_AVR_PWM_2B:
      OCR2B = value;
      break;
#if defined(OCR3A)
    case TINY_AUDIO_AVR_PWM_3A:
      OCR3A = value;
      break;
#endif
#if defined(OCR3B)
    case TINY_AUDIO_AVR_PWM_3B:
      OCR3B = value;
      break;
#endif
#if defined(OCR3C)
    case TINY_AUDIO_AVR_PWM_3C:
      OCR3C = value;
      break;
#endif
#if defined(OCR4A)
    case TINY_AUDIO_AVR_PWM_4A:
      OCR4A = value;
      break;
#endif
#if defined(OCR4B)
    case TINY_AUDIO_AVR_PWM_4B:
      OCR4B = value;
      break;
#endif
#if defined(OCR4C)
    case TINY_AUDIO_AVR_PWM_4C:
      OCR4C = value;
      break;
#endif
#if defined(OCR5A)
    case TINY_AUDIO_AVR_PWM_5A:
      OCR5A = value;
      break;
#endif
#if defined(OCR5B)
    case TINY_AUDIO_AVR_PWM_5B:
      OCR5B = value;
      break;
#endif
#if defined(OCR5C)
    case TINY_AUDIO_AVR_PWM_5C:
      OCR5C = value;
      break;
#endif
    default:
      digitalWrite(_speakerPin, value >= 128 ? HIGH : LOW);
      break;
  }
#elif defined(ESP32)
#if defined(ESP_ARDUINO_VERSION_MAJOR) && ESP_ARDUINO_VERSION_MAJOR >= 3
  ledcWrite(_speakerPin, value);
#else
  ledcWrite(TINY_AUDIO_ESP32_PWM_CHANNEL, value);
#endif
#else
  analogWrite(_speakerPin, value);
#endif
}

void TinyAudioPlayer::playNextSample() {
  if (!_playing) {
    return;
  }

  if (_sampleIndex < _currentLength) {
    while (_currentChunk.length > 0 && _sampleIndex >= _currentChunkStart + _currentChunk.length) {
      _currentChunkStart += _currentChunk.length;
      _currentChunkIndex++;
      if (!loadCurrentChunk()) {
        finishCurrentClip();
        return;
      }
    }

    uint16_t chunkOffset = (uint16_t)(_sampleIndex - _currentChunkStart);
    uint8_t sample = applyEnvelope(readChunkByte(chunkOffset));
    _sampleIndex++;
    setOutput(sample);
  } else {
    finishCurrentClip();
  }
}

#if defined(ARDUINO_ARCH_AVR)
#if defined(__AVR_ATmega2560__)
ISR(TIMER1_COMPA_vect) {
  if (TinyAudioPlayer::activePlayer) {
    TinyAudioPlayer::activePlayer->handleInterrupt();
  }
}
#else
ISR(TIMER2_COMPA_vect) {
  if (TinyAudioPlayer::activePlayer) {
    TinyAudioPlayer::activePlayer->handleInterrupt();
  }
}
#endif
#endif
