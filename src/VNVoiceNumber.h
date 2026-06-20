#ifndef VN_VOICE_NUMBER_H
#define VN_VOICE_NUMBER_H

#ifndef SO_DEM
#define SO_DEM
#endif

#define TINY_AUDIO_ENABLE_NUMBER

#include "VN_VOICE.h"
#include "TinyAudioPlayer.h"

#if defined(ARDUINO_ARCH_AVR) && !defined(__AVR_ATmega2560__)
#error "VNVoiceNumber.h number voice data is too large for Arduino Uno/Nano. Remove #include <VNVoiceNumber.h> to play short custom audio clips only, or use Arduino Mega/ESP8266/ESP32 for number reading."
#endif

#include "so_dem.h"

#endif
