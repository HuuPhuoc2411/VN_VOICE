#define TINY_AUDIO_ONLY_vi_dieu_khien

#include <VN_VOICE.h>
#include "audio_data.h"

const uint8_t SPEAKER_PIN = 9;  // Arduino Uno/Nano: speaker on D9 PWM.

void setup() {
  TinyAudio.begin(SPEAKER_PIN);
}

void loop() {
  TinyAudio.loop();

  if (!TinyAudio.isPlaying()) {
    playSound("vi_dieu_khien", 100);
    waitAudioDone(2000);
  }
}
