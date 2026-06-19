// SO_DEM needs Arduino Mega, ESP8266, ESP32, or a larger board.
#define SO_DEM
#define TINY_AUDIO_ONLY_nhiet_do
#define TINY_AUDIO_ONLY_do_c

#include <VN_VOICE.h>
#include <VNVoiceExampleAudio.h>

const uint8_t SPEAKER_PIN = 9;  // Arduino Mega: speaker on D9 PWM.
const uint8_t SENSOR_PIN = A0;  // Arduino Mega: mock analog sensor on A0.

int readMockTemperatureC() {
  return random(24, 38);
}

void setup() {
  randomSeed(analogRead(SENSOR_PIN));
  TinyAudio.begin(SPEAKER_PIN);
}

void loop() {
  TinyAudio.loop();

  if (!TinyAudio.isPlaying()) {
    playSound("nhiet_do", 100);
    waitAudioDone(150);

    playNumber(readMockTemperatureC(), 100, 3);
    waitAudioDone(150);

    playSound("do_c", 100);
    waitAudioDone(2000);
  }
}
