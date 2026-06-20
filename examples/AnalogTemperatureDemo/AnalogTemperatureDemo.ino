// Đọc số cần Arduino Mega, ESP8266, ESP32 hoặc board có bộ nhớ lớn hơn.
#define TINY_AUDIO_ONLY_nhiet_do
#define TINY_AUDIO_ONLY_do_am
#define TINY_AUDIO_ONLY_do_c
#define TINY_AUDIO_ONLY_phan_tram

#include <VN_VOICE.h>
#include <VNVoiceExampleAudio.h>
#include <VNVoiceNumber.h>

// Chọn chân phát âm thanh:
// - Arduino Uno: dùng chân 9 hoặc 10 để âm thanh rõ hơn.
// - Arduino Nano: dùng chân 9 hoặc 10 để âm thanh rõ hơn, không nên dùng chân 5.
// - Arduino Mega: nên dùng chân 9 hoặc 10; 
// - ESP8266 NodeMCU: nên dùng D5/GPIO14, D6/GPIO12 hoặc D7/GPIO13.
// - ESP8266: không nên dùng D3/GPIO0, D4/GPIO2, D8/GPIO15 vì đây là các chân liên quan đến boot.
// - ESP32: nên dùng GPIO25 hoặc GPIO26; cũng có thể dùng GPIO27, GPIO32, GPIO33.
// - ESP32: không dùng GPIO34 đến GPIO39 vì các chân này chỉ đọc vào, không xuất âm thanh được.
const uint8_t SPEAKER_PIN = 9;

int readMockTemperatureC() {
  return random(24, 38);
}

int readMockHumi() {
  return random(40, 90);
}

void setup() {
  randomSeed(micros());
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

    playSound("do_am", 100);
    waitAudioDone(150);

    playNumber(readMockHumi(), 100, 3);
    waitAudioDone(150);

    playSound("phan_tram", 100);
    waitAudioDone(2000);
  }
}
