#define TINY_AUDIO_ONLY_xin_chao

#include <VN_VOICE.h>
#include <VNVoiceExampleAudio.h>

const uint8_t SPEAKER_PIN = 9;  // Arduino Uno/Nano: speaker on D9 PWM.
const uint8_t BUTTON_PIN = 2;   // Arduino Uno/Nano: button on D2 to GND.

bool buttonHandled = false;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  TinyAudio.begin(SPEAKER_PIN);
}

void loop() {
  TinyAudio.loop();

  if (digitalRead(BUTTON_PIN) == LOW && !buttonHandled) {
    playSound("xin_chao", 100);
    buttonHandled = true;
  }

  if (digitalRead(BUTTON_PIN) == HIGH) {
    buttonHandled = false;
  }
}
