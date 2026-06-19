#ifndef TINY_AUDIO_PLAYER_H
#define TINY_AUDIO_PLAYER_H

#include <Arduino.h>
#include <stdint.h>
#include <limits.h>
#include <string.h>

#if defined(ARDUINO_ARCH_AVR)
#include <avr/interrupt.h>
#include <avr/pgmspace.h>
#elif defined(ESP8266) || defined(ESP32)
#include <pgmspace.h>
#endif

#if defined(SO_DEM) && defined(ARDUINO_ARCH_AVR) && !defined(__AVR_ATmega2560__)
#error "SO_DEM number voice data is too large for Arduino Uno/Nano. Remove #define SO_DEM to play short custom audio clips only, or use Arduino Mega/ESP8266/ESP32 for number reading."
#endif

#ifndef PROGMEM
#define PROGMEM
#endif

#ifndef pgm_read_byte_near
#define pgm_read_byte_near(address_short) (*(const uint8_t *)(address_short))
#endif

#ifndef TINY_AUDIO_DEFAULT_SPEAKER_PIN
#if defined(ESP32)
#define TINY_AUDIO_DEFAULT_SPEAKER_PIN 25
#elif defined(ESP8266)
#define TINY_AUDIO_DEFAULT_SPEAKER_PIN 14
#else
#define TINY_AUDIO_DEFAULT_SPEAKER_PIN 9
#endif
#endif

#ifndef TINY_AUDIO_QUEUE_SIZE
#if defined(ARDUINO_ARCH_AVR) && !defined(__AVR_ATmega2560__)
#define TINY_AUDIO_QUEUE_SIZE 4
#else
#define TINY_AUDIO_QUEUE_SIZE 24
#endif
#endif

#if defined(ARDUINO_ARCH_AVR) && defined(RAMPZ)
#define TINY_AUDIO_USE_FAR_PROGMEM 1
typedef uint_farptr_t TinyAudioDataPtr;
#else
typedef const uint8_t *TinyAudioDataPtr;
#endif

#if defined(TINY_AUDIO_USE_FAR_PROGMEM)
#define TINY_AUDIO_METADATA_IN_RAM 1
#define TINY_AUDIO_METADATA_PROGMEM
#define TINY_AUDIO_NAME_PROGMEM
#else
#define TINY_AUDIO_METADATA_PROGMEM PROGMEM
#define TINY_AUDIO_NAME_PROGMEM PROGMEM
#endif

struct AudioDataChunk {
  TinyAudioDataPtr data;
  uint16_t length;
};

typedef bool (*AudioChunkLoader)(uint16_t chunkIndex, AudioDataChunk &chunk);

struct AudioClipInfo {
  const char *name;
  AudioChunkLoader loadChunk;
  uint16_t chunkCount;
  uint32_t length;
};

struct AudioQueueItem {
  AudioClipInfo clip;
  uint8_t volumePercent;
  uint16_t gapBeforeMs;
  uint16_t sampleRate;
};

enum TinyAudioError {
  TINY_AUDIO_ERROR_NONE = 0,
  TINY_AUDIO_ERROR_CLIP_NOT_FOUND = 1,
  TINY_AUDIO_ERROR_INDEX_OUT_OF_RANGE = 2,
  TINY_AUDIO_ERROR_QUEUE_FULL = 3,
  TINY_AUDIO_ERROR_LOAD_CHUNK_FAILED = 4,
  TINY_AUDIO_ERROR_NUMBER_OUT_OF_RANGE = 5,
  TINY_AUDIO_ERROR_NUMBER_WORD_NOT_FOUND = 6
};

class TinyAudioPlayer {
public:
  TinyAudioPlayer();

  void begin(uint8_t speakerPin = TINY_AUDIO_DEFAULT_SPEAKER_PIN, bool directSpeakerMode = false, uint8_t volumePercent = 100);
  void begin(int speakerPin, bool directSpeakerMode = false, uint8_t volumePercent = 100);
  void begin(bool directSpeakerMode, uint8_t volumePercent = 100);
  bool play(const char *name);
  bool play(const char *name, uint8_t volumePercent);
  bool play(uint16_t index);
  bool play(uint16_t index, uint8_t volumePercent);
  bool playOrFirst(const char *name);
  bool playOrFirst(const char *name, uint8_t volumePercent);
  bool playNumber(int number, uint8_t volumePercent = 100, uint8_t speedLevel = 3);
  bool playNumber(long number, uint8_t volumePercent = 100, uint8_t speedLevel = 3);
#if UINT_MAX < UINT32_MAX
  bool playNumber(unsigned int number, uint8_t volumePercent = 100, uint8_t speedLevel = 3);
#endif
#if defined(ESP8266) || ULONG_MAX != UINT32_MAX
  bool playNumber(unsigned long number, uint8_t volumePercent = 100, uint8_t speedLevel = 3);
#endif
  bool playNumber(uint32_t number, uint8_t volumePercent = 100, uint8_t speedLevel = 3);
  bool playNumber(float number, uint8_t volumePercent = 100, uint8_t speedLevel = 3, uint8_t decimalDigits = 2);
  bool playNumber(double number, uint8_t volumePercent = 100, uint8_t speedLevel = 3, uint8_t decimalDigits = 2);
  bool playDigit(const char *digits, uint8_t volumePercent = 100, uint8_t speedLevel = 3);
  void stop();
  void loop();
  void waitAudioDone(uint16_t pauseAfterMs = 0);
  void setVolume(uint8_t percent);

  bool isPlaying() const;
  bool isSamplePlaying() const;
  uint8_t volume() const;
  uint16_t clipCount() const;
  uint8_t queueCount() const;
  bool queueGapActive() const;
  uint32_t sampleIndex() const;
  uint32_t currentLength() const;
  uint16_t currentSampleRate() const;
  uint8_t lastError() const;
  const char *lastErrorText() const;

  static TinyAudioPlayer *activePlayer;
  void handleInterrupt();

private:
  uint8_t _speakerPin;
  bool _directSpeakerMode;
  uint8_t _volumePercent;
  volatile bool _playing;
  volatile uint32_t _sampleIndex;
  AudioQueueItem _queue[TINY_AUDIO_QUEUE_SIZE];
  uint8_t _queueHead;
  uint8_t _queueTail;
  uint8_t _queueCount;
  bool _queueGapActive;
  uint32_t _queueGapUntilMs;
  AudioChunkLoader _currentLoadChunk;
  AudioDataChunk _currentChunk;
  uint16_t _currentChunkCount;
  uint16_t _currentChunkIndex;
  uint32_t _currentChunkStart;
  uint32_t _currentLength;
  uint16_t _currentSampleRate;
  uint32_t _sampleIntervalMicros;
  uint32_t _lastSampleMicros;
  uint8_t _lastError;
#if defined(ARDUINO_ARCH_AVR)
  uint8_t _avrPwmChannel;
#endif
#if defined(ESP32)
  hw_timer_t *_esp32Timer;
#endif

  bool readClip(uint16_t index, AudioClipInfo &clip) const;
  bool findClip(const char *name, AudioClipInfo &clip) const;
  bool nameEquals(const char *ramName, const char *storedName) const;
  uint8_t applyVolume(uint8_t sample) const;
  uint8_t applyEnvelope(uint8_t sample) const;
  uint8_t clampVolume(uint8_t percent) const;
  bool queueOrStart(const AudioClipInfo &clip, uint8_t volumePercent, uint16_t gapBeforeMs, uint16_t sampleRate);
  bool startClip(const AudioClipInfo &clip, uint8_t volumePercent, uint16_t sampleRate);
  bool enqueueClip(const AudioClipInfo &clip, uint8_t volumePercent, uint16_t gapBeforeMs, uint16_t sampleRate);
  bool dequeueClip(AudioQueueItem &item);
  bool startNextQueuedClip();
  void serviceQueue();
  void finishCurrentClip();
  void clearQueue();
  bool loadCurrentChunk();
  uint8_t readChunkByte(uint16_t offset) const;
  bool appendNumberToken(const char **tokens, uint8_t &count, const char *name) const;
  bool appendNumberGroup(uint16_t group, bool fullGroup, const char **tokens, uint8_t &count) const;
  bool appendIntegerNumberTokens(uint32_t number, const char **tokens, uint8_t &count) const;
  bool queueNumberTokens(const char **tokens, uint8_t count, uint8_t volumePercent, uint16_t wordGapMs);
  uint16_t numberSpeedGap(uint8_t speedLevel) const;
  bool playNumberWord(const char *name, uint8_t volumePercent, uint16_t gapBeforeMs);
  bool findSoDemClip(const char *name, AudioClipInfo &clip) const;
  void setupOutput();
  void setupSampleTimer();
  uint32_t samplePeriodMicros() const;
  uint32_t timerCompare(uint32_t prescaler) const;
  void enableSampleTimer();
  void disableSampleTimer();
  void setOutput(uint8_t value);
  void playNextSample();
};

extern TinyAudioPlayer TinyAudio;

inline bool playSound(const char *soundName, uint8_t volumePercent = 100) {
  return TinyAudio.playOrFirst(soundName, volumePercent);
}

inline bool playSound(uint16_t index, uint8_t volumePercent = 100) {
  return TinyAudio.play(index, volumePercent);
}

inline bool playNumber(int number, uint8_t volumePercent = 100, uint8_t speedLevel = 3) {
  return TinyAudio.playNumber(number, volumePercent, speedLevel);
}

inline bool playNumber(long number, uint8_t volumePercent = 100, uint8_t speedLevel = 3) {
  return TinyAudio.playNumber(number, volumePercent, speedLevel);
}

#if UINT_MAX < UINT32_MAX
inline bool playNumber(unsigned int number, uint8_t volumePercent = 100, uint8_t speedLevel = 3) {
  return TinyAudio.playNumber(number, volumePercent, speedLevel);
}
#endif

#if defined(ESP8266) || ULONG_MAX != UINT32_MAX
inline bool playNumber(unsigned long number, uint8_t volumePercent = 100, uint8_t speedLevel = 3) {
  return TinyAudio.playNumber(number, volumePercent, speedLevel);
}
#endif

inline bool playNumber(uint32_t number, uint8_t volumePercent = 100, uint8_t speedLevel = 3) {
  return TinyAudio.playNumber(number, volumePercent, speedLevel);
}

inline bool playNumber(double number, uint8_t volumePercent = 100, uint8_t speedLevel = 3, uint8_t decimalDigits = 2) {
  return TinyAudio.playNumber(number, volumePercent, speedLevel, decimalDigits);
}

inline bool playDigit(const char *digits, uint8_t volumePercent = 100, uint8_t speedLevel = 3) {
  return TinyAudio.playDigit(digits, volumePercent, speedLevel);
}

inline void waitAudioDone(uint16_t pauseAfterMs = 0) {
  TinyAudio.waitAudioDone(pauseAfterMs);
}

#if defined(SO_DEM)
extern const AudioClipInfo soDemClips[] TINY_AUDIO_METADATA_PROGMEM;
extern const uint16_t soDemClipCount;
extern const uint16_t soDemSampleRate;

inline bool TinyAudioPlayer::appendNumberToken(const char **tokens, uint8_t &count, const char *name) const {
  if (count >= 32) {
    return false;
  }

  tokens[count++] = name;
  return true;
}

inline bool TinyAudioPlayer::appendNumberGroup(uint16_t group, bool fullGroup, const char **tokens, uint8_t &count) const {
  static const char *const digits[] = {
    "khong", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin"
  };

  uint8_t hundreds = group / 100;
  uint8_t tens = (group / 10) % 10;
  uint8_t ones = group % 10;

  if (hundreds > 0) {
    if (!appendNumberToken(tokens, count, digits[hundreds])) return false;
    if (!appendNumberToken(tokens, count, "tram")) return false;
  } else if (fullGroup) {
    if (!appendNumberToken(tokens, count, "khong")) return false;
    if (!appendNumberToken(tokens, count, "tram")) return false;
  }

  if (tens == 0) {
    if (ones > 0) {
      if (hundreds > 0 || fullGroup) {
        if (!appendNumberToken(tokens, count, "le")) return false;
      }
      if (!appendNumberToken(tokens, count, digits[ones])) return false;
    }
    return true;
  }

  if (tens == 1) {
    if (!appendNumberToken(tokens, count, "muoi")) return false;
  } else {
    if (!appendNumberToken(tokens, count, digits[tens])) return false;
    if (!appendNumberToken(tokens, count, "muoi_chuc")) return false;
  }

  if (ones == 0) {
    return true;
  }

  if (ones == 1 && tens >= 2) {
    return appendNumberToken(tokens, count, "mot_dac_biet");
  }
  if (ones == 4 && tens >= 2) {
    return appendNumberToken(tokens, count, "tu");
  }
  if (ones == 5) {
    return appendNumberToken(tokens, count, "lam");
  }

  return appendNumberToken(tokens, count, digits[ones]);
}

inline bool TinyAudioPlayer::findSoDemClip(const char *name, AudioClipInfo &clip) const {
  for (uint16_t i = 0; i < soDemClipCount; i++) {
#if defined(TINY_AUDIO_METADATA_IN_RAM)
    memcpy(&clip, &soDemClips[i], sizeof(AudioClipInfo));
#elif defined(ARDUINO_ARCH_AVR) || defined(ESP8266)
    memcpy_P(&clip, &soDemClips[i], sizeof(AudioClipInfo));
#else
    memcpy(&clip, &soDemClips[i], sizeof(AudioClipInfo));
#endif

    if (nameEquals(name, clip.name)) {
      return true;
    }
  }

  return false;
}

inline bool TinyAudioPlayer::playNumberWord(const char *name, uint8_t volumePercent, uint16_t gapBeforeMs) {
  AudioClipInfo clip;
  if (!findSoDemClip(name, clip)) {
    _lastError = TINY_AUDIO_ERROR_NUMBER_WORD_NOT_FOUND;
    return false;
  }

  return queueOrStart(clip, volumePercent, gapBeforeMs, soDemSampleRate);
}

inline bool TinyAudioPlayer::appendIntegerNumberTokens(uint32_t number, const char **tokens, uint8_t &count) const {
  if (number > 999999999UL) {
    return false;
  }

  if (number == 0) {
    if (!appendNumberToken(tokens, count, "khong")) return false;
  } else {
    uint16_t millions = number / 1000000UL;
    uint16_t thousands = (number / 1000UL) % 1000UL;
    uint16_t units = number % 1000UL;
    bool hasHigherGroup = false;

    if (millions > 0) {
      if (!appendNumberGroup(millions, false, tokens, count)) return false;
      if (!appendNumberToken(tokens, count, "trieu")) return false;
      hasHigherGroup = true;
    }

    if (thousands > 0) {
      if (!appendNumberGroup(thousands, hasHigherGroup && thousands < 100, tokens, count)) return false;
      if (!appendNumberToken(tokens, count, "nghin")) return false;
      hasHigherGroup = true;
    }

    if (units > 0) {
      if (!appendNumberGroup(units, hasHigherGroup && units < 100, tokens, count)) return false;
    }
  }

  return true;
}

inline bool TinyAudioPlayer::queueNumberTokens(const char **tokens, uint8_t count, uint8_t volumePercent, uint16_t wordGapMs) {
  uint8_t availableQueueSlots = TINY_AUDIO_QUEUE_SIZE - _queueCount;
  uint8_t neededQueueSlots = count;
  if (!_playing && !_queueGapActive && _queueCount == 0 && neededQueueSlots > 0) {
    neededQueueSlots--;
  }
  if (neededQueueSlots > availableQueueSlots) {
    _lastError = TINY_AUDIO_ERROR_QUEUE_FULL;
    return false;
  }

  for (uint8_t i = 0; i < count; i++) {
    uint16_t gap = i == 0 ? 0 : wordGapMs;
    if (!playNumberWord(tokens[i], volumePercent, gap)) {
      return false;
    }
  }

  return true;
}

inline uint16_t TinyAudioPlayer::numberSpeedGap(uint8_t speedLevel) const {
  switch (speedLevel) {
    case 1:
      return 150;
    case 2:
      return 105;
    case 4:
      return 35;
    case 3:
    default:
      return 70;
  }
}

inline bool TinyAudioPlayer::playNumber(int number, uint8_t volumePercent, uint8_t speedLevel) {
  if (number < 0) {
    return false;
  }

  return playNumber((uint32_t)number, volumePercent, speedLevel);
}

inline bool TinyAudioPlayer::playNumber(long number, uint8_t volumePercent, uint8_t speedLevel) {
  if (number < 0) {
    return false;
  }

  return playNumber((uint32_t)number, volumePercent, speedLevel);
}

#if UINT_MAX < UINT32_MAX
inline bool TinyAudioPlayer::playNumber(unsigned int number, uint8_t volumePercent, uint8_t speedLevel) {
  return playNumber((uint32_t)number, volumePercent, speedLevel);
}
#endif

#if defined(ESP8266) || ULONG_MAX != UINT32_MAX
inline bool TinyAudioPlayer::playNumber(unsigned long number, uint8_t volumePercent, uint8_t speedLevel) {
  if (number > 999999999UL) {
    return false;
  }

  return playNumber((uint32_t)number, volumePercent, speedLevel);
}
#endif

inline bool TinyAudioPlayer::playNumber(uint32_t number, uint8_t volumePercent, uint8_t speedLevel) {
  const char *tokens[32];
  uint8_t count = 0;

  if (!appendIntegerNumberTokens(number, tokens, count)) {
    _lastError = TINY_AUDIO_ERROR_NUMBER_OUT_OF_RANGE;
    return false;
  }

  return queueNumberTokens(tokens, count, volumePercent, numberSpeedGap(speedLevel));
}

inline bool TinyAudioPlayer::playNumber(float number, uint8_t volumePercent, uint8_t speedLevel, uint8_t decimalDigits) {
  return playNumber((double)number, volumePercent, speedLevel, decimalDigits);
}

inline bool TinyAudioPlayer::playNumber(double number, uint8_t volumePercent, uint8_t speedLevel, uint8_t decimalDigits) {
  if (number < 0.0 || number > 999999999.999999) {
    _lastError = TINY_AUDIO_ERROR_NUMBER_OUT_OF_RANGE;
    return false;
  }

  if (decimalDigits > 6) {
    decimalDigits = 6;
  }

  uint32_t integerPart = (uint32_t)number;
  uint32_t factor = 1;
  for (uint8_t i = 0; i < decimalDigits; i++) {
    factor *= 10UL;
  }

  double fraction = number - (double)integerPart;
  if (fraction < 0.0) {
    fraction = 0.0;
  }

  uint32_t fractionValue = 0;
  if (decimalDigits > 0) {
    fractionValue = (uint32_t)(fraction * (double)factor + 0.5);
    if (fractionValue >= factor) {
      integerPart++;
      fractionValue -= factor;
      if (integerPart > 999999999UL) {
        _lastError = TINY_AUDIO_ERROR_NUMBER_OUT_OF_RANGE;
        return false;
      }
    }
  }

  if (decimalDigits == 0 || fractionValue == 0) {
    return playNumber(integerPart, volumePercent, speedLevel);
  }

  static const char *const digits[] = {
    "khong", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin"
  };

  const char *tokens[32];
  uint8_t count = 0;

  if (!appendIntegerNumberTokens(integerPart, tokens, count)) {
    _lastError = TINY_AUDIO_ERROR_NUMBER_OUT_OF_RANGE;
    return false;
  }
  if (!appendNumberToken(tokens, count, "cham")) {
    _lastError = TINY_AUDIO_ERROR_QUEUE_FULL;
    return false;
  }

  uint32_t divisor = factor / 10UL;
  while (divisor > 0) {
    uint8_t digit = (fractionValue / divisor) % 10UL;
    if (!appendNumberToken(tokens, count, digits[digit])) {
      _lastError = TINY_AUDIO_ERROR_QUEUE_FULL;
      return false;
    }
    divisor /= 10UL;
  }

  return queueNumberTokens(tokens, count, volumePercent, numberSpeedGap(speedLevel));
}

inline bool TinyAudioPlayer::playDigit(const char *digitText, uint8_t volumePercent, uint8_t speedLevel) {
  static const char *const digitNames[] = {
    "khong", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin"
  };

  if (digitText == nullptr || digitText[0] == '\0') {
    _lastError = TINY_AUDIO_ERROR_NUMBER_OUT_OF_RANGE;
    return false;
  }

  const char *tokens[20];
  uint8_t count = 0;

  for (const char *cursor = digitText; *cursor != '\0'; cursor++) {
    char digit = *cursor;
    if (digit < '0' || digit > '9') {
      _lastError = TINY_AUDIO_ERROR_NUMBER_OUT_OF_RANGE;
      return false;
    }

    if (count >= 20) {
      _lastError = TINY_AUDIO_ERROR_NUMBER_OUT_OF_RANGE;
      return false;
    }

    if (!appendNumberToken(tokens, count, digitNames[digit - '0'])) {
      _lastError = TINY_AUDIO_ERROR_QUEUE_FULL;
      return false;
    }
  }

  return queueNumberTokens(tokens, count, volumePercent, numberSpeedGap(speedLevel));
}
#else
inline bool TinyAudioPlayer::playNumber(int, uint8_t, uint8_t) {
  return false;
}

inline bool TinyAudioPlayer::playNumber(long, uint8_t, uint8_t) {
  return false;
}

#if UINT_MAX < UINT32_MAX
inline bool TinyAudioPlayer::playNumber(unsigned int, uint8_t, uint8_t) {
  return false;
}
#endif

#if defined(ESP8266) || ULONG_MAX != UINT32_MAX
inline bool TinyAudioPlayer::playNumber(unsigned long, uint8_t, uint8_t) {
  return false;
}
#endif

inline bool TinyAudioPlayer::playNumber(uint32_t, uint8_t, uint8_t) {
  return false;
}

inline bool TinyAudioPlayer::playNumber(float, uint8_t, uint8_t, uint8_t) {
  return false;
}

inline bool TinyAudioPlayer::playNumber(double, uint8_t, uint8_t, uint8_t) {
  return false;
}

inline bool TinyAudioPlayer::playDigit(const char *, uint8_t, uint8_t) {
  return false;
}
#endif

#if defined(SO_DEM) && !defined(SO_DEM_DATA_H)
#if defined(__has_include)
#if __has_include("so_dem.h")
#include "so_dem.h"
#endif
#else
#include "so_dem.h"
#endif
#endif

#endif
