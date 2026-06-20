#define TINY_AUDIO_ONLY_vi_dieu_khien

#include <VN_VOICE.h>
#include "audio_data.h"

// Chọn chân phát âm thanh:
// - Arduino Uno: dùng chân 9 hoặc 10 để âm thanh rõ hơn.
// - Arduino Nano: dùng chân 9 hoặc 10 để âm thanh rõ hơn, không nên dùng chân 5.
// - Arduino Mega: nên dùng chân 9 hoặc 10; 
// - ESP8266 NodeMCU: nên dùng D5/GPIO14, D6/GPIO12 hoặc D7/GPIO13.
// - ESP8266: không nên dùng D3/GPIO0, D4/GPIO2, D8/GPIO15 vì đây là các chân liên quan đến boot.
// - ESP32: nên dùng GPIO25 hoặc GPIO26; cũng có thể dùng GPIO27, GPIO32, GPIO33.
// - ESP32: không dùng GPIO34 đến GPIO39 vì các chân này chỉ đọc vào, không xuất âm thanh được.

const uint8_t SPEAKER_PIN = 9;  

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
