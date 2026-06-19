// SO_DEM needs Arduino Mega, ESP8266, ESP32, or a larger board.
#define SO_DEM
#define TINY_AUDIO_EXAMPLE_NO_CUSTOM_AUDIO

#include <VN_VOICE.h>
#include <VNVoiceExampleAudio.h>

const uint8_t SPEAKER_PIN = 9;  // Arduino Mega: speaker on D9 PWM.

void setup() {
  TinyAudio.begin(SPEAKER_PIN);
}

void loop() {
  TinyAudio.loop();

  if (!TinyAudio.isPlaying()) {
    playNumber(24421, 100, 3);
    waitAudioDone(1000);

    playNumber(36.58, 100, 3, 2);
    waitAudioDone(1000);

    playDigit("0934511069", 100, 3);
    waitAudioDone(3000);
  }
}
