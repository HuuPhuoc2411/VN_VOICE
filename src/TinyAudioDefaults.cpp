#include "TinyAudioPlayer.h"

#if defined(__GNUC__)
extern const uint16_t audioSampleRate __attribute__((weak)) = 8000;
extern const uint16_t audioClipCount __attribute__((weak)) = 0;

extern const AudioClipInfo audioClips[] TINY_AUDIO_METADATA_PROGMEM __attribute__((weak)) = {
  { 0, 0, 0, 0 },
};
#endif
