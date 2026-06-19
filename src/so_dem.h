#ifndef SO_DEM_DATA_H
#define SO_DEM_DATA_H

#if defined(SO_DEM)

#include <Arduino.h>
#include "TinyAudioPlayer.h"

// Audio names:
// Name: "lam"
// Name: "tu"
// Name: "mot_dac_biet"
// Name: "trieu"
// Name: "nghin"
// Name: "le"
// Name: "tram"
// Name: "muoi_chuc"
// Name: "muoi"
// Name: "chin"
// Name: "tam"
// Name: "bay"
// Name: "sau"
// Name: "nam"
// Name: "bon"
// Name: "ba"
// Name: "hai"
// Name: "mot"
// Name: "khong"
// Name: "cham"

// Clip selection macros
#if defined(SO_DEM_ONLY_lam)
#define SO_DEM_HAS_SELECTION
#endif
#if defined(SO_DEM_ONLY_tu)
#define SO_DEM_HAS_SELECTION
#endif
#if defined(SO_DEM_ONLY_mot_dac_biet)
#define SO_DEM_HAS_SELECTION
#endif
#if defined(SO_DEM_ONLY_trieu)
#define SO_DEM_HAS_SELECTION
#endif
#if defined(SO_DEM_ONLY_nghin)
#define SO_DEM_HAS_SELECTION
#endif
#if defined(SO_DEM_ONLY_le)
#define SO_DEM_HAS_SELECTION
#endif
#if defined(SO_DEM_ONLY_tram)
#define SO_DEM_HAS_SELECTION
#endif
#if defined(SO_DEM_ONLY_muoi_chuc)
#define SO_DEM_HAS_SELECTION
#endif
#if defined(SO_DEM_ONLY_muoi)
#define SO_DEM_HAS_SELECTION
#endif
#if defined(SO_DEM_ONLY_chin)
#define SO_DEM_HAS_SELECTION
#endif
#if defined(SO_DEM_ONLY_tam)
#define SO_DEM_HAS_SELECTION
#endif
#if defined(SO_DEM_ONLY_bay)
#define SO_DEM_HAS_SELECTION
#endif
#if defined(SO_DEM_ONLY_sau)
#define SO_DEM_HAS_SELECTION
#endif
#if defined(SO_DEM_ONLY_nam)
#define SO_DEM_HAS_SELECTION
#endif
#if defined(SO_DEM_ONLY_bon)
#define SO_DEM_HAS_SELECTION
#endif
#if defined(SO_DEM_ONLY_ba)
#define SO_DEM_HAS_SELECTION
#endif
#if defined(SO_DEM_ONLY_hai)
#define SO_DEM_HAS_SELECTION
#endif
#if defined(SO_DEM_ONLY_mot)
#define SO_DEM_HAS_SELECTION
#endif
#if defined(SO_DEM_ONLY_khong)
#define SO_DEM_HAS_SELECTION
#endif
#if defined(SO_DEM_ONLY_cham)
#define SO_DEM_HAS_SELECTION
#endif
#ifndef SO_DEM_HAS_SELECTION
#define SO_DEM_INCLUDE_ALL
#endif

extern const uint16_t soDemSampleRate = 8000;
extern const uint16_t soDemClipCount =
  0
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_lam)
  + 1
#endif
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_tu)
  + 1
#endif
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_mot_dac_biet)
  + 1
#endif
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_trieu)
  + 1
#endif
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_nghin)
  + 1
#endif
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_le)
  + 1
#endif
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_tram)
  + 1
#endif
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_muoi_chuc)
  + 1
#endif
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_muoi)
  + 1
#endif
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_chin)
  + 1
#endif
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_tam)
  + 1
#endif
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_bay)
  + 1
#endif
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_sau)
  + 1
#endif
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_nam)
  + 1
#endif
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_bon)
  + 1
#endif
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_ba)
  + 1
#endif
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_hai)
  + 1
#endif
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_mot)
  + 1
#endif
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_khong)
  + 1
#endif
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_cham)
  + 1
#endif
;

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_lam)
const char soDemName_lam[] TINY_AUDIO_NAME_PROGMEM = "lam";
extern const uint8_t soDemData_lam_0[] PROGMEM;
static bool soDemLoadChunk_lam(uint16_t chunkIndex, AudioDataChunk &chunk) {
  switch (chunkIndex) {
    case 0:
#if defined(TINY_AUDIO_USE_FAR_PROGMEM)
      chunk.data = pgm_get_far_address(soDemData_lam_0);
#else
      chunk.data = soDemData_lam_0;
#endif
      chunk.length = 2378;
      return true;
    default:
      chunk.data = 0;
      chunk.length = 0;
      return false;
  }
}
#endif

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_tu)
const char soDemName_tu[] TINY_AUDIO_NAME_PROGMEM = "tu";
extern const uint8_t soDemData_tu_0[] PROGMEM;
static bool soDemLoadChunk_tu(uint16_t chunkIndex, AudioDataChunk &chunk) {
  switch (chunkIndex) {
    case 0:
#if defined(TINY_AUDIO_USE_FAR_PROGMEM)
      chunk.data = pgm_get_far_address(soDemData_tu_0);
#else
      chunk.data = soDemData_tu_0;
#endif
      chunk.length = 1708;
      return true;
    default:
      chunk.data = 0;
      chunk.length = 0;
      return false;
  }
}
#endif

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_mot_dac_biet)
const char soDemName_mot_dac_biet[] TINY_AUDIO_NAME_PROGMEM = "mot_dac_biet";
extern const uint8_t soDemData_mot_dac_biet_0[] PROGMEM;
static bool soDemLoadChunk_mot_dac_biet(uint16_t chunkIndex, AudioDataChunk &chunk) {
  switch (chunkIndex) {
    case 0:
#if defined(TINY_AUDIO_USE_FAR_PROGMEM)
      chunk.data = pgm_get_far_address(soDemData_mot_dac_biet_0);
#else
      chunk.data = soDemData_mot_dac_biet_0;
#endif
      chunk.length = 1776;
      return true;
    default:
      chunk.data = 0;
      chunk.length = 0;
      return false;
  }
}
#endif

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_trieu)
const char soDemName_trieu[] TINY_AUDIO_NAME_PROGMEM = "trieu";
extern const uint8_t soDemData_trieu_0[] PROGMEM;
static bool soDemLoadChunk_trieu(uint16_t chunkIndex, AudioDataChunk &chunk) {
  switch (chunkIndex) {
    case 0:
#if defined(TINY_AUDIO_USE_FAR_PROGMEM)
      chunk.data = pgm_get_far_address(soDemData_trieu_0);
#else
      chunk.data = soDemData_trieu_0;
#endif
      chunk.length = 2297;
      return true;
    default:
      chunk.data = 0;
      chunk.length = 0;
      return false;
  }
}
#endif

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_nghin)
const char soDemName_nghin[] TINY_AUDIO_NAME_PROGMEM = "nghin";
extern const uint8_t soDemData_nghin_0[] PROGMEM;
static bool soDemLoadChunk_nghin(uint16_t chunkIndex, AudioDataChunk &chunk) {
  switch (chunkIndex) {
    case 0:
#if defined(TINY_AUDIO_USE_FAR_PROGMEM)
      chunk.data = pgm_get_far_address(soDemData_nghin_0);
#else
      chunk.data = soDemData_nghin_0;
#endif
      chunk.length = 2707;
      return true;
    default:
      chunk.data = 0;
      chunk.length = 0;
      return false;
  }
}
#endif

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_le)
const char soDemName_le[] TINY_AUDIO_NAME_PROGMEM = "le";
extern const uint8_t soDemData_le_0[] PROGMEM;
static bool soDemLoadChunk_le(uint16_t chunkIndex, AudioDataChunk &chunk) {
  switch (chunkIndex) {
    case 0:
#if defined(TINY_AUDIO_USE_FAR_PROGMEM)
      chunk.data = pgm_get_far_address(soDemData_le_0);
#else
      chunk.data = soDemData_le_0;
#endif
      chunk.length = 3003;
      return true;
    default:
      chunk.data = 0;
      chunk.length = 0;
      return false;
  }
}
#endif

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_tram)
const char soDemName_tram[] TINY_AUDIO_NAME_PROGMEM = "tram";
extern const uint8_t soDemData_tram_0[] PROGMEM;
static bool soDemLoadChunk_tram(uint16_t chunkIndex, AudioDataChunk &chunk) {
  switch (chunkIndex) {
    case 0:
#if defined(TINY_AUDIO_USE_FAR_PROGMEM)
      chunk.data = pgm_get_far_address(soDemData_tram_0);
#else
      chunk.data = soDemData_tram_0;
#endif
      chunk.length = 2246;
      return true;
    default:
      chunk.data = 0;
      chunk.length = 0;
      return false;
  }
}
#endif

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_muoi_chuc)
const char soDemName_muoi_chuc[] TINY_AUDIO_NAME_PROGMEM = "muoi_chuc";
extern const uint8_t soDemData_muoi_chuc_0[] PROGMEM;
static bool soDemLoadChunk_muoi_chuc(uint16_t chunkIndex, AudioDataChunk &chunk) {
  switch (chunkIndex) {
    case 0:
#if defined(TINY_AUDIO_USE_FAR_PROGMEM)
      chunk.data = pgm_get_far_address(soDemData_muoi_chuc_0);
#else
      chunk.data = soDemData_muoi_chuc_0;
#endif
      chunk.length = 2210;
      return true;
    default:
      chunk.data = 0;
      chunk.length = 0;
      return false;
  }
}
#endif

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_muoi)
const char soDemName_muoi[] TINY_AUDIO_NAME_PROGMEM = "muoi";
extern const uint8_t soDemData_muoi_0[] PROGMEM;
static bool soDemLoadChunk_muoi(uint16_t chunkIndex, AudioDataChunk &chunk) {
  switch (chunkIndex) {
    case 0:
#if defined(TINY_AUDIO_USE_FAR_PROGMEM)
      chunk.data = pgm_get_far_address(soDemData_muoi_0);
#else
      chunk.data = soDemData_muoi_0;
#endif
      chunk.length = 2224;
      return true;
    default:
      chunk.data = 0;
      chunk.length = 0;
      return false;
  }
}
#endif

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_chin)
const char soDemName_chin[] TINY_AUDIO_NAME_PROGMEM = "chin";
extern const uint8_t soDemData_chin_0[] PROGMEM;
static bool soDemLoadChunk_chin(uint16_t chunkIndex, AudioDataChunk &chunk) {
  switch (chunkIndex) {
    case 0:
#if defined(TINY_AUDIO_USE_FAR_PROGMEM)
      chunk.data = pgm_get_far_address(soDemData_chin_0);
#else
      chunk.data = soDemData_chin_0;
#endif
      chunk.length = 2327;
      return true;
    default:
      chunk.data = 0;
      chunk.length = 0;
      return false;
  }
}
#endif

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_tam)
const char soDemName_tam[] TINY_AUDIO_NAME_PROGMEM = "tam";
extern const uint8_t soDemData_tam_0[] PROGMEM;
static bool soDemLoadChunk_tam(uint16_t chunkIndex, AudioDataChunk &chunk) {
  switch (chunkIndex) {
    case 0:
#if defined(TINY_AUDIO_USE_FAR_PROGMEM)
      chunk.data = pgm_get_far_address(soDemData_tam_0);
#else
      chunk.data = soDemData_tam_0;
#endif
      chunk.length = 2311;
      return true;
    default:
      chunk.data = 0;
      chunk.length = 0;
      return false;
  }
}
#endif

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_bay)
const char soDemName_bay[] TINY_AUDIO_NAME_PROGMEM = "bay";
extern const uint8_t soDemData_bay_0[] PROGMEM;
static bool soDemLoadChunk_bay(uint16_t chunkIndex, AudioDataChunk &chunk) {
  switch (chunkIndex) {
    case 0:
#if defined(TINY_AUDIO_USE_FAR_PROGMEM)
      chunk.data = pgm_get_far_address(soDemData_bay_0);
#else
      chunk.data = soDemData_bay_0;
#endif
      chunk.length = 2708;
      return true;
    default:
      chunk.data = 0;
      chunk.length = 0;
      return false;
  }
}
#endif

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_sau)
const char soDemName_sau[] TINY_AUDIO_NAME_PROGMEM = "sau";
extern const uint8_t soDemData_sau_0[] PROGMEM;
static bool soDemLoadChunk_sau(uint16_t chunkIndex, AudioDataChunk &chunk) {
  switch (chunkIndex) {
    case 0:
#if defined(TINY_AUDIO_USE_FAR_PROGMEM)
      chunk.data = pgm_get_far_address(soDemData_sau_0);
#else
      chunk.data = soDemData_sau_0;
#endif
      chunk.length = 2852;
      return true;
    default:
      chunk.data = 0;
      chunk.length = 0;
      return false;
  }
}
#endif

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_nam)
const char soDemName_nam[] TINY_AUDIO_NAME_PROGMEM = "nam";
extern const uint8_t soDemData_nam_0[] PROGMEM;
static bool soDemLoadChunk_nam(uint16_t chunkIndex, AudioDataChunk &chunk) {
  switch (chunkIndex) {
    case 0:
#if defined(TINY_AUDIO_USE_FAR_PROGMEM)
      chunk.data = pgm_get_far_address(soDemData_nam_0);
#else
      chunk.data = soDemData_nam_0;
#endif
      chunk.length = 2929;
      return true;
    default:
      chunk.data = 0;
      chunk.length = 0;
      return false;
  }
}
#endif

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_bon)
const char soDemName_bon[] TINY_AUDIO_NAME_PROGMEM = "bon";
extern const uint8_t soDemData_bon_0[] PROGMEM;
static bool soDemLoadChunk_bon(uint16_t chunkIndex, AudioDataChunk &chunk) {
  switch (chunkIndex) {
    case 0:
#if defined(TINY_AUDIO_USE_FAR_PROGMEM)
      chunk.data = pgm_get_far_address(soDemData_bon_0);
#else
      chunk.data = soDemData_bon_0;
#endif
      chunk.length = 2780;
      return true;
    default:
      chunk.data = 0;
      chunk.length = 0;
      return false;
  }
}
#endif

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_ba)
const char soDemName_ba[] TINY_AUDIO_NAME_PROGMEM = "ba";
extern const uint8_t soDemData_ba_0[] PROGMEM;
static bool soDemLoadChunk_ba(uint16_t chunkIndex, AudioDataChunk &chunk) {
  switch (chunkIndex) {
    case 0:
#if defined(TINY_AUDIO_USE_FAR_PROGMEM)
      chunk.data = pgm_get_far_address(soDemData_ba_0);
#else
      chunk.data = soDemData_ba_0;
#endif
      chunk.length = 2286;
      return true;
    default:
      chunk.data = 0;
      chunk.length = 0;
      return false;
  }
}
#endif

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_hai)
const char soDemName_hai[] TINY_AUDIO_NAME_PROGMEM = "hai";
extern const uint8_t soDemData_hai_0[] PROGMEM;
static bool soDemLoadChunk_hai(uint16_t chunkIndex, AudioDataChunk &chunk) {
  switch (chunkIndex) {
    case 0:
#if defined(TINY_AUDIO_USE_FAR_PROGMEM)
      chunk.data = pgm_get_far_address(soDemData_hai_0);
#else
      chunk.data = soDemData_hai_0;
#endif
      chunk.length = 2047;
      return true;
    default:
      chunk.data = 0;
      chunk.length = 0;
      return false;
  }
}
#endif

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_mot)
const char soDemName_mot[] TINY_AUDIO_NAME_PROGMEM = "mot";
extern const uint8_t soDemData_mot_0[] PROGMEM;
static bool soDemLoadChunk_mot(uint16_t chunkIndex, AudioDataChunk &chunk) {
  switch (chunkIndex) {
    case 0:
#if defined(TINY_AUDIO_USE_FAR_PROGMEM)
      chunk.data = pgm_get_far_address(soDemData_mot_0);
#else
      chunk.data = soDemData_mot_0;
#endif
      chunk.length = 2089;
      return true;
    default:
      chunk.data = 0;
      chunk.length = 0;
      return false;
  }
}
#endif

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_khong)
const char soDemName_khong[] TINY_AUDIO_NAME_PROGMEM = "khong";
extern const uint8_t soDemData_khong_0[] PROGMEM;
static bool soDemLoadChunk_khong(uint16_t chunkIndex, AudioDataChunk &chunk) {
  switch (chunkIndex) {
    case 0:
#if defined(TINY_AUDIO_USE_FAR_PROGMEM)
      chunk.data = pgm_get_far_address(soDemData_khong_0);
#else
      chunk.data = soDemData_khong_0;
#endif
      chunk.length = 2320;
      return true;
    default:
      chunk.data = 0;
      chunk.length = 0;
      return false;
  }
}
#endif

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_cham)
const char soDemName_cham[] TINY_AUDIO_NAME_PROGMEM = "cham";
extern const uint8_t soDemData_cham_0[] PROGMEM;
static bool soDemLoadChunk_cham(uint16_t chunkIndex, AudioDataChunk &chunk) {
  switch (chunkIndex) {
    case 0:
#if defined(TINY_AUDIO_USE_FAR_PROGMEM)
      chunk.data = pgm_get_far_address(soDemData_cham_0);
#else
      chunk.data = soDemData_cham_0;
#endif
      chunk.length = 2421;
      return true;
    default:
      chunk.data = 0;
      chunk.length = 0;
      return false;
  }
}
#endif

extern const AudioClipInfo soDemClips[] TINY_AUDIO_METADATA_PROGMEM = {
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_lam)
  { soDemName_lam, soDemLoadChunk_lam, 1, 2378 },
#endif
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_tu)
  { soDemName_tu, soDemLoadChunk_tu, 1, 1708 },
#endif
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_mot_dac_biet)
  { soDemName_mot_dac_biet, soDemLoadChunk_mot_dac_biet, 1, 1776 },
#endif
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_trieu)
  { soDemName_trieu, soDemLoadChunk_trieu, 1, 2297 },
#endif
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_nghin)
  { soDemName_nghin, soDemLoadChunk_nghin, 1, 2707 },
#endif
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_le)
  { soDemName_le, soDemLoadChunk_le, 1, 3003 },
#endif
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_tram)
  { soDemName_tram, soDemLoadChunk_tram, 1, 2246 },
#endif
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_muoi_chuc)
  { soDemName_muoi_chuc, soDemLoadChunk_muoi_chuc, 1, 2210 },
#endif
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_muoi)
  { soDemName_muoi, soDemLoadChunk_muoi, 1, 2224 },
#endif
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_chin)
  { soDemName_chin, soDemLoadChunk_chin, 1, 2327 },
#endif
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_tam)
  { soDemName_tam, soDemLoadChunk_tam, 1, 2311 },
#endif
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_bay)
  { soDemName_bay, soDemLoadChunk_bay, 1, 2708 },
#endif
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_sau)
  { soDemName_sau, soDemLoadChunk_sau, 1, 2852 },
#endif
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_nam)
  { soDemName_nam, soDemLoadChunk_nam, 1, 2929 },
#endif
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_bon)
  { soDemName_bon, soDemLoadChunk_bon, 1, 2780 },
#endif
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_ba)
  { soDemName_ba, soDemLoadChunk_ba, 1, 2286 },
#endif
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_hai)
  { soDemName_hai, soDemLoadChunk_hai, 1, 2047 },
#endif
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_mot)
  { soDemName_mot, soDemLoadChunk_mot, 1, 2089 },
#endif
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_khong)
  { soDemName_khong, soDemLoadChunk_khong, 1, 2320 },
#endif
#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_cham)
  { soDemName_cham, soDemLoadChunk_cham, 1, 2421 },
#endif
};

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_lam)
const uint8_t soDemData_lam_0[] PROGMEM = {
  128, 127, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 128, 127, 127, 127, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 127, 127, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 127, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  129, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 127, 127, 126, 126, 125, 125,
  124, 124, 123, 122, 122, 121, 121, 121, 122, 122, 122, 123, 124, 125, 126, 127, 128, 130, 132, 136,
  137, 140, 142, 143, 145, 144, 147, 145, 145, 141, 141, 135, 133, 127, 126, 121, 118, 116, 115, 115,
  114, 114, 115, 116, 117, 119, 120, 122, 122, 122, 123, 123, 121, 121, 120, 119, 118, 117, 116, 116,
  117, 118, 121, 123, 125, 128, 130, 134, 136, 140, 140, 144, 142, 157, 149, 152, 149, 157, 146, 152,
  137, 144, 133, 132, 120, 123, 113, 112, 107, 107, 109, 107, 111, 115, 121, 121, 128, 129, 136, 135,
  137, 139, 140, 137, 138, 133, 132, 128, 124, 120, 119, 114, 112, 110, 110, 109, 110, 109, 111, 112,
  114, 117, 120, 123, 126, 128, 130, 133, 133, 136, 136, 140, 136, 141, 138, 156, 143, 153, 145, 157,
  145, 151, 141, 146, 138, 134, 130, 123, 122, 112, 115, 110, 114, 108, 116, 116, 121, 121, 126, 131,
  133, 134, 135, 135, 135, 133, 133, 129, 127, 123, 118, 117, 112, 111, 108, 108, 106, 107, 106, 108,
  109, 113, 117, 120, 125, 127, 130, 133, 133, 137, 141, 137, 143, 141, 158, 146, 157, 150, 164, 147,
  157, 141, 152, 137, 139, 127, 126, 119, 113, 112, 109, 112, 107, 115, 113, 122, 120, 127, 129, 134,
  134, 137, 136, 137, 135, 133, 131, 127, 123, 119, 114, 111, 108, 105, 105, 103, 104, 103, 105, 108,
  111, 115, 119, 123, 127, 128, 131, 133, 137, 139, 138, 144, 144, 169, 149, 163, 155, 171, 154, 158,
  147, 151, 142, 132, 129, 118, 120, 105, 110, 103, 109, 104, 111, 116, 121, 126, 129, 136, 137, 139,
  139, 140, 138, 135, 132, 128, 123, 119, 111, 111, 104, 105, 99, 104, 98, 104, 102, 107, 108, 114,
  117, 122, 125, 128, 131, 134, 136, 139, 141, 141, 144, 163, 159, 164, 156, 173, 158, 168, 141, 159,
  138, 142, 122, 121, 113, 107, 103, 100, 107, 101, 112, 110, 125, 126, 132, 137, 142, 145, 144, 140,
  141, 137, 133, 126, 124, 116, 112, 104, 101, 101, 97, 97, 98, 99, 103, 103, 109, 113, 117, 122,
  124, 129, 130, 134, 138, 138, 139, 147, 147, 182, 155, 171, 160, 177, 159, 159, 148, 148, 143, 123,
  123, 107, 114, 97, 101, 98, 105, 107, 112, 122, 129, 137, 138, 147, 147, 151, 143, 140, 138, 134,
  128, 120, 113, 113, 101, 103, 96, 99, 98, 98, 100, 102, 105, 109, 111, 117, 120, 123, 123, 129,
  128, 135, 137, 131, 148, 148, 175, 160, 171, 169, 173, 168, 156, 151, 146, 144, 126, 119, 107, 112,
  97, 101, 96, 105, 111, 114, 123, 130, 141, 143, 149, 148, 151, 146, 144, 135, 133, 124, 120, 110,
  108, 100, 100, 93, 97, 96, 98, 100, 104, 107, 110, 115, 118, 122, 124, 127, 128, 133, 132, 133,
  142, 144, 175, 161, 173, 165, 175, 165, 167, 146, 150, 144, 132, 122, 108, 108, 100, 100, 94, 101,
  106, 115, 120, 126, 135, 144, 150, 149, 150, 148, 148, 137, 134, 125, 125, 115, 110, 104, 102, 99,
  99, 95, 101, 100, 104, 108, 110, 114, 117, 118, 120, 123, 125, 128, 130, 126, 135, 145, 169, 161,
  175, 171, 175, 175, 161, 156, 146, 150, 132, 125, 105, 106, 95, 97, 92, 92, 105, 113, 122, 129,
  137, 148, 155, 155, 153, 147, 145, 136, 132, 120, 122, 113, 111, 106, 106, 103, 104, 102, 104, 106,
  112, 114, 114, 117, 114, 114, 114, 114, 118, 122, 121, 121, 128, 160, 165, 171, 172, 183, 175, 184,
  152, 151, 144, 142, 130, 113, 105, 100, 105, 96, 98, 102, 116, 124, 131, 138, 146, 151, 153, 145,
  139, 126, 121, 111, 112, 104, 115, 115, 118, 123, 120, 116, 113, 110, 115, 116, 114, 113, 108, 101,
  99, 98, 103, 118, 122, 114, 109, 145, 209, 200, 200, 208, 194, 186, 121, 87, 94, 115, 111, 117,
  126, 157, 175, 156, 141, 133, 128, 112, 92, 77, 91, 107, 121, 135, 139, 144, 142, 128, 121, 111,
  114, 114, 115, 121, 124, 120, 113, 104, 103, 107, 106, 104, 102, 90, 87, 101, 118, 151, 157, 138,
  109, 144, 228, 196, 197, 190, 171, 164, 107, 65, 84, 142, 144, 165, 159, 158, 167, 135, 99, 85,
  77, 92, 106, 116, 134, 161, 168, 158, 134, 95, 89, 79, 98, 118, 141, 162, 163, 144, 116, 91,
  82, 84, 96, 108, 118, 111, 97, 92, 95, 111, 130, 147, 146, 112, 79, 154, 232, 218, 203, 192,
  150, 155, 93, 60, 102, 154, 184, 198, 167, 142, 135, 107, 80, 74, 76, 111, 143, 150, 151, 154,
  149, 136, 99, 71, 81, 91, 132, 158, 157, 153, 141, 116, 98, 90, 88, 97, 108, 113, 113, 105,
  95, 98, 102, 110, 125, 140, 142, 100, 76, 164, 238, 242, 215, 164, 118, 137, 103, 85, 111, 157,
  194, 215, 172, 119, 103, 91, 87, 90, 87, 116, 156, 167, 150, 132, 117, 116, 100, 85, 88, 113,
  150, 165, 149, 128, 112, 103, 104, 107, 104, 112, 118, 118, 112, 104, 94, 94, 98, 107, 123, 134,
  132, 98, 72, 150, 238, 245, 223, 163, 103, 120, 123, 110, 126, 153, 185, 213, 184, 118, 87, 75,
  85, 103, 111, 122, 148, 163, 152, 131, 116, 102, 97, 98, 103, 115, 144, 161, 152, 132, 109, 95,
  105, 115, 112, 107, 106, 109, 118, 116, 100, 97, 101, 103, 116, 126, 129, 100, 66, 117, 227, 244,
  238, 173, 100, 94, 129, 122, 131, 144, 170, 205, 206, 144, 97, 76, 90, 106, 116, 113, 127, 151,
  162, 143, 121, 105, 95, 92, 100, 110, 137, 158, 158, 139, 116, 100, 102, 111, 115, 112, 111, 110,
  114, 115, 106, 96, 93, 98, 111, 124, 131, 110, 66, 77, 189, 241, 252, 211, 133, 78, 110, 122,
  130, 144, 155, 180, 210, 186, 126, 89, 80, 94, 119, 130, 125, 132, 148, 148, 135, 122, 101, 88,
  97, 105, 119, 143, 151, 143, 133, 114, 102, 109, 113, 111, 112, 109, 109, 115, 115, 108, 102, 97,
  99, 113, 125, 121, 83, 58, 119, 205, 243, 244, 188, 116, 98, 113, 120, 135, 146, 161, 191, 202,
  167, 131, 101, 91, 99, 115, 117, 132, 143, 147, 145, 138, 118, 102, 90, 91, 106, 131, 146, 153,
  138, 121, 106, 103, 103, 106, 107, 109, 114, 119, 119, 112, 101, 93, 91, 97, 113, 128, 113, 77,
  76, 142, 198, 238, 230, 178, 117, 102, 106, 128, 151, 159, 167, 184, 187, 166, 143, 114, 96, 98,
  113, 123, 133, 138, 137, 136, 137, 128, 111, 96, 90, 98, 120, 134, 143, 142, 133, 126, 122, 112,
  103, 97, 97, 105, 119, 125, 123, 110, 98, 94, 102, 117, 127, 116, 85, 68, 98, 144, 181, 207,
  197, 165, 145, 136, 130, 141, 148, 153, 161, 167, 158, 155, 150, 138, 129, 127, 121, 121, 121, 116,
  115, 122, 125, 124, 121, 114, 110, 113, 115, 118, 121, 123, 127, 131, 130, 125, 121, 114, 111, 112,
  115, 120, 122, 119, 113, 107, 106, 109, 115, 123, 124, 117, 110, 115, 124, 127, 131, 129, 120, 120,
  125, 133, 148, 161, 166, 166, 165, 156, 155, 156, 154, 155, 155, 150, 144, 138, 126, 123, 126, 126,
  127, 126, 120, 117, 119, 120, 123, 125, 121, 118, 116, 114, 115, 115, 114, 114, 113, 113, 113, 112,
  111, 109, 109, 110, 110, 109, 109, 107, 98, 100, 111, 117, 120, 120, 115, 110, 123, 133, 149, 167,
  171, 171, 170, 166, 165, 173, 174, 171, 167, 156, 149, 143, 136, 131, 131, 129, 126, 118, 110, 106,
  108, 113, 118, 119, 117, 116, 114, 114, 114, 116, 118, 119, 118, 117, 118, 117, 117, 115, 113, 111,
  111, 112, 109, 105, 95, 94, 103, 107, 114, 116, 114, 110, 120, 128, 142, 162, 165, 168, 165, 160,
  159, 168, 173, 174, 171, 160, 151, 144, 139, 137, 139, 138, 133, 124, 118, 113, 112, 116, 119, 119,
  118, 116, 112, 112, 113, 116, 118, 120, 118, 117, 117, 117, 117, 116, 115, 113, 113, 112, 110, 106,
  95, 90, 96, 107, 110, 116, 112, 107, 113, 121, 134, 152, 161, 162, 162, 159, 156, 163, 171, 174,
  173, 166, 157, 149, 144, 145, 145, 146, 141, 132, 123, 117, 115, 117, 120, 120, 119, 115, 113, 110,
  111, 114, 116, 117, 118, 115, 114, 115, 116, 117, 116, 115, 114, 114, 113, 111, 106, 96, 93, 100,
  107, 111, 115, 112, 106, 114, 121, 133, 149, 156, 157, 157, 156, 155, 163, 169, 173, 171, 164, 157,
  150, 148, 146, 147, 146, 143, 135, 127, 121, 119, 120, 122, 122, 118, 115, 111, 112, 113, 115, 115,
  116, 116, 115, 115, 115, 116, 117, 116, 115, 114, 114, 114, 113, 111, 104, 97, 95, 104, 105, 112,
  112, 111, 109, 117, 121, 133, 146, 150, 154, 153, 153, 154, 162, 167, 170, 169, 164, 158, 152, 149,
  148, 150, 148, 145, 136, 129, 123, 121, 122, 123, 122, 119, 117, 114, 113, 114, 115, 118, 119, 118,
  116, 114, 113, 114, 116, 116, 116, 114, 112, 112, 110, 111, 109, 107, 101, 100, 104, 107, 110, 112,
  113, 112, 120, 124, 133, 144, 149, 153, 153, 154, 155, 161, 166, 168, 166, 162, 157, 153, 151, 150,
  150, 148, 143, 136, 131, 125, 124, 124, 124, 122, 120, 117, 115, 114, 114, 115, 115, 116, 116, 115,
  114, 114, 114, 114, 115, 115, 114, 113, 112, 111, 110, 110, 110, 110, 105, 104, 105, 110, 110, 115,
  115, 116, 121, 126, 131, 141, 148, 151, 155, 156, 155, 159, 163, 165, 165, 163, 160, 155, 152, 150,
  148, 149, 145, 139, 133, 128, 124, 123, 123, 121, 120, 117, 116, 114, 113, 114, 115, 116, 116, 115,
  114, 114, 113, 113, 112, 111, 112, 112, 112, 111, 109, 109, 109, 110, 110, 110, 106, 107, 111, 113,
  117, 120, 122, 123, 129, 132, 138, 146, 150, 154, 156, 157, 157, 160, 163, 164, 164, 161, 157, 154,
  151, 150, 150, 148, 144, 137, 133, 128, 125, 124, 123, 120, 118, 115, 113, 111, 112, 112, 113, 112,
  111, 111, 111, 111, 111, 111, 110, 109, 109, 110, 110, 110, 109, 109, 109, 109, 110, 112, 111, 111,
  112, 116, 117, 122, 125, 127, 131, 135, 138, 145, 150, 154, 157, 159, 158, 161, 162, 164, 164, 162,
  160, 157, 154, 151, 149, 148, 146, 141, 135, 130, 126, 123, 121, 119, 116, 114, 111, 109, 107, 108,
  108, 109, 109, 109, 109, 108, 109, 109, 109, 109, 109, 110, 109, 110, 110, 110, 110, 112, 112, 114,
  116, 115, 117, 119, 122, 123, 127, 129, 131, 134, 137, 140, 146, 150, 153, 156, 157, 157, 159, 160,
  160, 161, 159, 157, 154, 152, 150, 148, 146, 143, 138, 133, 129, 126, 123, 120, 118, 116, 113, 110,
  108, 109, 108, 109, 109, 109, 109, 110, 110, 110, 111, 112, 111, 111, 110, 110, 111, 112, 112, 112,
  113, 113, 115, 117, 119, 120, 121, 122, 125, 127, 130, 133, 134, 135, 138, 141, 143, 147, 150, 151,
  153, 153, 153, 155, 155, 155, 156, 155, 152, 150, 148, 146, 145, 142, 139, 136, 132, 128, 125, 121,
  118, 116, 113, 112, 110, 109, 107, 107, 107, 108, 108, 109, 109, 110, 110, 110, 110, 111, 112, 113,
  113, 113, 114, 114, 116, 118, 120, 121, 123, 124, 126, 128, 129, 131, 133, 134, 135, 137, 137, 138,
  140, 140, 142, 144, 145, 146, 147, 147, 147, 147, 148, 148, 147, 146, 145, 143, 142, 140, 138, 137,
  135, 133, 130, 127, 124, 122, 120, 118, 116, 114, 112, 111, 110, 110, 109, 109, 109, 109, 109, 110,
  110, 111, 113, 113, 115, 115, 117, 118, 120, 121, 122, 125, 126, 128, 129, 131, 132, 134, 135, 136,
  137, 138, 138, 139, 139, 139, 140, 140, 140, 140, 139, 138, 138, 138, 137, 137, 136, 135, 135, 134,
  133, 132, 131, 130, 129, 128, 127, 126, 125, 124, 123, 122, 121, 121, 120, 120, 120, 119, 119, 119,
  119, 119, 119, 119, 120, 120, 120, 121, 122, 122, 123, 124, 125, 126, 126, 127, 127, 128, 129, 129,
  130, 131, 131, 131, 132, 132, 133, 133, 134, 133, 133, 133, 133, 133, 132, 132, 131, 131, 130, 129,
  129, 128, 128, 127, 127, 127, 127, 127, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
  126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127,
  127, 127, 127, 127, 128, 128, 128, 129, 129, 129, 129, 130, 130, 130, 130, 130, 130, 130, 130, 130,
  130, 129, 129, 129, 129, 129, 128, 128, 128, 127, 128, 127, 127, 127, 127, 126, 126, 126, 126, 126,
  126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127,
  127, 127, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 129, 129, 129, 128, 128, 128,
  128, 129, 129, 129, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 128
};

#endif

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_tu)
const uint8_t soDemData_tu_0[] PROGMEM = {
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 127, 128, 128, 128, 127,
  128, 127, 127, 128, 128, 127, 127, 128, 127, 127, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 128, 127, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 129, 129, 128, 128, 129, 128, 128, 127, 128, 128,
  132, 131, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 128, 127, 126, 125, 127, 129, 131,
  130, 123, 131, 126, 127, 124, 126, 129, 131, 121, 129, 130, 134, 132, 130, 128, 129, 128, 125, 123,
  122, 123, 121, 117, 116, 115, 115, 113, 113, 113, 113, 116, 117, 116, 118, 113, 108, 116, 120, 126,
  136, 143, 150, 155, 155, 158, 165, 167, 164, 156, 147, 144, 135, 124, 119, 116, 114, 118, 123, 124,
  141, 144, 151, 152, 148, 145, 143, 132, 123, 116, 107, 96, 89, 78, 82, 84, 84, 83, 90, 94,
  97, 100, 94, 90, 78, 65, 113, 158, 131, 180, 172, 211, 214, 228, 162, 208, 183, 175, 131, 122,
  75, 110, 85, 70, 63, 96, 104, 146, 136, 151, 188, 211, 198, 197, 177, 176, 166, 131, 96, 93,
  81, 81, 75, 70, 84, 102, 100, 106, 105, 112, 111, 103, 84, 80, 72, 69, 58, 51, 55, 80,
  168, 186, 184, 220, 230, 252, 242, 212, 158, 197, 140, 110, 55, 61, 39, 89, 52, 74, 98, 159,
  166, 205, 180, 203, 217, 206, 160, 147, 114, 114, 113, 84, 87, 113, 122, 137, 144, 141, 155, 165,
  142, 124, 104, 87, 69, 51, 27, 29, 30, 42, 54, 68, 81, 106, 120, 134, 214, 237, 219, 237,
  215, 223, 193, 156, 85, 123, 75, 80, 45, 66, 52, 124, 114, 137, 150, 194, 194, 212, 183, 177,
  171, 165, 130, 108, 83, 98, 110, 115, 118, 143, 158, 174, 166, 155, 150, 150, 131, 107, 82, 70,
  59, 48, 36, 41, 48, 62, 77, 89, 105, 121, 130, 134, 125, 182, 232, 179, 200, 189, 201, 168,
  177, 94, 122, 109, 110, 67, 79, 66, 103, 120, 121, 128, 156, 177, 188, 188, 160, 166, 174, 156,
  122, 108, 108, 116, 124, 116, 126, 143, 162, 154, 151, 146, 147, 140, 119, 95, 84, 73, 62, 52,
  46, 51, 66, 77, 82, 91, 107, 121, 124, 119, 118, 187, 216, 182, 200, 182, 208, 183, 177, 98,
  134, 118, 119, 68, 83, 65, 105, 110, 114, 110, 149, 172, 183, 177, 170, 177, 183, 171, 138, 119,
  119, 122, 122, 113, 121, 133, 153, 146, 142, 140, 148, 138, 129, 106, 93, 82, 75, 56, 51, 56,
  61, 70, 79, 86, 95, 114, 117, 104, 115, 203, 195, 175, 190, 195, 205, 193, 171, 118, 146, 131,
  120, 71, 83, 67, 104, 95, 98, 98, 145, 160, 176, 172, 174, 183, 197, 176, 145, 140, 136, 131,
  122, 116, 109, 126, 137, 126, 125, 132, 137, 136, 128, 109, 104, 97, 87, 72, 67, 63, 67, 72,
  70, 75, 85, 94, 92, 84, 108, 185, 173, 179, 187, 202, 209, 216, 176, 149, 170, 154, 130, 95,
  92, 73, 101, 87, 83, 79, 126, 137, 155, 155, 167, 181, 205, 191, 169, 161, 160, 153, 141, 126,
  114, 124, 125, 114, 108, 116, 120, 125, 120, 110, 107, 110, 102, 88, 84, 81, 79, 79, 74, 73,
  80, 81, 68, 65, 108, 150, 142, 160, 168, 201, 204, 216, 173, 184, 185, 176, 140, 124, 102, 99,
  103, 82, 70, 79, 108, 116, 130, 132, 151, 175, 198, 182, 176, 181, 180, 175, 163, 143, 131, 136,
  126, 112, 104, 109, 111, 114, 109, 103, 105, 114, 107, 102, 101, 99, 96, 93, 84, 78, 82, 76,
  55, 50, 93, 112, 109, 126, 136, 171, 187, 200, 173, 194, 198, 197, 169, 158, 130, 130, 125, 102,
  78, 84, 93, 99, 107, 109, 122, 145, 172, 170, 170, 180, 188, 188, 185, 167, 155, 154, 144, 127,
  118, 113, 110, 110, 105, 98, 99, 108, 108, 108, 108, 110, 107, 108, 102, 96, 94, 87, 61, 41,
  58, 90, 79, 89, 102, 130, 146, 173, 160, 167, 191, 202, 191, 180, 171, 156, 157, 138, 116, 96,
  106, 101, 100, 94, 101, 112, 138, 144, 144, 155, 173, 183, 186, 184, 172, 170, 170, 155, 138, 135,
  128, 122, 118, 106, 98, 103, 106, 103, 105, 108, 108, 111, 112, 104, 103, 106, 96, 72, 51, 67,
  82, 73, 76, 84, 104, 118, 143, 134, 146, 170, 188, 182, 184, 178, 172, 175, 163, 142, 124, 126,
  120, 112, 102, 102, 106, 120, 126, 126, 135, 148, 163, 171, 175, 172, 174, 176, 169, 156, 150, 144,
  138, 134, 121, 109, 109, 108, 104, 104, 107, 107, 110, 113, 110, 110, 115, 117, 100, 76, 64, 80,
  76, 69, 69, 74, 88, 104, 115, 109, 130, 150, 165, 165, 177, 171, 179, 182, 175, 154, 152, 144,
  137, 130, 120, 112, 116, 124, 121, 121, 126, 137, 148, 157, 158, 160, 165, 169, 166, 159, 154, 152,
  149, 143, 132, 123, 120, 116, 113, 111, 110, 111, 112, 110, 109, 111, 115, 118, 109, 90, 75, 83,
  81, 70, 67, 69, 75, 85, 96, 92, 106, 126, 141, 145, 159, 162, 169, 177, 178, 166, 163, 160,
  154, 146, 139, 131, 128, 129, 126, 124, 126, 132, 140, 147, 148, 151, 157, 161, 161, 159, 157, 154,
  153, 148, 140, 136, 129, 122, 119, 118, 115, 115, 116, 111, 108, 112, 118, 120, 119, 110, 91, 84,
  90, 81, 69, 69, 68, 69, 79, 83, 83, 97, 116, 125, 136, 148, 154, 163, 173, 172, 168, 169,
  165, 161, 155, 147, 140, 139, 137, 134, 132, 133, 138, 143, 146, 146, 149, 154, 154, 154, 154, 152,
  150, 151, 146, 141, 138, 133, 126, 123, 121, 118, 117, 118, 114, 114, 115, 116, 118, 120, 111, 94,
  87, 90, 78, 72, 70, 70, 72, 77, 78, 78, 91, 107, 118, 126, 138, 145, 158, 165, 167, 164,
  168, 165, 163, 156, 151, 147, 149, 146, 140, 138, 141, 144, 147, 145, 143, 145, 150, 150, 149, 149,
  149, 149, 148, 144, 141, 140, 137, 130, 126, 123, 121, 120, 118, 114, 113, 113, 114, 114, 116, 115,
  108, 97, 92, 90, 81, 78, 76, 76, 75, 79, 78, 85, 94, 105, 113, 124, 133, 143, 153, 158,
  159, 163, 164, 163, 162, 159, 156, 155, 154, 149, 147, 147, 148, 149, 148, 146, 146, 148, 149, 148,
  146, 146, 147, 147, 144, 141, 137, 135, 132, 128, 123, 121, 119, 117, 113, 111, 111, 113, 113, 114,
  115, 114, 110, 102, 96, 95, 89, 87, 84, 83, 82, 85, 83, 88, 95, 104, 110, 120, 125, 133,
  143, 148, 149, 153, 156, 158, 159, 159, 156, 156, 156, 154, 153, 155, 155, 155, 154, 151, 149, 149,
  148, 147, 145, 145, 143, 143, 139, 136, 136, 134, 130, 127, 124, 124, 122, 119, 117, 115, 114, 114,
  111, 111, 113, 114, 112, 106, 101, 99, 95, 92, 90, 88, 88, 90, 90, 90, 96, 103, 108, 113,
  120, 126, 134, 139, 141, 144, 148, 150, 152, 153, 152, 153, 155, 155, 155, 154, 155, 156, 157, 157,
  153, 152, 152, 149, 146, 142, 143, 144, 142, 139, 135, 133, 132, 129, 127, 125, 123, 123, 119, 116,
  115, 114, 113, 112, 111, 112, 113, 113, 108, 101, 99, 100, 97, 94, 92, 93, 95, 97, 95, 97,
  104, 111, 114, 117, 122, 128, 135, 137, 137, 140, 144, 145, 147, 148, 151, 154, 156, 157, 157, 157,
  158, 158, 156, 155, 154, 153, 148, 146, 143, 143, 139, 137, 135, 135, 132, 130, 126, 125, 123, 123,
  119, 118, 114, 114, 114, 114, 110, 112, 113, 113, 113, 114, 109, 108, 108, 106, 104, 106, 104, 105,
  106, 107, 106, 109, 111, 114, 118, 121, 122, 126, 130, 132, 133, 137, 138, 139, 141, 143, 145, 146,
  148, 149, 151, 152, 152, 153, 151, 150, 149, 148, 144, 144, 142, 141, 139, 136, 132, 132, 131, 127,
  125, 124, 122, 122, 120, 118, 116, 116, 116, 115, 113, 114, 113, 112, 112, 112, 112, 115, 115, 113,
  115, 117, 117, 119, 119, 119, 122, 124, 124, 125, 126, 127, 129, 129, 129, 129, 131, 132, 134, 133,
  135, 136, 137, 137, 136, 137, 139, 139, 139, 139, 138, 138, 138, 137, 136, 135, 135, 134, 133, 132,
  130, 129, 128, 126, 125, 124, 124, 123, 123, 122, 121, 121, 121, 120, 120, 121, 120, 120, 120, 121,
  121, 121, 123, 124, 123, 124, 125, 127, 127, 127, 128, 129, 130, 130, 129, 129, 130, 131, 130, 129,
  129, 130, 130, 130, 129, 130, 131, 131, 130, 129, 129, 129, 130, 129, 129, 129, 130, 129, 129, 127,
  128, 128, 128, 128, 128, 128, 128, 128, 126, 126, 126, 126, 126, 125, 125, 125, 124, 124, 125, 125,
  126, 126, 126, 126, 125, 125, 126, 126, 126, 127, 127, 127, 128, 128, 128, 129, 129, 130, 129, 130,
  130, 130, 129, 130, 130, 130, 129, 129, 129, 129, 129, 130, 129, 129, 129, 129, 128, 128, 128, 128,
  128, 127, 127, 127, 128, 128, 127, 127, 127, 127, 127, 126, 126, 126, 126, 126, 125, 125, 126, 126,
  126, 126, 126, 127, 127, 126, 126, 127, 127, 127, 127, 127, 127, 127, 128, 128, 128, 128, 128, 129,
  128, 128, 128, 129, 128, 128, 129, 129, 129, 129, 129, 129, 129, 130, 130, 130, 130, 129, 129, 129,
  129, 128, 128, 128, 127, 127, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 127, 127, 127, 128
};

#endif

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_mot_dac_biet)
const uint8_t soDemData_mot_dac_biet_0[] PROGMEM = {
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 127, 127, 127, 127, 127, 127, 126, 126, 126, 126, 126, 125, 125,
  125, 125, 125, 125, 125, 125, 124, 124, 125, 125, 125, 125, 126, 126, 127, 127, 128, 129, 129, 130,
  131, 132, 133, 133, 134, 135, 135, 136, 136, 137, 137, 139, 139, 139, 139, 139, 139, 138, 137, 135,
  134, 131, 128, 125, 123, 119, 117, 114, 111, 109, 107, 105, 103, 102, 102, 102, 103, 103, 103, 105,
  106, 108, 109, 111, 113, 115, 116, 122, 130, 133, 141, 148, 150, 156, 162, 165, 170, 177, 177, 178,
  178, 173, 167, 164, 158, 152, 148, 140, 131, 124, 116, 109, 105, 102, 99, 98, 97, 96, 97, 98,
  100, 103, 108, 112, 115, 116, 118, 118, 118, 119, 118, 117, 117, 115, 113, 112, 112, 110, 111, 112,
  112, 113, 115, 116, 117, 120, 127, 134, 138, 147, 152, 155, 161, 167, 170, 175, 180, 179, 178, 176,
  169, 163, 159, 152, 145, 140, 132, 122, 117, 110, 104, 102, 101, 99, 99, 99, 99, 101, 103, 105,
  109, 112, 115, 116, 117, 117, 117, 117, 116, 115, 113, 112, 110, 109, 108, 108, 108, 108, 108, 109,
  111, 112, 115, 122, 129, 133, 143, 149, 152, 159, 165, 169, 176, 182, 182, 182, 182, 175, 169, 165,
  159, 151, 147, 138, 128, 122, 114, 107, 104, 102, 98, 99, 99, 98, 100, 103, 105, 108, 112, 114,
  116, 118, 118, 117, 116, 114, 112, 111, 109, 107, 105, 104, 102, 103, 102, 103, 104, 106, 108, 113,
  123, 127, 137, 146, 150, 155, 163, 169, 173, 184, 186, 187, 188, 184, 176, 172, 167, 158, 153, 145,
  135, 126, 120, 111, 105, 103, 99, 97, 98, 97, 97, 101, 104, 106, 110, 114, 115, 118, 119, 118,
  117, 117, 114, 112, 111, 108, 106, 104, 103, 101, 100, 100, 100, 102, 103, 108, 119, 122, 132, 141,
  145, 151, 161, 166, 172, 184, 187, 189, 191, 188, 180, 178, 172, 163, 159, 151, 139, 131, 123, 112,
  107, 104, 97, 95, 96, 93, 93, 98, 99, 102, 107, 110, 111, 115, 116, 115, 116, 116, 114, 115,
  114, 112, 110, 108, 105, 103, 101, 100, 100, 101, 106, 114, 117, 126, 134, 136, 143, 152, 159, 168,
  182, 186, 190, 194, 189, 184, 181, 176, 168, 165, 155, 144, 136, 127, 117, 111, 108, 101, 99, 97,
  94, 94, 97, 100, 103, 108, 109, 110, 110, 108, 107, 108, 110, 112, 114, 114, 112, 109, 105, 100,
  99, 95, 92, 90, 96, 109, 115, 127, 137, 142, 150, 160, 166, 175, 190, 197, 203, 206, 201, 190,
  181, 164, 149, 140, 131, 122, 118, 114, 110, 110, 111, 109, 111, 111, 109, 111, 111, 111, 112, 113,
  110, 108, 103, 98, 97, 99, 103, 108, 113, 113, 110, 105, 94, 86, 77, 71, 69, 77, 100, 120,
  151, 178, 193, 200, 205, 201, 197, 204, 203, 201, 197, 180, 153, 129, 104, 87, 85, 92, 101, 118,
  131, 135, 138, 136, 130, 126, 126, 124, 124, 123, 118, 112, 106, 99, 95, 96, 99, 108, 119, 126,
  130, 129, 118, 106, 92, 78, 66, 57, 51, 48, 64, 92, 118, 160, 192, 209, 218, 220, 210, 205,
  206, 199, 197, 186, 162, 133, 110, 87, 79, 89, 104, 123, 143, 151, 152, 148, 138, 129, 126, 122,
  118, 117, 109, 103, 97, 92, 90, 93, 102, 111, 125, 134, 135, 130, 119, 104, 89, 75, 61, 49,
  40, 40, 63, 88, 127, 170, 199, 214, 221, 215, 202, 201, 197, 192, 192, 179, 155, 131, 107, 91,
  89, 104, 120, 144, 161, 166, 164, 153, 139, 127, 120, 112, 110, 108, 102, 96, 89, 83, 84, 91,
  103, 116, 130, 135, 133, 124, 104, 83, 58, 37, 21, 23, 53, 79, 127, 168, 193, 206, 212, 205,
  196, 202, 200, 202, 200, 183, 156, 128, 100, 87, 92, 108, 131, 160, 176, 180, 174, 160, 143, 131,
  122, 113, 114, 108, 100, 91, 83, 77, 81, 92, 106, 122, 130, 133, 126, 107, 83, 53, 29, 12,
  15, 45, 73, 124, 163, 186, 196, 199, 195, 192, 204, 207, 214, 209, 187, 154, 121, 93, 81, 92,
  116, 146, 177, 189, 189, 178, 159, 142, 130, 127, 123, 123, 115, 102, 89, 74, 70, 75, 88, 104,
  122, 134, 130, 115, 83, 47, 17, 3, 22, 46, 90, 138, 167, 183, 184, 182, 174, 188, 198, 211,
  220, 209, 183, 147, 109, 86, 85, 103, 132, 170, 190, 193, 186, 164, 143, 133, 129, 129, 133, 130,
  116, 99, 81, 68, 67, 73, 92, 113, 123, 121, 98, 64, 29, 10, 19, 35, 83, 128, 158, 177,
  182, 178, 171, 181, 187, 201, 210, 202, 181, 152, 121, 101, 104, 120, 146, 174, 186, 187, 178, 162,
  149, 142, 140, 138, 133, 120, 103, 86, 70, 65, 67, 80, 92, 102, 98, 78, 55, 30, 20, 35,
  59, 105, 136, 160, 170, 171, 166, 167, 179, 189, 202, 203, 190, 167, 140, 119, 115, 128, 148, 172,
  186, 188, 181, 166, 152, 143, 141, 140, 140, 131, 119, 102, 84, 72, 69, 74, 79, 82, 73, 56,
  35, 22, 31, 44, 81, 115, 142, 159, 169, 168, 167, 175, 179, 188, 187, 178, 161, 140, 126, 123,
  136, 154, 175, 184, 185, 178, 165, 158, 153, 153, 153, 151, 139, 123, 104, 86, 79, 78, 83, 88,
  83, 66, 45, 25, 23, 32, 60, 99, 125, 150, 164, 165, 159, 161, 164, 169, 174, 172, 165, 151,
  136, 131, 134, 145, 160, 171, 177, 178, 170, 163, 158, 155, 152, 147, 138, 125, 108, 94, 87, 85,
  84, 83, 73, 57, 36, 23, 30, 44, 77, 113, 142, 161, 170, 166, 162, 162, 163, 171, 175, 173,
  163, 151, 139, 133, 138, 149, 163, 173, 177, 174, 168, 160, 153, 147, 142, 135, 123, 111, 100, 92,
  86, 78, 67, 50, 30, 17, 22, 33, 63, 97, 126, 150, 165, 168, 166, 167, 168, 175, 177, 177,
  172, 162, 151, 143, 143, 148, 157, 165, 170, 171, 168, 164, 158, 151, 144, 136, 125, 116, 107, 97,
  86, 70, 51, 31, 15, 14, 24, 49, 79, 105, 132, 151, 158, 159, 165, 167, 172, 178, 183, 181,
  175, 166, 158, 151, 149, 149, 152, 155, 158, 162, 165, 166, 162, 156, 143, 130, 117, 105, 95, 82,
  63, 42, 21, 8, 12, 25, 54, 85, 115, 139, 155, 160, 166, 169, 171, 178, 180, 181, 176, 172,
  167, 162, 157, 156, 152, 148, 148, 151, 157, 164, 169, 168, 158, 141, 124, 106, 89, 72, 53, 35,
  21, 16, 19, 34, 58, 82, 108, 133, 152, 162, 171, 175, 176, 174, 172, 169, 169, 168, 166, 165,
  161, 154, 147, 143, 145, 153, 162, 171, 170, 162, 147, 129, 112, 97, 80, 63, 44, 29, 23, 24,
  38, 60, 84, 108, 131, 147, 157, 165, 170, 173, 175, 177, 175, 173, 168, 163, 157, 150, 146, 144,
  145, 150, 159, 167, 170, 162, 151, 134, 117, 103, 90, 74, 59, 45, 36, 32, 33, 48, 69, 92,
  116, 138, 154, 166, 170, 170, 170, 167, 166, 166, 167, 165, 163, 158, 152, 147, 144, 149, 158, 166,
  171, 167, 157, 141, 122, 105, 93, 79, 67, 55, 47, 44, 45, 55, 70, 85, 105, 126, 142, 155,
  162, 167, 167, 165, 162, 160, 158, 159, 160, 157, 153, 150, 148, 149, 155, 161, 165, 161, 153, 139,
  122, 107, 92, 79, 69, 62, 57, 56, 62, 73, 86, 100, 116, 130, 139, 149, 154, 157, 158, 159,
  158, 159, 158, 158, 156, 152, 148, 146, 145, 148, 153, 157, 157, 152, 141, 127, 113, 99, 89, 81,
  77, 74, 73, 75, 81, 91, 101, 112, 122, 133, 139, 146, 150, 151, 152, 153, 153, 153, 151, 149,
  148, 145, 143, 141, 141, 143, 147, 150, 148, 143, 134, 124, 114, 105, 98, 92, 89, 87, 88, 89,
  95, 102, 110, 117, 125, 131, 137, 142, 145, 147, 149, 152, 153, 152, 149, 145, 142, 136, 133, 130,
  132, 136, 140, 142, 141, 136, 130, 123, 116, 111, 108, 105, 104, 102, 102, 102, 105, 107, 110, 114,
  119, 122, 127, 131, 136, 141, 145, 146, 148, 147, 146, 145, 144, 141, 138, 136, 134, 133, 133, 133,
  134, 134, 132, 130, 125, 121, 118, 116, 115, 115, 114, 113, 112, 112, 110, 110, 111, 114, 117, 122,
  126, 129, 132, 135, 139, 141, 144, 144, 143, 141, 139, 137, 135, 134, 133, 132, 131, 131, 130, 129,
  128, 127, 126, 125, 123, 122, 121, 120, 119, 118, 118, 118, 118, 119, 120, 120, 121, 123, 125, 128,
  130, 131, 132, 134, 135, 134, 134, 134, 133, 133, 134, 134, 134, 133, 132, 133, 131, 129, 128, 126,
  126, 126, 125, 125, 124, 122, 121, 122, 122, 123, 123, 123, 124, 124, 125, 124, 125, 126, 127, 128,
  128, 128, 128, 129, 130, 131, 130, 130, 130, 130, 130, 130, 131, 132, 132, 131, 129, 129, 127, 127,
  126, 127, 126, 126, 126, 126, 127, 126, 126, 126, 126, 126, 126, 125, 126, 127, 127, 127, 126, 126,
  126, 126, 127, 128, 129, 129, 129, 130, 130, 130, 130, 129, 128, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 128, 128, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 127, 127, 127, 127, 128, 127, 128, 129, 129, 129, 129, 128,
  128, 128, 128, 128, 128, 128, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 127, 127, 127, 128, 128, 129, 129, 129, 129, 129, 129, 129, 129, 129, 128, 128,
  127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128
};

#endif

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_trieu)
const uint8_t soDemData_trieu_0[] PROGMEM = {
  128, 128, 128, 128, 128, 127, 128, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 128, 127, 127, 127, 127, 127, 127,
  128, 127, 127, 128, 127, 128, 128, 127, 127, 127, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  128, 127, 127, 127, 127, 128, 127, 127, 127, 128, 128, 127, 128, 127, 127, 127, 127, 127, 127, 127,
  128, 127, 128, 127, 128, 127, 127, 127, 127, 127, 127, 127, 127, 128, 127, 128, 127, 128, 127, 128,
  127, 128, 127, 128, 127, 127, 128, 128, 127, 127, 127, 127, 128, 128, 128, 127, 128, 128, 128, 128,
  127, 127, 127, 128, 127, 127, 127, 128, 127, 128, 127, 127, 127, 127, 127, 128, 128, 128, 127, 126,
  130, 127, 128, 128, 127, 126, 129, 128, 128, 125, 127, 128, 125, 129, 127, 127, 128, 127, 129, 127,
  122, 136, 120, 131, 122, 129, 129, 126, 130, 123, 128, 127, 127, 126, 132, 123, 133, 123, 129, 132,
  122, 133, 129, 120, 131, 131, 124, 129, 132, 122, 124, 127, 124, 132, 130, 133, 120, 128, 127, 126,
  124, 130, 132, 132, 138, 138, 133, 125, 118, 130, 128, 123, 121, 125, 123, 122, 121, 124, 127, 124,
  136, 117, 132, 127, 129, 135, 131, 127, 128, 126, 133, 121, 129, 117, 138, 120, 137, 124, 127, 125,
  134, 121, 134, 123, 128, 126, 129, 125, 125, 131, 129, 128, 130, 125, 137, 121, 130, 132, 127, 140,
  127, 136, 126, 136, 123, 124, 125, 128, 119, 124, 124, 120, 133, 125, 116, 139, 127, 128, 130, 122,
  131, 115, 134, 122, 133, 122, 135, 119, 130, 119, 133, 130, 123, 134, 133, 131, 134, 127, 137, 133,
  120, 137, 132, 126, 127, 129, 125, 132, 121, 128, 122, 120, 128, 124, 121, 137, 128, 135, 126, 123,
  132, 123, 127, 120, 124, 125, 123, 120, 136, 124, 130, 136, 132, 131, 127, 134, 135, 134, 128, 137,
  125, 137, 128, 118, 136, 114, 142, 120, 132, 125, 133, 120, 132, 124, 134, 126, 117, 140, 114, 137,
  121, 125, 125, 125, 122, 130, 126, 128, 132, 123, 131, 121, 125, 125, 118, 128, 126, 129, 126, 132,
  121, 132, 126, 116, 143, 111, 138, 119, 138, 118, 141, 116, 140, 118, 129, 136, 119, 144, 127, 146,
  135, 160, 138, 162, 147, 159, 163, 145, 155, 148, 142, 130, 132, 118, 119, 102, 108, 92, 99, 99,
  91, 93, 98, 95, 100, 103, 100, 108, 99, 109, 111, 107, 104, 118, 105, 113, 107, 113, 118, 116,
  115, 136, 120, 149, 151, 162, 180, 176, 205, 191, 199, 207, 204, 190, 189, 184, 167, 150, 139, 142,
  107, 111, 111, 99, 95, 97, 105, 106, 104, 109, 126, 108, 120, 119, 118, 108, 106, 105, 89, 87,
  79, 75, 64, 65, 63, 73, 64, 84, 85, 90, 100, 110, 113, 136, 126, 151, 134, 162, 209, 132,
  224, 201, 224, 196, 234, 205, 226, 188, 209, 185, 154, 145, 133, 113, 92, 91, 84, 83, 73, 85,
  93, 98, 110, 130, 141, 147, 157, 162, 171, 154, 159, 151, 137, 125, 109, 97, 81, 66, 58, 52,
  39, 42, 43, 47, 55, 65, 77, 89, 94, 104, 112, 114, 133, 128, 142, 139, 129, 232, 136, 199,
  222, 218, 207, 232, 220, 221, 207, 189, 201, 149, 143, 128, 118, 87, 92, 77, 91, 77, 85, 102,
  111, 113, 138, 151, 158, 162, 175, 185, 167, 170, 159, 148, 128, 111, 97, 83, 63, 56, 47, 38,
  36, 36, 40, 46, 55, 69, 78, 89, 100, 102, 112, 117, 119, 136, 128, 142, 128, 163, 212, 128,
  225, 215, 225, 197, 241, 203, 226, 184, 201, 177, 144, 128, 123, 101, 84, 88, 84, 90, 83, 99,
  117, 125, 135, 159, 164, 172, 175, 178, 185, 167, 164, 158, 138, 120, 104, 94, 79, 69, 60, 61,
  49, 51, 51, 53, 54, 62, 68, 78, 82, 89, 95, 94, 100, 100, 106, 115, 116, 129, 114, 154,
  217, 132, 216, 220, 224, 198, 242, 218, 225, 190, 193, 189, 139, 130, 125, 112, 84, 94, 85, 100,
  91, 105, 129, 135, 137, 159, 173, 165, 166, 172, 181, 162, 157, 151, 142, 116, 110, 102, 82, 78,
  71, 68, 60, 63, 58, 64, 60, 65, 68, 74, 76, 81, 87, 89, 87, 93, 95, 104, 109, 109,
  126, 107, 174, 182, 140, 225, 207, 222, 202, 250, 208, 233, 192, 213, 175, 150, 135, 132, 103, 89,
  98, 87, 92, 89, 104, 119, 130, 134, 159, 162, 167, 163, 170, 172, 159, 161, 150, 143, 124, 120,
  106, 94, 82, 83, 73, 70, 69, 68, 67, 67, 70, 69, 72, 79, 80, 84, 89, 88, 87, 93,
  92, 100, 104, 105, 109, 106, 184, 142, 157, 227, 211, 207, 215, 252, 207, 236, 203, 221, 173, 160,
  141, 140, 101, 95, 98, 86, 86, 86, 103, 111, 120, 130, 152, 157, 156, 166, 173, 165, 163, 165,
  154, 143, 132, 128, 112, 98, 93, 87, 75, 75, 73, 69, 69, 73, 69, 73, 73, 79, 79, 84,
  85, 89, 85, 89, 91, 95, 101, 101, 110, 92, 150, 172, 125, 206, 210, 212, 190, 252, 218, 228,
  215, 223, 199, 167, 157, 148, 128, 94, 106, 96, 88, 78, 96, 105, 105, 116, 139, 147, 145, 154,
  163, 166, 156, 163, 164, 150, 139, 145, 123, 109, 104, 103, 86, 82, 81, 76, 73, 72, 74, 72,
  74, 77, 80, 84, 85, 89, 92, 90, 89, 98, 94, 97, 104, 105, 85, 140, 172, 116, 185, 213,
  212, 174, 244, 231, 220, 216, 231, 207, 171, 170, 152, 139, 99, 106, 97, 86, 73, 89, 99, 92,
  104, 127, 140, 131, 147, 162, 165, 151, 162, 168, 154, 143, 146, 139, 114, 115, 109, 96, 85, 93,
  83, 78, 79, 81, 78, 81, 83, 84, 86, 92, 91, 92, 97, 96, 90, 96, 96, 97, 100, 105,
  91, 126, 173, 114, 160, 207, 205, 170, 235, 241, 207, 218, 233, 210, 168, 181, 158, 134, 107, 110,
  93, 86, 78, 82, 91, 92, 98, 116, 130, 133, 140, 154, 158, 157, 159, 163, 157, 150, 148, 140,
  129, 118, 114, 108, 96, 97, 92, 88, 86, 91, 85, 89, 90, 93, 93, 93, 97, 99, 99, 97,
  96, 93, 94, 95, 95, 98, 99, 86, 110, 166, 125, 138, 193, 209, 172, 206, 245, 211, 206, 222,
  220, 170, 176, 159, 136, 114, 113, 93, 87, 90, 77, 82, 98, 104, 100, 123, 141, 135, 140, 158,
  160, 152, 162, 159, 151, 147, 145, 131, 124, 117, 109, 102, 102, 96, 92, 94, 94, 93, 95, 100,
  97, 100, 103, 104, 100, 106, 106, 100, 97, 98, 93, 92, 97, 95, 85, 81, 120, 150, 117, 144,
  188, 200, 168, 209, 227, 216, 206, 220, 205, 179, 177, 150, 131, 121, 115, 85, 86, 92, 80, 75,
  91, 106, 101, 114, 131, 141, 142, 155, 154, 157, 165, 161, 152, 152, 153, 137, 127, 124, 118, 107,
  105, 102, 99, 98, 98, 98, 99, 105, 103, 102, 107, 108, 105, 107, 108, 104, 101, 96, 92, 94,
  96, 90, 79, 76, 96, 135, 122, 119, 151, 186, 179, 183, 206, 206, 212, 211, 207, 182, 184, 165,
  143, 125, 123, 106, 94, 92, 88, 85, 91, 100, 103, 111, 123, 133, 140, 147, 153, 156, 161, 163,
  159, 157, 156, 149, 140, 133, 127, 120, 114, 110, 108, 108, 108, 106, 105, 107, 111, 108, 108, 109,
  108, 108, 108, 107, 101, 99, 96, 92, 89, 88, 86, 75, 68, 81, 111, 111, 116, 133, 153, 164,
  179, 191, 186, 201, 210, 209, 188, 185, 170, 161, 148, 135, 115, 108, 105, 99, 93, 92, 98, 103,
  111, 116, 125, 133, 142, 151, 154, 157, 159, 167, 167, 163, 154, 149, 144, 139, 130, 123, 116, 113,
  111, 108, 103, 101, 103, 106, 106, 105, 104, 106, 108, 109, 107, 105, 104, 100, 97, 92, 90, 90,
  86, 75, 71, 85, 102, 103, 114, 124, 138, 152, 176, 180, 185, 192, 202, 200, 198, 190, 174, 163,
  155, 144, 130, 120, 110, 102, 99, 101, 101, 102, 107, 112, 121, 130, 137, 141, 147, 154, 160, 164,
  165, 162, 158, 153, 149, 143, 138, 130, 122, 117, 114, 111, 108, 105, 104, 105, 107, 108, 107, 107,
  108, 108, 108, 106, 101, 97, 95, 92, 91, 88, 79, 68, 67, 83, 91, 102, 110, 118, 126, 144,
  163, 173, 186, 191, 195, 192, 197, 190, 183, 173, 165, 150, 142, 131, 121, 111, 107, 104, 104, 105,
  106, 109, 114, 121, 128, 136, 143, 146, 152, 157, 162, 161, 159, 154, 150, 144, 140, 134, 128, 123,
  118, 113, 110, 108, 107, 107, 108, 108, 108, 108, 108, 109, 110, 110, 107, 103, 99, 97, 97, 97,
  91, 81, 74, 77, 84, 91, 102, 110, 117, 126, 141, 153, 168, 179, 188, 190, 193, 192, 190, 185,
  179, 168, 158, 148, 137, 127, 120, 114, 109, 106, 105, 105, 107, 112, 117, 122, 128, 133, 139, 145,
  150, 152, 153, 152, 150, 146, 143, 139, 134, 129, 124, 118, 115, 112, 110, 109, 110, 109, 108, 109,
  109, 110, 111, 111, 108, 106, 104, 102, 102, 101, 94, 86, 80, 82, 85, 93, 103, 110, 116, 123,
  133, 143, 158, 171, 181, 184, 187, 184, 182, 180, 178, 171, 164, 154, 142, 131, 125, 120, 117, 115,
  113, 110, 110, 111, 114, 119, 126, 130, 135, 139, 141, 142, 144, 145, 144, 143, 141, 137, 133, 130,
  126, 122, 120, 117, 115, 113, 112, 111, 112, 113, 112, 112, 111, 109, 108, 107, 106, 105, 103, 100,
  93, 87, 83, 85, 88, 97, 106, 113, 118, 126, 133, 142, 154, 166, 174, 179, 182, 180, 178, 175,
  171, 165, 160, 152, 143, 134, 128, 122, 120, 119, 118, 116, 117, 117, 120, 122, 127, 131, 135, 137,
  137, 137, 137, 136, 136, 136, 134, 132, 129, 125, 122, 119, 118, 117, 117, 117, 117, 116, 115, 114,
  113, 113, 113, 113, 113, 113, 110, 108, 104, 98, 94, 90, 91, 94, 100, 107, 112, 116, 123, 128,
  136, 146, 157, 165, 171, 173, 170, 168, 165, 162, 159, 156, 151, 143, 137, 132, 127, 126, 125, 124,
  125, 125, 124, 123, 124, 126, 128, 132, 133, 133, 132, 131, 130, 130, 131, 131, 131, 130, 128, 126,
  124, 123, 122, 123, 123, 123, 123, 121, 119, 119, 120, 120, 119, 119, 118, 116, 113, 108, 102, 98,
  97, 95, 97, 100, 102, 104, 108, 112, 117, 125, 134, 141, 147, 152, 154, 154, 155, 155, 154, 153,
  151, 147, 144, 141, 138, 137, 136, 136, 136, 135, 134, 134, 134, 134, 135, 136, 136, 135, 134, 133,
  131, 131, 131, 131, 130, 129, 128, 127, 126, 125, 124, 124, 123, 123, 123, 122, 121, 120, 118, 116,
  117, 118, 119, 119, 117, 115, 111, 108, 105, 105, 105, 106, 107, 108, 107, 108, 110, 113, 119, 126,
  131, 136, 138, 140, 141, 143, 143, 143, 144, 144, 143, 141, 139, 138, 138, 138, 139, 140, 140, 140,
  139, 139, 138, 138, 138, 137, 137, 136, 134, 132, 131, 130, 129, 129, 129, 127, 127, 126, 125, 125,
  125, 125, 125, 124, 122, 121, 121, 121, 122, 123, 123, 123, 123, 121, 120, 118, 116, 115, 114, 114,
  114, 114, 113, 112, 112, 113, 114, 117, 120, 123, 126, 127, 128, 129, 130, 132, 134, 135, 136, 136,
  136, 135, 135, 136, 137, 138, 139, 140, 139, 138, 137, 136, 136, 136, 135, 135, 134, 132, 131, 130,
  129, 129, 130, 130, 129, 128, 128, 128, 128, 128, 128, 127, 127, 127, 127, 127, 127, 127, 126, 126,
  125, 126, 125, 124, 124, 123, 122, 122, 121, 120, 119, 119, 119, 118, 118, 119, 119, 119, 119, 119,
  120, 121, 122, 123, 124, 125, 126, 127, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 136, 136,
  136, 136, 136, 137, 136, 136, 136, 135, 133, 132, 132, 132, 131, 131, 130, 130, 129, 129, 128, 127,
  127, 126, 126, 126, 126, 126, 125, 124, 124, 124, 124, 125, 125, 124, 124, 122, 121, 121, 121, 122,
  122, 122, 122, 120, 119, 119, 120, 122, 123, 125, 125, 126, 126, 127, 128, 129, 130, 131, 132, 132,
  132, 133, 133, 133, 133, 133, 132, 132, 132, 132, 132, 131, 131, 130, 129, 128, 128, 128, 129, 129,
  128, 127, 127, 127, 127, 128, 128, 128, 127, 127, 127, 127, 127, 127, 127, 127, 126, 127, 127, 127,
  127, 126, 126, 125, 125, 125, 125, 125, 125, 125, 124, 124, 124, 124, 125, 125, 125, 125, 126, 126,
  127, 127, 128, 127, 128, 128, 129, 130, 130, 130, 130, 130, 130, 131, 132, 132, 132, 131, 130, 130,
  130, 129, 129, 129, 129, 129, 128, 128, 128, 127, 127, 127, 127, 127, 127, 127, 126, 126, 126, 126,
  126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 128, 128, 127, 127, 126,
  126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 128, 128, 129, 129, 129, 129, 130, 130, 129, 129,
  129, 129, 129, 130, 130, 129, 128, 128, 128, 128, 128, 128, 128, 127, 127, 126, 126, 126, 126, 126,
  126, 126, 126, 127, 127, 127, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 128, 128, 128, 128,
  128, 129, 129, 129, 129, 129, 129, 129, 128, 128, 129, 129, 129, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 127, 127, 128, 128, 128, 127, 127, 127, 127, 127, 127, 127, 127, 126, 126, 127, 127, 127,
  127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 128, 128
};

#endif

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_nghin)
const uint8_t soDemData_nghin_0[] PROGMEM = {
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 127, 128, 128, 128, 128, 128, 127, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 127, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 129, 129, 129, 129, 129,
  129, 129, 129, 129, 129, 129, 129, 129, 128, 128, 128, 128, 127, 127, 126, 126, 125, 125, 124, 124,
  123, 123, 122, 122, 121, 121, 121, 121, 121, 121, 122, 122, 123, 125, 126, 127, 130, 132, 133, 136,
  140, 144, 147, 152, 155, 156, 158, 159, 157, 155, 153, 148, 141, 135, 129, 121, 114, 110, 104, 99,
  97, 96, 94, 95, 97, 98, 99, 102, 104, 105, 109, 111, 112, 113, 115, 115, 115, 118, 120, 121,
  124, 126, 127, 130, 135, 139, 143, 148, 153, 156, 160, 166, 169, 169, 174, 180, 176, 171, 172, 163,
  150, 145, 139, 124, 116, 110, 99, 90, 89, 86, 85, 89, 94, 97, 103, 110, 116, 122, 128, 132,
  136, 137, 138, 138, 136, 134, 132, 129, 125, 121, 117, 113, 110, 107, 104, 101, 100, 99, 99, 101,
  103, 107, 111, 116, 122, 127, 133, 140, 146, 152, 160, 165, 168, 176, 184, 184, 184, 185, 178, 169,
  163, 156, 144, 135, 125, 113, 102, 96, 92, 90, 91, 95, 97, 99, 105, 110, 114, 120, 125, 127,
  128, 130, 130, 127, 127, 128, 124, 121, 120, 116, 111, 110, 109, 105, 103, 102, 100, 98, 100, 102,
  104, 109, 115, 120, 126, 133, 139, 146, 154, 162, 168, 172, 179, 189, 192, 191, 193, 188, 178, 170,
  165, 150, 139, 130, 116, 100, 93, 87, 82, 83, 87, 89, 92, 99, 105, 109, 117, 124, 128, 129,
  132, 133, 130, 130, 131, 129, 124, 122, 119, 113, 110, 108, 103, 99, 98, 95, 92, 94, 95, 97,
  103, 109, 115, 122, 131, 138, 146, 154, 163, 169, 173, 183, 195, 195, 196, 201, 195, 184, 181, 174,
  158, 148, 138, 120, 103, 96, 86, 80, 80, 84, 85, 87, 94, 100, 104, 112, 121, 125, 128, 132,
  132, 129, 129, 131, 127, 123, 122, 117, 110, 107, 104, 98, 95, 94, 90, 89, 91, 93, 96, 103,
  110, 117, 126, 135, 143, 151, 160, 169, 173, 182, 196, 198, 198, 204, 201, 191, 186, 182, 166, 155,
  146, 129, 110, 100, 91, 83, 79, 82, 82, 83, 89, 95, 99, 106, 116, 122, 125, 130, 133, 131,
  132, 135, 131, 128, 128, 122, 113, 110, 106, 99, 94, 92, 87, 84, 85, 86, 88, 94, 102, 108,
  117, 127, 135, 142, 154, 162, 166, 178, 193, 195, 198, 207, 206, 197, 198, 195, 181, 173, 164, 145,
  126, 114, 101, 89, 85, 84, 81, 80, 84, 88, 90, 98, 109, 114, 119, 127, 130, 129, 132, 135,
  133, 131, 131, 126, 118, 114, 109, 101, 96, 93, 86, 82, 81, 81, 82, 88, 95, 101, 110, 119,
  126, 134, 145, 153, 159, 172, 188, 192, 198, 208, 208, 202, 204, 202, 191, 185, 177, 159, 139, 126,
  112, 98, 90, 88, 83, 78, 80, 82, 83, 90, 100, 106, 111, 119, 124, 125, 129, 136, 136, 136,
  138, 134, 125, 121, 116, 107, 101, 97, 89, 83, 81, 78, 78, 83, 89, 94, 101, 110, 117, 124,
  135, 143, 147, 162, 180, 183, 191, 206, 207, 203, 209, 209, 200, 198, 192, 173, 154, 142, 125, 109,
  102, 97, 88, 82, 82, 80, 78, 84, 94, 98, 104, 113, 117, 118, 125, 133, 134, 136, 140, 137,
  130, 127, 121, 111, 106, 101, 92, 84, 82, 77, 75, 78, 83, 86, 93, 101, 107, 114, 123, 130,
  135, 148, 167, 173, 183, 199, 203, 202, 210, 214, 208, 208, 207, 193, 175, 163, 147, 129, 118, 111,
  100, 90, 87, 81, 75, 77, 83, 87, 93, 102, 107, 110, 117, 125, 128, 134, 140, 140, 135, 134,
  130, 120, 116, 110, 100, 92, 88, 80, 76, 76, 78, 79, 83, 89, 93, 99, 108, 115, 120, 132,
  151, 158, 166, 185, 195, 196, 206, 215, 212, 214, 218, 209, 194, 184, 170, 150, 138, 130, 116, 105,
  98, 90, 80, 78, 80, 80, 84, 91, 96, 99, 106, 115, 121, 126, 135, 138, 137, 137, 136, 130,
  125, 120, 111, 102, 96, 88, 81, 78, 78, 76, 78, 79, 83, 88, 95, 102, 107, 114, 130, 144,
  149, 165, 183, 188, 193, 210, 214, 214, 223, 223, 211, 203, 193, 175, 159, 149, 136, 121, 111, 101,
  88, 81, 79, 77, 77, 81, 86, 90, 95, 105, 112, 117, 126, 133, 135, 137, 139, 136, 130, 126,
  118, 107, 100, 96, 85, 81, 80, 77, 76, 80, 82, 84, 91, 97, 101, 105, 116, 137, 141, 155,
  180, 187, 183, 200, 213, 205, 214, 226, 213, 201, 201, 183, 163, 156, 146, 128, 116, 109, 99, 86,
  84, 83, 82, 84, 92, 95, 98, 104, 112, 118, 124, 133, 137, 137, 140, 138, 128, 126, 125, 114,
  96, 91, 87, 79, 77, 80, 75, 76, 81, 84, 87, 94, 101, 102, 111, 112, 129, 156, 139, 170,
  188, 190, 186, 230, 215, 211, 226, 231, 201, 197, 192, 162, 144, 137, 130, 102, 101, 91, 93, 70,
  85, 85, 92, 89, 117, 106, 112, 122, 135, 123, 138, 139, 139, 133, 137, 128, 118, 115, 113, 98,
  93, 91, 80, 73, 76, 73, 74, 77, 81, 82, 90, 93, 98, 104, 106, 99, 179, 117, 147, 199,
  195, 191, 225, 229, 205, 230, 219, 226, 181, 204, 160, 159, 113, 142, 94, 105, 83, 108, 70, 96,
  84, 109, 90, 122, 120, 125, 117, 139, 132, 134, 135, 143, 136, 127, 131, 120, 105, 109, 106, 88,
  89, 83, 74, 69, 73, 71, 76, 77, 81, 83, 85, 91, 92, 106, 108, 116, 194, 115, 190, 194,
  210, 186, 252, 223, 234, 218, 233, 200, 179, 179, 151, 130, 110, 119, 83, 100, 80, 105, 80, 102,
  100, 122, 103, 140, 127, 137, 124, 147, 130, 134, 125, 141, 116, 124, 118, 110, 98, 104, 91, 86,
  83, 80, 70, 70, 68, 71, 71, 78, 84, 85, 89, 94, 95, 108, 79, 172, 138, 159, 238, 194,
  211, 220, 249, 207, 242, 207, 238, 161, 190, 140, 148, 94, 133, 86, 101, 78, 114, 85, 104, 109,
  126, 114, 137, 133, 138, 125, 141, 133, 131, 130, 131, 121, 118, 120, 110, 100, 106, 96, 86, 87,
  80, 71, 73, 67, 69, 70, 71, 78, 82, 87, 91, 80, 108, 86, 118, 171, 120, 233, 204, 228,
  199, 252, 207, 241, 203, 241, 174, 187, 153, 149, 109, 125, 107, 100, 94, 106, 101, 100, 117, 117,
  128, 128, 141, 138, 129, 134, 137, 127, 130, 128, 124, 117, 116, 113, 102, 104, 100, 91, 88, 83,
  74, 70, 72, 64, 72, 68, 76, 77, 75, 83, 80, 92, 103, 79, 195, 129, 177, 222, 199, 205,
  243, 232, 223, 229, 226, 211, 173, 186, 142, 143, 111, 130, 95, 110, 96, 119, 93, 119, 118, 127,
  120, 140, 132, 134, 126, 136, 130, 128, 126, 125, 115, 117, 115, 104, 102, 107, 96, 92, 88, 81,
  74, 74, 67, 69, 68, 68, 74, 73, 76, 84, 73, 95, 80, 119, 156, 122, 232, 192, 220, 207,
  246, 212, 235, 212, 243, 176, 201, 163, 153, 122, 135, 112, 112, 102, 115, 103, 109, 119, 121, 122,
  133, 134, 133, 126, 132, 131, 126, 129, 130, 121, 121, 118, 116, 106, 109, 104, 98, 93, 90, 78,
  77, 72, 69, 71, 67, 69, 73, 72, 76, 80, 71, 93, 70, 136, 130, 130, 226, 180, 211, 212,
  236, 211, 237, 218, 239, 184, 211, 164, 163, 131, 144, 115, 118, 105, 120, 100, 113, 115, 119, 119,
  131, 131, 130, 123, 132, 131, 128, 129, 130, 120, 121, 117, 114, 106, 108, 101, 101, 91, 89, 80,
  78, 74, 71, 70, 71, 67, 74, 72, 75, 79, 67, 87, 73, 105, 144, 110, 212, 182, 206, 202,
  231, 210, 232, 219, 244, 195, 214, 183, 169, 147, 149, 126, 123, 112, 119, 102, 109, 114, 113, 118,
  127, 126, 126, 122, 127, 126, 123, 128, 127, 122, 124, 118, 115, 109, 109, 104, 104, 96, 94, 86,
  81, 79, 75, 72, 76, 72, 74, 76, 77, 78, 76, 75, 85, 67, 131, 117, 130, 209, 171, 198,
  205, 219, 208, 229, 223, 233, 200, 217, 181, 178, 150, 156, 132, 131, 117, 125, 105, 113, 111, 113,
  116, 121, 121, 118, 118, 124, 120, 119, 124, 126, 119, 122, 124, 113, 113, 112, 103, 104, 98, 92,
  86, 84, 77, 76, 73, 75, 77, 73, 76, 77, 77, 81, 81, 95, 93, 102, 163, 112, 168, 178,
  174, 190, 221, 210, 223, 223, 237, 212, 213, 203, 181, 167, 161, 145, 133, 126, 124, 113, 108, 113,
  107, 109, 115, 115, 114, 112, 113, 116, 114, 117, 122, 119, 123, 121, 119, 112, 114, 111, 108, 105,
  103, 91, 89, 85, 78, 77, 76, 75, 76, 77, 81, 80, 84, 91, 88, 95, 96, 95, 148, 118,
  152, 190, 174, 189, 215, 205, 213, 222, 227, 218, 210, 205, 186, 169, 163, 149, 134, 132, 122, 117,
  113, 108, 109, 109, 110, 114, 110, 109, 112, 110, 114, 114, 116, 120, 117, 119, 119, 113, 116, 115,
  110, 108, 105, 99, 94, 91, 85, 81, 82, 80, 80, 82, 82, 84, 86, 91, 95, 96, 102, 103,
  114, 141, 130, 164, 181, 177, 190, 207, 200, 212, 219, 220, 214, 209, 197, 183, 170, 164, 150, 140,
  135, 125, 117, 112, 108, 106, 105, 107, 107, 103, 103, 104, 103, 108, 110, 111, 117, 118, 117, 120,
  117, 117, 116, 114, 111, 108, 103, 99, 95, 90, 87, 85, 85, 84, 85, 86, 88, 91, 95, 98,
  102, 106, 107, 115, 136, 134, 148, 170, 169, 177, 196, 195, 201, 215, 216, 212, 212, 202, 190, 183,
  172, 160, 150, 141, 131, 122, 114, 108, 104, 102, 101, 98, 98, 96, 95, 98, 100, 104, 108, 110,
  113, 115, 115, 116, 118, 117, 117, 115, 112, 109, 104, 100, 96, 93, 90, 89, 88, 88, 90, 91,
  94, 97, 101, 104, 107, 111, 113, 125, 138, 140, 158, 168, 169, 182, 193, 192, 205, 213, 209, 209,
  206, 194, 188, 181, 169, 160, 152, 140, 130, 122, 114, 107, 104, 100, 95, 93, 91, 88, 91, 93,
  95, 99, 103, 106, 109, 113, 114, 116, 118, 119, 119, 118, 115, 112, 108, 104, 100, 97, 94, 92,
  91, 91, 92, 94, 96, 99, 102, 105, 108, 110, 116, 130, 137, 147, 162, 166, 172, 185, 190, 196,
  209, 209, 208, 208, 199, 189, 185, 176, 167, 159, 149, 137, 128, 119, 111, 105, 102, 97, 93, 90,
  87, 86, 88, 89, 94, 98, 101, 105, 109, 112, 114, 118, 119, 120, 120, 119, 117, 114, 111, 107,
  104, 101, 99, 97, 96, 96, 96, 98, 100, 103, 106, 109, 111, 113, 119, 132, 138, 147, 160, 164,
  170, 181, 186, 193, 203, 204, 203, 202, 194, 187, 182, 173, 165, 158, 148, 138, 129, 120, 112, 107,
  103, 98, 94, 91, 88, 87, 88, 89, 93, 97, 101, 104, 107, 111, 114, 116, 119, 119, 120, 119,
  117, 114, 111, 108, 105, 101, 100, 98, 97, 97, 97, 99, 102, 105, 109, 113, 116, 118, 121, 131,
  140, 145, 158, 166, 169, 178, 184, 188, 197, 201, 200, 199, 194, 185, 180, 174, 166, 158, 150, 139,
  130, 121, 113, 108, 104, 100, 95, 91, 88, 86, 86, 88, 91, 95, 99, 101, 105, 108, 111, 115,
  118, 119, 120, 120, 118, 117, 115, 112, 109, 106, 104, 102, 101, 100, 101, 101, 104, 106, 110, 114,
  118, 121, 123, 127, 135, 144, 151, 162, 168, 172, 179, 183, 187, 195, 197, 195, 194, 188, 179, 174,
  167, 160, 153, 144, 134, 125, 117, 110, 105, 101, 97, 92, 89, 86, 84, 86, 88, 91, 95, 99,
  102, 105, 110, 113, 117, 120, 122, 122, 123, 121, 120, 119, 117, 115, 112, 109, 107, 106, 106, 106,
  107, 108, 110, 112, 115, 118, 121, 124, 126, 131, 141, 146, 154, 162, 166, 171, 177, 179, 184, 190,
  189, 187, 185, 179, 173, 168, 162, 155, 149, 140, 131, 123, 115, 110, 105, 101, 97, 93, 89, 87,
  87, 89, 92, 94, 98, 101, 103, 106, 109, 112, 115, 117, 118, 118, 118, 117, 116, 115, 114, 113,
  111, 110, 109, 108, 109, 111, 112, 114, 116, 119, 122, 125, 128, 132, 135, 140, 147, 151, 157, 163,
  166, 170, 175, 176, 180, 182, 181, 179, 177, 171, 166, 161, 155, 149, 143, 135, 128, 121, 115, 110,
  106, 103, 99, 96, 94, 92, 92, 94, 96, 98, 102, 103, 105, 107, 109, 111, 113, 115, 115, 116,
  115, 115, 114, 114, 114, 114, 114, 113, 113, 113, 114, 115, 118, 120, 122, 124, 126, 128, 130, 133,
  136, 139, 143, 147, 151, 154, 159, 162, 164, 166, 168, 169, 171, 171, 169, 166, 162, 157, 153, 149,
  144, 139, 134, 128, 122, 117, 113, 110, 107, 105, 102, 100, 98, 98, 99, 100, 102, 104, 106, 108,
  110, 110, 113, 114, 115, 117, 117, 118, 118, 118, 117, 117, 117, 118, 119, 118, 119, 119, 119, 120,
  122, 123, 124, 125, 126, 129, 130, 132, 133, 135, 137, 140, 144, 146, 149, 151, 152, 154, 156, 157,
  158, 159, 159, 157, 156, 152, 149, 147, 145, 142, 139, 135, 131, 127, 123, 121, 119, 116, 114, 113,
  111, 109, 108, 108, 108, 109, 110, 110, 111, 112, 112, 113, 114, 115, 116, 116, 117, 118, 118, 118,
  118, 118, 118, 119, 119, 120, 120, 120, 121, 121, 122, 123, 125, 126, 127, 128, 129, 129, 131, 132,
  134, 135, 137, 138, 140, 142, 143, 144, 146, 147, 148, 149, 149, 149, 148, 147, 146, 144, 143, 141,
  140, 137, 136, 133, 131, 129, 127, 125, 124, 123, 121, 120, 118, 117, 116, 115, 115, 115, 115, 115,
  115, 115, 116, 116, 117, 118, 119, 119, 119, 120, 120, 120, 121, 121, 121, 121, 121, 122, 122, 123,
  123, 124, 124, 125, 126, 126, 126, 127, 127, 128, 128, 129, 129, 130, 131, 132, 133, 133, 134, 135,
  136, 137, 138, 138, 138, 139, 138, 139, 139, 139, 139, 138, 138, 137, 136, 135, 135, 134, 133, 132,
  130, 130, 128, 127, 126, 125, 124, 124, 123, 122, 121, 121, 121, 121, 120, 120, 120, 120, 120, 120,
  120, 120, 120, 121, 121, 122, 122, 122, 123, 123, 123, 124, 124, 124, 125, 125, 125, 125, 126, 126,
  127, 127, 127, 128, 128, 129, 130, 130, 131, 131, 131, 131, 131, 132, 132, 133, 133, 132, 132, 132,
  132, 132, 133, 133, 133, 132, 132, 132, 131, 131, 131, 131, 130, 130, 129, 128, 128, 127, 127, 127,
  127, 126, 126, 125, 125, 125, 125, 125, 125, 125, 125, 125, 124, 124, 124, 124, 124, 125, 125, 124,
  124, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 128, 128, 128,
  128, 129, 129, 129, 129, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 129, 129, 129, 129,
  129, 128, 128, 128, 128, 128, 127, 127, 127, 127, 127, 126, 126, 126, 126, 126, 126, 126, 126, 126,
  126, 126, 127, 127, 127, 127, 127, 127, 127, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 127, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128
};

#endif

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_le)
const uint8_t soDemData_le_0[] PROGMEM = {
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 127, 127, 127, 127, 127, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 127, 127, 127,
  127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 129, 129, 129, 129, 129, 129, 129, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 127, 127, 127, 127, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
  126, 125, 125, 126, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 127, 128, 129, 131,
  134, 136, 138, 140, 141, 145, 143, 145, 145, 147, 143, 143, 139, 137, 133, 128, 124, 121, 118, 115,
  112, 109, 110, 107, 106, 108, 107, 108, 108, 110, 110, 113, 111, 115, 115, 116, 117, 119, 121, 124,
  125, 128, 131, 133, 135, 136, 140, 144, 145, 147, 149, 160, 159, 158, 157, 163, 155, 156, 143, 145,
  136, 132, 118, 120, 109, 109, 103, 104, 104, 108, 108, 114, 119, 122, 129, 131, 136, 138, 139, 139,
  142, 139, 139, 135, 134, 131, 127, 123, 121, 118, 115, 112, 110, 109, 107, 106, 106, 106, 106, 107,
  108, 109, 112, 113, 118, 120, 124, 127, 128, 131, 134, 136, 140, 140, 140, 145, 152, 158, 152, 159,
  161, 162, 159, 155, 155, 149, 148, 133, 135, 121, 120, 109, 110, 105, 107, 104, 109, 113, 116, 121,
  124, 131, 132, 136, 137, 140, 137, 139, 134, 136, 130, 127, 122, 122, 115, 112, 107, 107, 105, 103,
  101, 102, 102, 103, 103, 105, 108, 110, 114, 118, 122, 128, 129, 131, 134, 137, 141, 145, 139, 147,
  145, 171, 149, 169, 158, 178, 159, 172, 153, 167, 150, 149, 135, 131, 120, 111, 105, 100, 101, 93,
  100, 99, 108, 109, 116, 122, 131, 133, 137, 141, 142, 144, 139, 141, 137, 136, 128, 125, 121, 117,
  109, 106, 103, 102, 100, 100, 99, 102, 102, 104, 105, 109, 109, 113, 117, 120, 124, 128, 129, 132,
  133, 136, 140, 144, 138, 149, 143, 178, 154, 175, 163, 190, 168, 183, 161, 176, 159, 153, 139, 129,
  121, 106, 100, 91, 94, 84, 91, 93, 101, 105, 113, 121, 132, 136, 138, 143, 144, 145, 139, 140,
  137, 134, 126, 122, 116, 116, 105, 106, 100, 102, 100, 100, 101, 103, 103, 104, 105, 107, 109, 112,
  117, 119, 124, 128, 130, 132, 134, 138, 140, 145, 131, 146, 146, 175, 150, 173, 168, 187, 171, 177,
  168, 175, 166, 153, 145, 130, 126, 103, 102, 89, 93, 83, 87, 90, 98, 102, 111, 120, 130, 137,
  139, 143, 146, 147, 140, 143, 134, 136, 126, 122, 119, 116, 106, 109, 102, 106, 103, 101, 106, 106,
  106, 108, 107, 108, 109, 110, 113, 116, 118, 122, 124, 126, 129, 129, 133, 136, 125, 138, 135, 168,
  148, 169, 161, 187, 171, 184, 167, 189, 175, 173, 155, 148, 141, 124, 112, 101, 98, 90, 86, 86,
  91, 98, 99, 109, 119, 127, 134, 135, 143, 148, 141, 144, 139, 140, 134, 127, 121, 121, 111, 110,
  104, 102, 106, 103, 103, 108, 106, 110, 109, 108, 108, 109, 109, 112, 113, 116, 119, 121, 122, 125,
  129, 132, 134, 129, 130, 134, 162, 148, 160, 156, 181, 173, 187, 168, 191, 178, 184, 163, 158, 149,
  140, 120, 109, 98, 96, 88, 84, 86, 91, 96, 103, 109, 124, 128, 134, 140, 143, 147, 142, 142,
  137, 136, 129, 123, 118, 114, 111, 108, 107, 106, 109, 109, 111, 113, 116, 116, 117, 114, 114, 111,
  109, 108, 109, 110, 111, 113, 114, 118, 123, 128, 127, 124, 126, 125, 161, 144, 160, 158, 182, 171,
  191, 160, 190, 180, 186, 166, 162, 150, 145, 125, 112, 102, 96, 91, 85, 88, 93, 101, 106, 114,
  127, 136, 139, 145, 146, 147, 144, 135, 130, 127, 120, 114, 112, 107, 112, 109, 108, 114, 116, 117,
  121, 119, 122, 123, 119, 115, 112, 107, 102, 100, 98, 102, 103, 104, 109, 114, 125, 134, 134, 126,
  121, 112, 159, 129, 142, 146, 175, 166, 186, 159, 198, 196, 194, 179, 173, 165, 159, 132, 112, 109,
  98, 92, 84, 87, 96, 107, 109, 128, 143, 149, 146, 148, 151, 142, 125, 118, 114, 108, 104, 98,
  108, 112, 116, 123, 126, 132, 134, 129, 132, 127, 121, 120, 109, 101, 96, 89, 90, 87, 94, 105,
  105, 113, 120, 121, 133, 125, 87, 67, 56, 157, 113, 140, 192, 252, 218, 232, 199, 242, 191, 145,
  135, 124, 88, 80, 74, 109, 123, 118, 156, 179, 169, 173, 165, 158, 144, 115, 102, 95, 76, 91,
  81, 101, 111, 123, 134, 138, 145, 138, 132, 135, 129, 123, 118, 118, 106, 108, 111, 116, 124, 121,
  123, 120, 110, 105, 96, 88, 94, 91, 87, 99, 102, 112, 112, 85, 51, 34, 151, 135, 110, 196,
  247, 216, 226, 185, 228, 179, 126, 135, 139, 107, 111, 120, 147, 155, 142, 172, 185, 150, 141, 153,
  126, 110, 107, 109, 110, 93, 110, 126, 121, 126, 126, 120, 129, 114, 110, 107, 110, 118, 132, 138,
  138, 135, 136, 126, 118, 119, 122, 119, 113, 112, 105, 97, 96, 90, 97, 100, 94, 107, 108, 100,
  111, 97, 58, 18, 44, 158, 78, 144, 218, 236, 210, 219, 211, 223, 156, 135, 155, 131, 102, 125,
  143, 156, 144, 165, 191, 173, 146, 157, 147, 118, 103, 111, 110, 96, 93, 124, 118, 119, 119, 128,
  127, 113, 114, 112, 106, 108, 118, 134, 137, 127, 137, 134, 124, 119, 125, 124, 119, 114, 116, 104,
  100, 100, 100, 99, 103, 106, 114, 109, 105, 112, 93, 60, 15, 23, 142, 72, 111, 209, 228, 190,
  226, 214, 221, 161, 141, 163, 136, 101, 135, 150, 155, 150, 170, 193, 176, 147, 161, 149, 117, 107,
  115, 108, 98, 97, 123, 117, 114, 125, 135, 122, 119, 117, 111, 102, 103, 115, 122, 124, 135, 140,
  137, 129, 131, 125, 125, 123, 121, 117, 114, 104, 103, 103, 98, 98, 110, 108, 109, 114, 112, 118,
  97, 72, 22, 24, 131, 55, 92, 195, 202, 185, 218, 207, 226, 177, 146, 181, 145, 107, 139, 146,
  145, 146, 165, 190, 174, 147, 168, 163, 118, 113, 123, 115, 94, 91, 120, 121, 104, 116, 136, 117,
  111, 121, 118, 104, 104, 110, 126, 123, 123, 135, 131, 126, 124, 128, 131, 124, 129, 128, 120, 111,
  111, 109, 105, 100, 109, 112, 113, 117, 120, 118, 114, 89, 58, 15, 38, 133, 27, 126, 201, 183,
  175, 211, 211, 211, 161, 172, 183, 138, 119, 153, 141, 145, 143, 166, 182, 159, 147, 170, 147, 119,
  128, 127, 104, 95, 103, 117, 102, 104, 122, 123, 111, 114, 123, 114, 102, 115, 109, 111, 125, 133,
  134, 136, 134, 134, 131, 129, 127, 128, 132, 127, 120, 118, 112, 105, 107, 104, 105, 113, 110, 115,
  121, 114, 116, 99, 75, 37, 29, 125, 52, 103, 184, 190, 163, 206, 206, 213, 173, 166, 189, 148,
  119, 145, 141, 134, 136, 154, 167, 161, 145, 166, 155, 125, 129, 132, 107, 98, 103, 114, 99, 103,
  117, 121, 110, 115, 129, 121, 108, 117, 119, 112, 117, 121, 133, 132, 133, 138, 133, 129, 133, 131,
  130, 131, 131, 123, 120, 114, 107, 106, 103, 101, 105, 105, 102, 106, 107, 108, 103, 90, 65, 35,
  104, 118, 70, 170, 211, 170, 194, 204, 202, 182, 151, 174, 159, 122, 133, 151, 131, 134, 150, 162,
  159, 144, 158, 160, 128, 124, 131, 120, 102, 100, 114, 111, 103, 112, 126, 117, 117, 127, 129, 115,
  115, 119, 122, 119, 123, 125, 134, 131, 121, 129, 121, 124, 124, 127, 123, 121, 127, 123, 113, 114,
  112, 107, 105, 102, 106, 109, 101, 102, 107, 100, 102, 97, 81, 50, 70, 169, 90, 143, 219, 210,
  177, 208, 200, 185, 151, 150, 164, 132, 114, 146, 142, 136, 145, 160, 162, 153, 143, 152, 139, 115,
  117, 121, 102, 103, 108, 115, 108, 116, 125, 125, 117, 126, 127, 118, 110, 121, 113, 116, 128, 132,
  134, 134, 132, 129, 122, 119, 118, 119, 120, 121, 120, 118, 119, 116, 114, 112, 110, 109, 108, 105,
  105, 106, 100, 98, 104, 103, 102, 97, 88, 61, 99, 187, 104, 185, 241, 204, 186, 205, 188, 167,
  134, 148, 148, 124, 117, 147, 139, 137, 146, 160, 158, 145, 136, 145, 124, 107, 113, 116, 96, 102,
  110, 118, 106, 117, 126, 119, 117, 126, 128, 114, 112, 125, 113, 117, 131, 131, 134, 137, 132, 132,
  124, 120, 121, 119, 117, 122, 121, 120, 120, 119, 116, 114, 111, 108, 105, 106, 99, 101, 103, 100,
  99, 108, 105, 112, 111, 105, 85, 95, 211, 145, 170, 227, 225, 177, 195, 177, 157, 131, 131, 144,
  124, 112, 145, 142, 137, 141, 156, 150, 138, 128, 132, 119, 103, 105, 118, 102, 106, 113, 124, 115,
  122, 124, 123, 114, 126, 124, 117, 110, 126, 120, 124, 127, 140, 136, 140, 134, 134, 121, 118, 116,
  115, 111, 118, 118, 120, 119, 119, 115, 112, 108, 103, 102, 101, 97, 97, 101, 99, 101, 110, 112,
  116, 116, 123, 102, 109, 208, 149, 182, 231, 214, 170, 189, 169, 150, 131, 134, 143, 132, 122, 149,
  148, 142, 142, 149, 142, 130, 120, 125, 116, 106, 110, 120, 111, 114, 116, 124, 117, 121, 120, 121,
  114, 119, 120, 113, 110, 121, 125, 125, 135, 138, 134, 126, 123, 119, 111, 112, 114, 114, 118, 120,
  121, 121, 118, 117, 112, 109, 108, 104, 102, 103, 100, 103, 102, 103, 110, 114, 119, 121, 123, 109,
  108, 183, 176, 173, 221, 229, 174, 179, 168, 147, 132, 125, 145, 141, 130, 147, 155, 148, 144, 148,
  140, 128, 118, 117, 116, 107, 106, 118, 115, 113, 118, 123, 120, 119, 122, 123, 112, 114, 114, 115,
  105, 120, 127, 124, 132, 133, 125, 122, 118, 114, 111, 114, 115, 118, 119, 118, 118, 118, 116, 112,
  111, 109, 106, 107, 105, 105, 106, 104, 106, 111, 112, 117, 116, 119, 101, 114, 199, 165, 174, 219,
  221, 174, 179, 166, 144, 133, 133, 145, 142, 135, 153, 155, 149, 143, 150, 140, 128, 118, 118, 116,
  106, 106, 119, 112, 113, 115, 120, 116, 121, 115, 117, 109, 112, 115, 114, 113, 122, 130, 132, 132,
  130, 126, 120, 115, 114, 112, 111, 119, 121, 119, 120, 120, 117, 115, 112, 111, 109, 108, 108, 106,
  107, 106, 104, 107, 112, 110, 110, 112, 107, 105, 155, 179, 161, 203, 230, 174, 170, 169, 149, 140,
  135, 150, 152, 146, 149, 158, 154, 139, 143, 137, 127, 120, 119, 120, 115, 114, 124, 121, 117, 118,
  121, 118, 109, 114, 114, 108, 109, 111, 117, 115, 124, 130, 126, 130, 129, 124, 118, 118, 113, 116,
  118, 121, 122, 122, 122, 119, 114, 112, 109, 108, 108, 107, 107, 105, 106, 108, 110, 108, 109, 110,
  103, 97, 121, 167, 147, 180, 215, 189, 165, 170, 159, 145, 139, 146, 154, 155, 150, 160, 163, 152,
  144, 142, 133, 127, 118, 120, 120, 115, 122, 128, 122, 120, 125, 125, 112, 116, 111, 111, 106, 106,
  117, 115, 119, 127, 128, 125, 122, 122, 115, 114, 113, 116, 118, 118, 121, 118, 119, 115, 113, 114,
  111, 112, 112, 110, 107, 108, 111, 108, 108, 108, 96, 92, 105, 150, 142, 165, 200, 195, 168, 167,
  154, 142, 144, 144, 149, 160, 154, 163, 166, 158, 146, 142, 133, 127, 121, 120, 123, 124, 125, 128,
  126, 126, 122, 125, 118, 115, 111, 108, 112, 107, 112, 122, 127, 125, 125, 124, 120, 112, 114, 110,
  112, 112, 116, 118, 118, 117, 120, 118, 117, 113, 117, 112, 110, 107, 111, 109, 99, 94, 86, 92,
  133, 136, 143, 171, 188, 168, 167, 160, 147, 147, 146, 148, 156, 159, 160, 160, 157, 150, 152, 143,
  136, 136, 135, 128, 126, 130, 123, 122, 120, 121, 122, 117, 120, 120, 113, 114, 119, 119, 116, 119,
  118, 115, 117, 114, 115, 115, 112, 119, 109, 118, 116, 112, 121, 115, 114, 110, 114, 123, 121, 115,
  108, 94, 76, 82, 99, 115, 136, 150, 160, 170, 165, 151, 147, 147, 143, 147, 155, 158, 162, 168,
  165, 162, 160, 154, 146, 141, 133, 126, 122, 129, 129, 130, 131, 133, 129, 127, 123, 119, 113, 112,
  114, 114, 116, 118, 118, 120, 117, 118, 114, 115, 112, 111, 107, 102, 102, 110, 114, 121, 123, 127,
  119, 122, 113, 101, 86, 83, 83, 103, 118, 128, 142, 152, 154, 146, 140, 142, 143, 141, 152, 159,
  161, 162, 163, 162, 163, 156, 151, 154, 151, 144, 142, 132, 129, 130, 127, 128, 132, 134, 132, 131,
  127, 120, 118, 113, 113, 114, 110, 116, 114, 117, 118, 120, 121, 112, 114, 103, 102, 113, 107, 99,
  105, 116, 107, 95, 89, 92, 97, 101, 100, 121, 137, 136, 134, 137, 139, 138, 136, 135, 145, 154,
  153, 154, 159, 160, 163, 162, 153, 151, 150, 159, 150, 148, 144, 144, 138, 143, 144, 148, 140, 138,
  137, 125, 119, 114, 117, 115, 120, 124, 124, 113, 115, 113, 109, 98, 105, 107, 104, 112, 117, 107,
  98, 87, 74, 77, 90, 88, 103, 119, 130, 122, 128, 125, 120, 118, 124, 131, 143, 151, 157, 164,
  164, 162, 162, 162, 162, 155, 148, 151, 152, 142, 145, 150, 159, 155, 150, 153, 154, 130, 123, 119,
  115, 116, 124, 120, 127, 132, 128, 125, 121, 103, 99, 101, 98, 92, 102, 95, 84, 87, 87, 88,
  99, 90, 107, 106, 111, 105, 113, 123, 135, 127, 142, 149, 152, 156, 158, 152, 161, 158, 160, 156,
  151, 157, 158, 150, 160, 158, 154, 165, 160, 139, 145, 136, 126, 132, 131, 121, 132, 124, 119, 119,
  113, 109, 109, 105, 111, 111, 102, 105, 107, 90, 85, 83, 73, 81, 98, 93, 105, 113, 120, 118,
  114, 109, 119, 120, 130, 140, 150, 164, 175, 163, 165, 158, 155, 155, 160, 155, 165, 166, 166, 151,
  156, 153, 146, 143, 162, 144, 132, 134, 133, 107, 112, 107, 111, 119, 120, 112, 112, 107, 96, 93,
  88, 93, 89, 89, 89, 99, 97, 101, 108, 115, 110, 117, 120, 117, 124, 127, 135, 151, 155, 153,
  156, 162, 158, 156, 159, 167, 160, 161, 159, 171, 160, 139, 143, 143, 134, 126, 127, 129, 133, 122,
  113, 109, 109, 98, 98, 105, 103, 98, 91, 105, 107, 102, 100, 97, 102, 96, 95, 105, 116, 119,
  124, 124, 136, 142, 137, 136, 146, 152, 145, 161, 173, 170, 165, 165, 164, 161, 155, 152, 158, 159,
  147, 136, 142, 136, 128, 129, 126, 120, 113, 108, 104, 106, 95, 89, 94, 104, 98, 98, 96, 103,
  104, 83, 84, 104, 110, 96, 113, 124, 126, 118, 127, 126, 138, 140, 143, 159, 166, 150, 158, 159,
  157, 157, 165, 163, 162, 161, 162, 163, 159, 138, 142, 133, 127, 127, 125, 123, 127, 113, 108, 103,
  100, 94, 90, 94, 101, 97, 97, 100, 104, 95, 96, 97, 99, 118, 131, 118, 114, 127, 123, 126,
  122, 141, 145, 152, 162, 161, 149, 150, 156, 160, 151, 154, 164, 161, 157, 153, 153, 152, 141, 133,
  135, 126, 126, 125, 124, 120, 113, 108, 105, 106, 102, 98, 102, 104, 102, 104, 99, 96, 97, 97,
  113, 111, 110, 121, 125, 119, 120, 120, 131, 130, 140, 143, 150, 147, 150, 159, 159, 152, 153, 148,
  143, 150, 146, 146, 147, 146, 143, 137, 135, 140, 131, 115, 115, 120, 113, 108, 106, 114, 116, 113,
  106, 107, 108, 105, 103, 109, 109, 112, 114, 121, 124, 130, 130, 131, 134, 129, 128, 138, 142, 136,
  138, 143, 146, 144, 143, 144, 145, 142, 137, 143, 142, 141, 137, 136, 137, 135, 128, 126, 127, 127,
  116, 110, 112, 109, 108, 112, 113, 114, 114, 117, 112, 114, 112, 113, 116, 125, 124, 129, 131, 135,
  131, 124, 126, 134, 133, 129, 137, 145, 141, 139, 141, 138, 138, 139, 138, 141, 138, 135, 132, 128,
  128, 132, 129, 127, 124, 123, 117, 115, 116, 115, 114, 121, 125, 124, 121, 123, 123, 119, 120, 121,
  124, 124, 127, 128, 129, 128, 129, 132, 130, 128, 131, 132, 131, 133, 139, 137, 135, 135, 134, 131,
  131, 131, 129, 129, 130, 128, 126, 127, 128, 126, 123, 124, 126, 125, 122, 123, 126, 125, 125, 124,
  125, 124, 123, 123, 123, 122, 125, 124, 125, 127, 128, 128, 127, 129, 131, 130, 129, 131, 132, 130,
  130, 132, 131, 130, 129, 130, 128, 126, 126, 128, 128, 129, 128, 127, 127, 127, 127, 129, 129, 127,
  125, 125, 124, 125, 126, 126, 128, 128, 128, 130, 128, 128, 127, 128, 127, 128, 128, 129, 130, 131,
  130, 129, 129, 128, 127, 126, 126, 126, 127, 127, 127, 128, 129, 128, 127, 128, 129, 127, 127, 127,
  127, 127, 127, 128, 127, 127, 128, 127, 128, 128, 127, 127, 126, 127, 127, 127, 126, 128, 128, 127,
  127, 127, 127, 126, 126, 128, 127, 127, 127, 127, 128, 128, 127, 128, 128, 129, 129, 129, 129, 128,
  128, 127, 128, 129, 128, 127, 128, 129, 128, 128, 128, 128, 128, 128, 127, 128, 128, 127, 127, 127,
  127, 127, 127, 128, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 128, 128, 127, 128, 128, 128, 127, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128
};

#endif

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_tram)
const uint8_t soDemData_tram_0[] PROGMEM = {
  128, 128, 128, 128, 128, 127, 127, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 127, 128,
  128, 127, 127, 127, 127, 127, 128, 127, 128, 127, 127, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  127, 128, 128, 128, 128, 128, 128, 128, 127, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 127,
  128, 128, 127, 128, 128, 128, 127, 128, 127, 128, 128, 128, 127, 128, 127, 128, 127, 128, 128, 127,
  128, 128, 128, 128, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 127, 128, 126, 128, 127, 127, 128, 127, 129, 127, 127, 128, 127, 129, 127, 128,
  128, 127, 129, 128, 127, 129, 127, 128, 130, 130, 129, 128, 127, 127, 128, 128, 127, 128, 126, 128,
  125, 126, 129, 128, 129, 125, 128, 129, 129, 125, 132, 121, 137, 125, 128, 124, 127, 120, 127, 128,
  124, 124, 128, 129, 136, 118, 138, 124, 124, 134, 129, 127, 131, 113, 132, 116, 124, 133, 125, 130,
  123, 128, 122, 131, 123, 141, 120, 138, 128, 131, 123, 133, 124, 129, 126, 124, 132, 118, 128, 122,
  127, 130, 129, 125, 141, 113, 141, 126, 125, 130, 123, 129, 131, 120, 132, 122, 123, 129, 126, 134,
  131, 127, 140, 125, 131, 137, 129, 138, 135, 133, 140, 128, 136, 129, 130, 132, 131, 131, 135, 131,
  134, 132, 132, 128, 126, 127, 121, 121, 119, 119, 110, 111, 107, 101, 96, 91, 90, 106, 94, 112,
  123, 133, 140, 151, 157, 166, 157, 165, 161, 155, 140, 136, 130, 129, 121, 126, 133, 136, 142, 156,
  157, 159, 163, 158, 148, 141, 128, 116, 106, 94, 88, 81, 79, 81, 79, 84, 88, 85, 77, 82,
  104, 143, 111, 149, 161, 167, 158, 158, 153, 158, 129, 132, 124, 120, 101, 112, 108, 126, 115, 137,
  152, 162, 160, 178, 180, 180, 169, 159, 146, 136, 124, 120, 115, 119, 120, 124, 127, 130, 127, 124,
  117, 107, 98, 85, 72, 62, 43, 21, 32, 73, 125, 121, 169, 205, 208, 198, 177, 164, 161, 111,
  103, 93, 97, 88, 105, 126, 156, 160, 170, 180, 177, 157, 151, 139, 134, 124, 123, 120, 135, 145,
  150, 154, 156, 153, 152, 142, 140, 131, 119, 105, 95, 80, 71, 66, 66, 73, 66, 50, 47, 65,
  148, 150, 158, 192, 203, 190, 151, 125, 130, 123, 89, 101, 110, 131, 138, 149, 162, 173, 152, 148,
  143, 129, 110, 111, 125, 138, 141, 151, 165, 163, 176, 159, 144, 145, 131, 123, 124, 129, 135, 132,
  123, 117, 101, 89, 73, 67, 56, 62, 49, 37, 49, 92, 197, 195, 185, 197, 197, 159, 102, 67,
  92, 107, 98, 110, 144, 177, 181, 176, 165, 157, 128, 112, 106, 102, 94, 123, 158, 169, 164, 166,
  167, 156, 157, 136, 126, 133, 139, 130, 136, 134, 143, 147, 133, 119, 100, 86, 74, 67, 57, 57,
  66, 67, 43, 41, 147, 246, 209, 172, 174, 155, 122, 62, 40, 91, 138, 149, 154, 182, 194, 186,
  152, 116, 97, 94, 100, 106, 111, 139, 178, 196, 184, 158, 139, 125, 117, 120, 133, 151, 162, 161,
  149, 141, 137, 132, 131, 128, 115, 102, 87, 74, 70, 72, 70, 77, 75, 45, 30, 108, 250, 226,
  178, 132, 121, 108, 92, 53, 82, 146, 195, 196, 189, 152, 149, 136, 106, 69, 72, 108, 154, 167,
  161, 166, 183, 180, 141, 85, 73, 105, 154, 168, 176, 179, 167, 152, 127, 111, 124, 142, 140, 133,
  122, 100, 87, 81, 78, 82, 73, 67, 68, 49, 27, 89, 233, 252, 210, 127, 78, 74, 104, 90,
  90, 127, 182, 209, 208, 157, 117, 104, 105, 91, 89, 107, 146, 178, 187, 165, 158, 152, 131, 105,
  92, 102, 137, 175, 187, 173, 154, 139, 137, 125, 130, 132, 133, 134, 128, 108, 94, 90, 89, 88,
  83, 76, 76, 60, 22, 47, 179, 250, 238, 169, 86, 47, 87, 121, 114, 115, 144, 189, 219, 194,
  125, 83, 86, 104, 106, 111, 128, 167, 188, 176, 145, 135, 123, 109, 106, 118, 139, 164, 179, 172,
  142, 132, 132, 137, 141, 143, 132, 128, 124, 116, 109, 105, 101, 101, 91, 77, 70, 77, 65, 26,
  53, 178, 245, 238, 172, 82, 33, 83, 131, 133, 128, 137, 167, 201, 193, 134, 90, 87, 107, 121,
  127, 128, 142, 166, 171, 154, 134, 121, 113, 107, 123, 143, 166, 171, 168, 146, 134, 129, 135, 139,
  145, 138, 133, 128, 125, 116, 108, 99, 95, 94, 87, 79, 75, 55, 22, 49, 167, 237, 235, 175,
  90, 43, 80, 122, 128, 128, 135, 162, 191, 190, 140, 98, 89, 105, 124, 137, 132, 136, 149, 162,
  155, 144, 127, 117, 115, 127, 136, 151, 158, 161, 153, 148, 135, 133, 137, 141, 139, 136, 129, 125,
  124, 120, 109, 98, 94, 89, 88, 81, 57, 27, 31, 111, 201, 233, 204, 133, 72, 70, 103, 120,
  122, 125, 146, 177, 196, 168, 125, 96, 100, 115, 129, 131, 131, 139, 155, 161, 159, 143, 126, 115,
  119, 130, 145, 157, 156, 150, 147, 142, 140, 138, 135, 131, 134, 134, 131, 124, 115, 108, 107, 105,
  99, 95, 89, 77, 55, 33, 47, 125, 190, 215, 187, 128, 79, 85, 106, 119, 125, 127, 141, 168,
  184, 166, 136, 111, 105, 114, 126, 131, 138, 144, 153, 158, 160, 144, 129, 117, 119, 131, 148, 156,
  156, 149, 143, 139, 142, 140, 136, 132, 131, 132, 132, 125, 116, 109, 103, 103, 101, 100, 92, 76,
  46, 33, 60, 124, 174, 196, 169, 128, 97, 96, 101, 110, 115, 128, 146, 167, 174, 164, 144, 128,
  117, 117, 123, 130, 137, 143, 150, 153, 155, 148, 136, 121, 117, 121, 137, 149, 153, 150, 150, 150,
  151, 146, 136, 128, 130, 133, 137, 134, 126, 119, 115, 112, 111, 111, 106, 97, 80, 56, 44, 62,
  98, 129, 149, 147, 131, 117, 115, 113, 115, 121, 126, 133, 145, 148, 147, 148, 147, 143, 141, 140,
  140, 141, 138, 134, 136, 143, 148, 146, 139, 130, 128, 133, 138, 138, 135, 135, 137, 141, 143, 142,
  139, 136, 133, 132, 133, 133, 130, 125, 121, 120, 123, 124, 119, 110, 99, 90, 79, 79, 89, 97,
  101, 103, 96, 89, 99, 108, 120, 135, 142, 140, 139, 137, 134, 141, 148, 150, 152, 151, 146, 145,
  145, 139, 141, 146, 147, 147, 145, 139, 138, 141, 143, 140, 140, 136, 135, 137, 136, 134, 134, 136,
  136, 137, 134, 130, 128, 125, 123, 121, 118, 114, 108, 101, 94, 89, 82, 82, 90, 91, 89, 90,
  86, 83, 99, 111, 123, 139, 141, 139, 140, 142, 143, 153, 157, 157, 157, 155, 152, 151, 148, 146,
  148, 151, 150, 145, 141, 137, 137, 140, 142, 141, 141, 138, 134, 131, 130, 131, 132, 134, 134, 130,
  128, 127, 124, 121, 119, 117, 114, 110, 104, 98, 89, 80, 79, 90, 90, 95, 95, 90, 90, 102,
  110, 123, 137, 137, 138, 139, 139, 143, 152, 156, 157, 156, 152, 148, 146, 144, 145, 150, 151, 149,
  144, 139, 136, 136, 137, 140, 141, 139, 138, 135, 133, 134, 135, 136, 137, 135, 132, 131, 130, 128,
  127, 124, 121, 118, 114, 109, 102, 92, 80, 78, 88, 89, 94, 94, 88, 87, 96, 103, 117, 130,
  132, 135, 135, 135, 139, 149, 155, 159, 156, 151, 147, 145, 147, 149, 154, 154, 152, 146, 142, 139,
  139, 140, 141, 140, 137, 136, 134, 134, 134, 136, 136, 137, 135, 132, 130, 129, 129, 129, 127, 124,
  120, 117, 112, 107, 101, 89, 83, 85, 91, 90, 94, 90, 87, 90, 98, 106, 119, 125, 128, 131,
  133, 135, 142, 149, 153, 154, 151, 148, 146, 147, 149, 151, 154, 153, 150, 146, 143, 140, 141, 141,
  141, 140, 138, 137, 135, 135, 135, 135, 136, 137, 135, 133, 131, 130, 131, 131, 129, 126, 122, 117,
  114, 111, 107, 101, 91, 87, 90, 90, 91, 92, 90, 88, 94, 98, 106, 117, 121, 126, 128, 130,
  133, 139, 144, 149, 150, 149, 147, 147, 149, 150, 152, 153, 152, 149, 147, 144, 143, 143, 144, 143,
  141, 140, 138, 137, 137, 137, 138, 138, 137, 136, 135, 133, 132, 131, 130, 129, 127, 124, 120, 116,
  111, 110, 107, 104, 96, 89, 87, 91, 89, 92, 92, 91, 93, 99, 105, 113, 120, 124, 128, 130,
  133, 136, 141, 145, 148, 149, 148, 147, 148, 149, 150, 152, 152, 151, 149, 147, 145, 145, 144, 143,
  143, 141, 140, 138, 137, 137, 137, 137, 137, 136, 135, 134, 132, 131, 129, 127, 126, 124, 122, 119,
  116, 112, 109, 106, 103, 97, 92, 91, 93, 90, 92, 91, 91, 95, 100, 104, 111, 117, 121, 125,
  129, 132, 135, 140, 143, 145, 147, 148, 149, 149, 150, 151, 153, 154, 153, 151, 150, 149, 148, 147,
  145, 145, 143, 143, 140, 139, 137, 137, 137, 137, 135, 133, 133, 131, 129, 127, 125, 123, 122, 120,
  117, 115, 112, 109, 107, 104, 102, 98, 94, 92, 94, 91, 93, 94, 95, 97, 102, 105, 110, 118,
  121, 126, 130, 133, 136, 141, 144, 146, 149, 150, 150, 152, 153, 153, 154, 154, 154, 153, 153, 151,
  150, 148, 146, 145, 144, 143, 139, 138, 137, 136, 134, 134, 132, 131, 130, 128, 126, 125, 123, 121,
  120, 119, 117, 114, 111, 109, 107, 105, 103, 100, 96, 94, 94, 94, 94, 96, 96, 97, 102, 105,
  110, 116, 120, 124, 129, 134, 136, 140, 143, 145, 148, 150, 151, 152, 153, 153, 153, 154, 155, 154,
  153, 152, 150, 149, 148, 146, 146, 143, 141, 138, 137, 135, 134, 133, 131, 129, 128, 127, 124, 123,
  122, 120, 119, 117, 114, 112, 112, 110, 109, 108, 105, 103, 102, 99, 99, 99, 99, 99, 101, 101,
  102, 106, 109, 112, 117, 121, 123, 128, 131, 134, 137, 141, 142, 145, 147, 148, 149, 151, 152, 153,
  154, 154, 154, 154, 152, 151, 150, 149, 148, 146, 142, 141, 139, 137, 135, 133, 131, 130, 129, 127,
  125, 124, 122, 121, 119, 118, 116, 114, 113, 112, 111, 109, 109, 107, 106, 106, 104, 103, 103, 103,
  103, 104, 105, 105, 107, 109, 111, 115, 118, 121, 125, 127, 130, 133, 136, 139, 141, 144, 146, 148,
  149, 150, 151, 152, 153, 154, 154, 153, 152, 150, 149, 148, 146, 145, 141, 139, 138, 135, 133, 131,
  128, 127, 126, 125, 123, 121, 119, 118, 118, 117, 115, 114, 113, 112, 112, 112, 110, 110, 110, 109,
  109, 110, 109, 110, 110, 110, 110, 112, 113, 114, 115, 117, 119, 121, 124, 126, 128, 130, 132, 135,
  137, 139, 141, 143, 144, 146, 146, 148, 148, 149, 149, 149, 149, 148, 147, 146, 144, 143, 141, 139,
  137, 135, 133, 131, 128, 127, 125, 124, 122, 121, 119, 119, 118, 117, 116, 116, 115, 115, 115, 115,
  114, 114, 115, 115, 115, 116, 117, 117, 118, 118, 119, 121, 122, 123, 123, 124, 125, 126, 127, 128,
  129, 130, 131, 131, 132, 133, 134, 135, 135, 136, 137, 137, 137, 138, 138, 138, 138, 138, 137, 137,
  136, 136, 135, 134, 133, 132, 131, 130, 129, 128, 126, 126, 125, 124, 123, 123, 122, 122, 121, 121,
  120, 120, 120, 120, 121, 121, 121, 121, 122, 122, 123, 124, 125, 125, 126, 126, 127, 128, 128, 129,
  129, 129, 130, 130, 130, 130, 130, 131, 130, 130, 131, 131, 131, 131, 130, 130, 130, 130, 130, 130,
  130, 130, 129, 129, 129, 129, 128, 128, 128, 127, 127, 127, 126, 126, 126, 126, 126, 125, 125, 124,
  124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 126, 126, 126, 126, 127, 127, 128, 128, 128,
  129, 129, 130, 130, 130, 130, 130, 131, 131, 132, 131, 131, 131, 131, 131, 131, 131, 131, 130, 130,
  130, 130, 129, 129, 129, 128, 128, 128, 128, 128, 127, 127, 126, 126, 126, 126, 125, 125, 125, 125,
  125, 125, 125, 125, 125, 124, 124, 125, 125, 124, 124, 124, 125, 125, 125, 125, 125, 125, 126, 126,
  126, 127, 127, 127, 127, 128, 128, 129, 129, 129, 129, 130, 130, 130, 130, 130, 131, 131, 131, 131,
  131, 131, 131, 131, 131, 131, 130, 130, 130, 129, 129, 129, 129, 128, 128, 128, 127, 127, 127, 126,
  126, 126, 126, 126, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126,
  127, 127, 127, 127, 128, 128, 128, 128, 128, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
  129, 129, 129, 129, 129, 129, 128, 128, 128, 128, 128, 127, 127, 127, 127, 127, 126, 126, 126, 126,
  126, 126, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127,
  127, 128, 128, 128, 129, 129, 129, 129, 129, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130,
  130, 130, 130, 130, 130, 129, 129, 129, 129, 128, 128, 128, 127, 127, 127, 127, 126, 126, 126, 126,
  125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 128, 128
};

#endif

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_muoi_chuc)
const uint8_t soDemData_muoi_chuc_0[] PROGMEM = {
  128, 128, 128, 127, 128, 128, 127, 128, 128, 127, 128, 128, 127, 127, 128, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 127, 127, 127, 127, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 127, 128, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
  126, 126, 126, 126, 127, 127, 127, 127, 127, 128, 128, 128, 129, 129, 130, 130, 130, 131, 131, 131,
  132, 132, 132, 133, 133, 133, 133, 134, 134, 134, 134, 134, 133, 133, 132, 131, 129, 128, 126, 125,
  122, 120, 118, 115, 113, 111, 109, 107, 106, 105, 104, 104, 104, 105, 106, 108, 110, 113, 116, 119,
  124, 128, 133, 137, 142, 146, 151, 159, 164, 168, 173, 174, 172, 172, 171, 167, 164, 160, 152, 142,
  136, 126, 118, 115, 111, 107, 105, 104, 101, 101, 103, 104, 107, 110, 111, 112, 113, 114, 115, 116,
  118, 118, 117, 116, 115, 113, 112, 111, 109, 108, 107, 106, 107, 108, 110, 113, 116, 119, 122, 127,
  131, 136, 142, 148, 152, 157, 167, 172, 175, 182, 182, 178, 179, 177, 170, 168, 162, 150, 139, 131,
  118, 110, 107, 102, 98, 98, 96, 94, 96, 99, 101, 108, 114, 118, 122, 126, 128, 130, 132, 134,
  133, 131, 129, 123, 117, 113, 106, 101, 97, 93, 89, 87, 87, 88, 91, 96, 100, 106, 113, 119,
  126, 135, 142, 149, 157, 169, 180, 183, 193, 196, 193, 194, 195, 190, 185, 183, 170, 156, 145, 131,
  118, 112, 107, 99, 97, 95, 90, 89, 92, 95, 99, 106, 111, 113, 117, 122, 123, 126, 130, 129,
  128, 127, 122, 116, 113, 108, 101, 98, 93, 88, 85, 84, 84, 87, 92, 96, 101, 108, 114, 120,
  129, 139, 146, 154, 167, 179, 183, 193, 199, 198, 198, 201, 196, 191, 192, 180, 165, 153, 139, 123,
  116, 110, 102, 98, 97, 92, 89, 91, 93, 96, 102, 108, 111, 115, 122, 124, 126, 131, 132, 130,
  129, 127, 121, 116, 112, 104, 98, 93, 86, 81, 79, 78, 79, 83, 88, 92, 98, 104, 110, 119,
  128, 137, 144, 157, 172, 177, 187, 197, 200, 200, 206, 205, 201, 202, 197, 182, 169, 157, 140, 127,
  120, 112, 105, 102, 97, 91, 89, 90, 91, 94, 101, 106, 109, 114, 119, 122, 125, 130, 131, 130,
  129, 127, 122, 117, 112, 104, 97, 91, 83, 78, 77, 77, 79, 83, 87, 90, 95, 101, 108, 115,
  120, 125, 138, 158, 166, 178, 189, 193, 194, 203, 208, 210, 218, 219, 208, 194, 179, 157, 139, 130,
  121, 113, 109, 103, 90, 83, 81, 80, 86, 99, 111, 118, 123, 125, 127, 131, 136, 137, 138, 130,
  120, 103, 93, 87, 87, 85, 80, 73, 62, 59, 64, 72, 84, 97, 104, 103, 102, 103, 104, 110,
  137, 177, 197, 216, 230, 227, 215, 221, 221, 213, 210, 199, 169, 136, 119, 98, 88, 94, 96, 90,
  94, 103, 109, 123, 143, 150, 150, 150, 145, 135, 135, 138, 133, 129, 126, 119, 113, 117, 120, 114,
  111, 103, 94, 88, 90, 86, 79, 73, 61, 53, 55, 66, 76, 86, 94, 92, 93, 101, 108, 115,
  133, 173, 189, 206, 225, 226, 219, 222, 230, 212, 204, 191, 167, 142, 134, 123, 105, 105, 99, 96,
  99, 119, 128, 136, 145, 141, 138, 137, 143, 139, 135, 128, 116, 108, 112, 120, 120, 120, 114, 105,
  101, 104, 107, 103, 96, 83, 69, 64, 64, 67, 68, 69, 70, 74, 84, 92, 102, 103, 99, 96,
  137, 185, 206, 229, 230, 222, 213, 239, 230, 212, 194, 166, 142, 133, 138, 111, 101, 89, 92, 102,
  130, 147, 141, 143, 140, 149, 154, 160, 147, 123, 111, 107, 113, 114, 115, 105, 101, 106, 115, 118,
  117, 111, 99, 93, 91, 85, 74, 65, 57, 53, 58, 68, 73, 77, 80, 87, 93, 96, 98, 136,
  180, 200, 227, 236, 232, 219, 241, 232, 211, 195, 172, 150, 136, 136, 107, 94, 90, 100, 109, 131,
  144, 140, 146, 154, 167, 163, 158, 140, 124, 116, 118, 114, 106, 102, 97, 99, 105, 114, 109, 105,
  104, 102, 95, 91, 81, 66, 59, 58, 56, 58, 65, 70, 75, 83, 97, 100, 94, 97, 142, 191,
  211, 226, 229, 229, 225, 249, 236, 204, 188, 173, 157, 144, 133, 95, 84, 90, 106, 113, 126, 133,
  132, 152, 167, 174, 164, 154, 144, 134, 130, 118, 106, 96, 97, 99, 102, 103, 99, 99, 101, 108,
  106, 96, 86, 76, 70, 66, 61, 55, 55, 61, 69, 74, 81, 92, 100, 96, 107, 165, 201, 209,
  227, 236, 234, 234, 251, 220, 191, 183, 175, 150, 134, 116, 84, 87, 101, 112, 109, 122, 133, 142,
  162, 173, 168, 155, 159, 154, 140, 126, 111, 101, 100, 104, 98, 91, 94, 99, 102, 103, 103, 94,
  90, 90, 82, 72, 65, 62, 60, 64, 68, 70, 70, 82, 95, 98, 91, 118, 181, 195, 205, 226,
  235, 233, 246, 247, 208, 195, 189, 179, 145, 128, 102, 87, 100, 104, 99, 96, 122, 138, 151, 154,
  158, 158, 161, 171, 154, 133, 119, 118, 117, 108, 99, 89, 92, 99, 102, 93, 91, 94, 92, 91,
  84, 75, 68, 73, 73, 70, 70, 73, 74, 80, 94, 92, 84, 87, 137, 182, 184, 198, 218, 243,
  236, 252, 230, 209, 213, 210, 180, 139, 128, 107, 107, 99, 91, 79, 100, 126, 125, 128, 137, 156,
  166, 170, 162, 143, 142, 137, 133, 110, 102, 101, 100, 96, 87, 88, 86, 97, 92, 88, 84, 86,
  82, 77, 79, 74, 78, 78, 80, 77, 84, 92, 86, 78, 93, 151, 158, 159, 187, 216, 230, 227,
  243, 222, 229, 226, 213, 173, 162, 152, 127, 112, 96, 97, 93, 103, 102, 104, 119, 137, 145, 144,
  161, 159, 152, 145, 140, 134, 121, 118, 106, 99, 97, 92, 87, 86, 90, 85, 87, 86, 86, 83,
  84, 84, 83, 86, 86, 89, 86, 91, 88, 79, 65, 83, 135, 128, 142, 187, 213, 200, 214, 236,
  227, 237, 232, 221, 191, 195, 165, 140, 127, 119, 103, 94, 101, 94, 100, 106, 118, 126, 138, 153,
  144, 143, 152, 145, 139, 126, 131, 118, 110, 101, 97, 89, 89, 90, 81, 87, 85, 85, 81, 89,
  86, 87, 89, 91, 89, 89, 92, 84, 69, 62, 88, 116, 103, 138, 178, 194, 176, 213, 221, 225,
  231, 235, 227, 214, 204, 176, 167, 145, 133, 114, 113, 104, 92, 98, 106, 107, 112, 130, 139, 134,
  142, 143, 147, 141, 134, 134, 127, 116, 106, 106, 93, 91, 89, 86, 78, 82, 81, 80, 83, 88,
  87, 89, 91, 90, 91, 93, 92, 73, 68, 102, 102, 90, 133, 161, 159, 165, 206, 202, 209, 222,
  232, 224, 222, 214, 199, 188, 164, 153, 141, 130, 114, 108, 106, 106, 107, 110, 118, 115, 121, 130,
  132, 138, 135, 131, 137, 127, 115, 117, 109, 98, 96, 95, 84, 82, 82, 80, 79, 83, 84, 88,
  90, 90, 93, 98, 98, 97, 83, 79, 106, 87, 89, 131, 140, 139, 158, 185, 177, 198, 211, 222,
  217, 222, 214, 211, 198, 180, 168, 159, 146, 131, 126, 114, 110, 110, 113, 113, 114, 114, 129, 130,
  119, 129, 132, 126, 121, 124, 114, 110, 104, 104, 96, 91, 88, 88, 84, 83, 86, 86, 89, 92,
  92, 94, 100, 100, 96, 88, 81, 98, 94, 83, 111, 121, 127, 138, 165, 160, 179, 191, 205, 210,
  216, 213, 213, 206, 196, 186, 176, 165, 152, 142, 133, 127, 120, 122, 119, 119, 117, 110, 126, 123,
  115, 129, 128, 116, 122, 119, 111, 107, 104, 102, 96, 92, 92, 86, 85, 86, 83, 86, 89, 92,
  95, 98, 99, 98, 95, 87, 81, 100, 79, 101, 119, 120, 121, 142, 147, 153, 172, 184, 196, 202,
  210, 206, 207, 200, 194, 187, 180, 169, 161, 150, 144, 134, 126, 130, 122, 117, 125, 126, 120, 126,
  121, 123, 121, 118, 115, 116, 109, 109, 104, 102, 95, 95, 90, 88, 88, 87, 87, 90, 91, 92,
  95, 99, 101, 100, 98, 94, 90, 99, 88, 103, 111, 113, 118, 132, 135, 145, 158, 171, 179, 187,
  195, 197, 199, 198, 193, 190, 183, 177, 170, 162, 154, 147, 141, 139, 131, 131, 131, 125, 129, 126,
  119, 124, 118, 117, 115, 113, 110, 108, 104, 102, 97, 96, 91, 90, 89, 89, 89, 88, 91, 92,
  94, 98, 103, 102, 103, 103, 101, 101, 101, 101, 106, 109, 116, 122, 127, 135, 143, 151, 162, 170,
  177, 184, 188, 188, 189, 185, 183, 179, 175, 169, 164, 160, 154, 149, 147, 145, 139, 131, 136, 129,
  127, 123, 121, 117, 116, 114, 111, 107, 103, 102, 97, 98, 93, 93, 92, 90, 91, 93, 93, 94,
  95, 97, 98, 103, 104, 104, 106, 105, 106, 108, 104, 113, 114, 117, 121, 127, 130, 139, 144, 153,
  157, 163, 170, 173, 174, 177, 177, 178, 176, 174, 171, 166, 163, 159, 153, 150, 148, 145, 141, 139,
  131, 128, 126, 124, 119, 120, 114, 113, 107, 107, 103, 102, 99, 101, 96, 98, 97, 98, 95, 97,
  97, 97, 100, 103, 103, 105, 109, 108, 108, 107, 110, 112, 112, 118, 117, 119, 123, 125, 130, 133,
  138, 144, 146, 153, 156, 159, 163, 165, 164, 169, 165, 167, 165, 163, 161, 159, 157, 155, 149, 150,
  144, 142, 138, 134, 132, 129, 124, 125, 116, 116, 113, 109, 107, 107, 103, 104, 102, 105, 99, 101,
  101, 99, 100, 105, 99, 105, 104, 106, 108, 110, 113, 115, 113, 119, 119, 121, 124, 124, 128, 128,
  130, 131, 133, 137, 138, 142, 142, 147, 146, 150, 149, 151, 151, 153, 153, 152, 153, 153, 151, 151,
  148, 147, 144, 143, 141, 138, 136, 133, 129, 127, 123, 121, 119, 116, 115, 114, 110, 113, 108, 108,
  108, 108, 106, 110, 107, 110, 107, 110, 109, 112, 111, 114, 115, 118, 118, 121, 122, 123, 126, 129,
  129, 132, 133, 135, 136, 136, 138, 138, 138, 138, 139, 138, 138, 138, 138, 136, 137, 136, 138, 135,
  138, 137, 136, 135, 136, 136, 136, 135, 136, 134, 133, 134, 130, 129, 129, 126, 125, 122, 123, 120,
  121, 122, 119, 120, 118, 117, 118, 116, 117, 118, 115, 118, 117, 119, 119, 118, 120, 119, 121, 124,
  124, 126, 126, 129, 130, 130, 132, 133, 133, 135, 132, 135, 133, 134, 133, 133, 134, 133, 134, 133,
  132, 131, 131, 129, 132, 129, 131, 129, 131, 130, 130, 130, 130, 127, 130, 128, 128, 128, 127, 127,
  126, 127, 125, 124, 125, 124, 123, 124, 124, 123, 124, 124, 123, 124, 124, 124, 125, 123, 125, 122,
  126, 123, 126, 125, 126, 127, 127, 128, 129, 129, 129, 131, 129, 130, 129, 131, 130, 131, 131, 131,
  131, 131, 131, 131, 131, 130, 130, 130, 129, 130, 128, 128, 128, 127, 128, 127, 128, 128, 127, 128,
  125, 126, 125, 125, 126, 125, 124, 126, 124, 125, 125, 125, 125, 125, 126, 125, 125, 125, 125, 126,
  127, 126, 127, 126, 127, 127, 128, 128, 129, 128, 129, 129, 129, 129, 130, 130, 129, 130, 129, 129,
  129, 128, 130, 129, 130, 130, 130, 130, 130, 129, 130, 129, 130, 129, 129, 128, 127, 126, 126, 125,
  126, 125, 126, 125, 125, 126, 124, 125, 125, 125, 125, 125, 125, 125, 124, 125, 125, 125, 125, 125,
  126, 127, 126, 128, 127, 128, 128, 128, 128, 129, 129, 130, 130, 131, 130, 131, 131, 131, 131, 132,
  131, 131, 131, 130, 130, 129, 130, 130, 129, 129, 129, 129, 128, 128, 128, 127, 127, 127, 126, 126,
  126, 126, 125, 125, 124, 124, 123, 123, 123, 123, 124, 124, 124, 124, 125, 125, 125, 125, 126, 126,
  126, 126, 126, 127, 127, 128, 128, 129, 129, 129, 129, 129, 130, 130, 130, 130, 130, 130, 131, 130,
  130, 130, 131, 131, 131, 131, 131, 131, 131, 131, 130, 130, 129, 129, 128, 128, 127, 127, 127, 126,
  126, 126, 126, 125, 125, 125, 124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125,
  125, 126, 126, 126, 127, 127, 127, 127, 128, 128, 129, 129, 129, 130, 130, 130, 130, 130, 130, 131,
  130, 130, 131, 130, 130, 130, 130, 130, 129, 129, 129, 129, 129, 128, 128, 128, 127, 127, 127, 126,
  126, 126, 126, 126, 126, 126, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126,
  126, 126, 127, 127, 127, 128, 128, 128, 128, 128, 129, 129, 129, 129, 129, 129, 129, 129, 129, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128
};

#endif

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_muoi)
const uint8_t soDemData_muoi_0[] PROGMEM = {
  128, 127, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 127, 127, 127, 127,
  127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 128, 128, 128, 128, 128, 128, 128, 128, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
  129, 129, 129, 129, 128, 128, 128, 128, 127, 127, 127, 127, 126, 126, 125, 125, 125, 124, 124, 124,
  123, 123, 123, 123, 123, 122, 122, 122, 123, 123, 123, 124, 124, 125, 125, 126, 127, 128, 129, 131,
  132, 134, 136, 138, 140, 142, 144, 146, 148, 149, 149, 149, 149, 147, 145, 142, 140, 137, 134, 130,
  126, 121, 117, 113, 109, 106, 104, 101, 98, 96, 94, 92, 92, 92, 93, 93, 95, 97, 99, 102,
  106, 110, 114, 119, 124, 129, 135, 141, 148, 153, 157, 163, 171, 177, 182, 187, 187, 185, 185, 182,
  176, 173, 167, 158, 148, 138, 126, 116, 109, 103, 98, 95, 92, 89, 88, 89, 91, 95, 101, 105,
  109, 113, 117, 120, 125, 128, 131, 132, 132, 129, 127, 123, 119, 115, 111, 107, 103, 99, 96, 95,
  96, 98, 101, 105, 109, 113, 119, 124, 129, 136, 143, 148, 153, 163, 173, 176, 185, 190, 188, 188,
  190, 186, 182, 181, 172, 159, 148, 136, 123, 116, 111, 103, 98, 95, 90, 86, 87, 89, 92, 98,
  103, 106, 110, 114, 119, 123, 128, 131, 131, 130, 127, 123, 118, 114, 109, 103, 98, 93, 89, 87,
  87, 88, 92, 96, 101, 106, 113, 119, 125, 133, 141, 149, 155, 166, 179, 183, 192, 199, 199, 198,
  200, 198, 192, 191, 183, 168, 155, 143, 127, 118, 112, 104, 97, 94, 89, 84, 84, 86, 88, 93,
  99, 102, 106, 112, 116, 120, 126, 129, 130, 130, 127, 123, 119, 114, 109, 104, 98, 93, 87, 84,
  82, 83, 85, 90, 94, 99, 106, 113, 119, 127, 135, 143, 150, 159, 172, 181, 188, 198, 203, 202,
  204, 206, 202, 200, 198, 188, 174, 162, 147, 132, 123, 116, 106, 101, 96, 89, 84, 83, 82, 84,
  88, 92, 95, 100, 105, 110, 115, 120, 124, 126, 126, 125, 123, 119, 115, 111, 104, 98, 92, 86,
  82, 81, 81, 83, 87, 92, 96, 103, 110, 117, 125, 135, 144, 151, 161, 176, 182, 190, 200, 204,
  203, 207, 209, 205, 204, 201, 189, 175, 164, 149, 136, 127, 119, 110, 104, 98, 91, 87, 85, 85,
  86, 89, 92, 97, 102, 108, 114, 118, 121, 124, 125, 124, 124, 122, 117, 111, 104, 96, 89, 82,
  76, 74, 74, 77, 81, 87, 91, 95, 101, 108, 115, 126, 137, 142, 149, 167, 181, 189, 202, 211,
  209, 208, 213, 210, 205, 207, 200, 184, 169, 155, 136, 122, 114, 106, 100, 97, 95, 92, 92, 94,
  98, 102, 107, 112, 118, 124, 132, 139, 143, 143, 140, 133, 124, 115, 106, 98, 91, 83, 76, 68,
  61, 56, 53, 53, 59, 68, 81, 93, 102, 107, 111, 115, 120, 130, 142, 151, 154, 167, 194, 207,
  225, 242, 245, 233, 226, 217, 199, 193, 187, 170, 144, 123, 96, 72, 65, 68, 77, 91, 106, 112,
  116, 123, 131, 142, 153, 161, 159, 152, 142, 131, 123, 121, 123, 120, 112, 101, 88, 79, 77, 82,
  85, 87, 84, 76, 65, 61, 63, 67, 77, 88, 94, 96, 99, 102, 105, 113, 124, 129, 130, 139,
  170, 193, 217, 244, 250, 241, 226, 224, 212, 212, 212, 196, 166, 133, 106, 81, 81, 86, 90, 90,
  92, 92, 95, 116, 138, 157, 165, 163, 150, 136, 133, 134, 137, 135, 127, 110, 91, 84, 84, 90,
  96, 97, 89, 79, 75, 73, 75, 78, 78, 71, 65, 66, 72, 84, 98, 109, 113, 112, 116, 120,
  126, 135, 156, 191, 204, 224, 235, 236, 227, 231, 231, 219, 214, 196, 173, 144, 130, 112, 99, 95,
  86, 82, 81, 95, 107, 124, 139, 146, 147, 146, 150, 148, 148, 145, 135, 121, 107, 101, 97, 98,
  98, 93, 84, 78, 79, 82, 88, 93, 86, 76, 66, 62, 62, 73, 83, 86, 88, 90, 96, 104,
  116, 127, 128, 124, 131, 166, 192, 221, 243, 240, 229, 223, 233, 227, 228, 214, 185, 155, 136, 126,
  111, 107, 90, 81, 73, 86, 105, 121, 138, 140, 143, 143, 152, 157, 155, 147, 133, 119, 109, 108,
  104, 99, 92, 83, 77, 77, 84, 89, 91, 90, 85, 78, 75, 75, 75, 76, 78, 78, 80, 86,
  95, 104, 109, 118, 120, 118, 117, 142, 182, 201, 225, 232, 230, 222, 239, 240, 232, 226, 201, 179,
  156, 150, 128, 112, 93, 79, 76, 83, 101, 109, 118, 122, 131, 140, 153, 163, 157, 148, 136, 128,
  119, 116, 109, 99, 89, 84, 81, 80, 82, 83, 83, 84, 87, 84, 81, 76, 73, 73, 77, 81,
  83, 87, 91, 95, 102, 111, 122, 123, 119, 122, 161, 191, 212, 231, 230, 225, 224, 247, 243, 235,
  217, 195, 175, 164, 154, 123, 101, 80, 76, 75, 88, 96, 97, 105, 115, 135, 147, 156, 154, 148,
  142, 142, 139, 129, 116, 102, 92, 88, 87, 83, 77, 74, 75, 80, 85, 88, 83, 78, 75, 78,
  81, 85, 87, 87, 90, 94, 104, 108, 117, 123, 124, 119, 129, 174, 195, 214, 226, 222, 222, 234,
  252, 241, 230, 213, 196, 177, 167, 145, 111, 90, 72, 74, 73, 81, 82, 82, 97, 115, 137, 149,
  155, 153, 150, 150, 151, 147, 131, 120, 106, 100, 95, 89, 79, 70, 70, 74, 81, 83, 83, 80,
  80, 82, 85, 87, 87, 90, 93, 98, 102, 106, 110, 113, 126, 132, 126, 122, 152, 185, 204, 223,
  227, 225, 220, 245, 245, 229, 218, 200, 184, 169, 156, 119, 92, 77, 74, 72, 71, 72, 69, 86,
  105, 127, 137, 140, 149, 150, 155, 156, 150, 137, 125, 119, 112, 107, 96, 85, 74, 73, 77, 79,
  82, 81, 81, 83, 87, 87, 87, 88, 90, 96, 101, 105, 104, 107, 113, 119, 132, 134, 120, 121,
  164, 191, 204, 217, 218, 221, 225, 251, 239, 221, 210, 201, 185, 170, 149, 111, 90, 81, 82, 69,
  65, 64, 65, 87, 106, 120, 123, 132, 147, 154, 155, 151, 145, 137, 135, 130, 118, 108, 97, 88,
  81, 80, 78, 75, 78, 79, 80, 83, 85, 83, 86, 91, 96, 100, 105, 106, 107, 113, 118, 124,
  133, 133, 119, 124, 172, 191, 199, 210, 213, 221, 230, 248, 230, 215, 209, 206, 187, 167, 141, 109,
  97, 89, 83, 62, 59, 64, 71, 88, 99, 106, 114, 134, 149, 152, 146, 144, 147, 145, 142, 129,
  116, 109, 105, 96, 83, 78, 76, 77, 82, 81, 80, 82, 85, 87, 91, 94, 96, 101, 107, 109,
  110, 114, 118, 121, 133, 136, 123, 120, 162, 192, 193, 198, 209, 224, 223, 242, 226, 208, 213, 214,
  195, 164, 143, 119, 111, 101, 84, 61, 61, 71, 74, 80, 83, 96, 112, 129, 138, 138, 137, 145,
  152, 146, 136, 129, 126, 121, 112, 101, 89, 88, 89, 83, 81, 81, 82, 85, 86, 84, 86, 92,
  97, 100, 104, 108, 111, 114, 117, 118, 128, 137, 134, 118, 132, 186, 187, 179, 194, 213, 222, 228,
  227, 211, 216, 221, 209, 173, 160, 148, 131, 112, 88, 78, 73, 75, 70, 67, 74, 92, 105, 110,
  120, 129, 137, 141, 141, 142, 140, 140, 134, 125, 118, 111, 103, 97, 93, 88, 87, 87, 85, 83,
  85, 87, 86, 88, 93, 95, 102, 107, 110, 111, 117, 119, 122, 130, 135, 128, 115, 140, 186, 170,
  165, 200, 222, 205, 207, 220, 218, 219, 211, 196, 175, 174, 152, 126, 113, 104, 87, 75, 74, 72,
  73, 77, 87, 96, 106, 118, 122, 129, 137, 142, 139, 139, 142, 137, 131, 125, 120, 110, 103, 98,
  93, 91, 88, 84, 83, 85, 84, 82, 87, 91, 95, 99, 107, 111, 113, 117, 121, 122, 128, 135,
  131, 119, 130, 175, 163, 153, 195, 217, 196, 191, 225, 220, 209, 209, 214, 189, 178, 162, 141, 128,
  111, 95, 86, 85, 74, 70, 79, 85, 86, 94, 109, 113, 115, 124, 131, 133, 135, 139, 135, 132,
  129, 125, 118, 112, 107, 103, 100, 93, 92, 92, 87, 88, 90, 89, 90, 94, 99, 103, 107, 111,
  116, 118, 122, 124, 128, 135, 128, 117, 138, 168, 143, 157, 198, 200, 174, 201, 217, 199, 204, 215,
  208, 187, 183, 167, 154, 136, 121, 107, 105, 90, 80, 83, 84, 80, 85, 96, 101, 102, 108, 118,
  122, 123, 128, 132, 130, 127, 127, 124, 116, 113, 111, 106, 102, 98, 98, 95, 94, 93, 95, 94,
  96, 100, 103, 107, 111, 114, 118, 120, 121, 124, 128, 131, 130, 123, 131, 154, 143, 148, 180, 184,
  174, 190, 205, 194, 198, 207, 205, 191, 186, 175, 165, 148, 133, 122, 114, 100, 92, 90, 85, 81,
  86, 90, 93, 95, 102, 112, 111, 115, 124, 127, 123, 125, 128, 123, 118, 120, 115, 109, 107, 104,
  101, 99, 98, 98, 98, 99, 101, 103, 105, 109, 112, 115, 119, 121, 124, 125, 129, 130, 130, 127,
  125, 131, 142, 139, 155, 168, 170, 172, 187, 187, 190, 197, 199, 196, 192, 184, 175, 165, 151, 139,
  129, 117, 107, 100, 94, 90, 87, 87, 91, 91, 93, 100, 107, 106, 113, 116, 121, 118, 122, 123,
  120, 116, 119, 113, 110, 108, 108, 104, 104, 104, 103, 103, 105, 106, 107, 110, 113, 116, 119, 121,
  124, 126, 127, 129, 132, 133, 130, 130, 136, 140, 138, 152, 160, 162, 167, 177, 178, 182, 187, 188,
  188, 185, 179, 172, 163, 152, 143, 132, 122, 115, 109, 102, 99, 97, 96, 95, 96, 101, 102, 105,
  109, 110, 111, 114, 114, 116, 114, 113, 112, 109, 109, 106, 106, 105, 103, 105, 102, 106, 107, 108,
  110, 112, 115, 118, 120, 127, 126, 127, 128, 132, 129, 133, 136, 133, 135, 137, 139, 143, 148, 155,
  159, 164, 167, 171, 173, 176, 177, 177, 175, 171, 166, 159, 150, 143, 136, 127, 123, 117, 111, 108,
  106, 104, 104, 105, 108, 108, 110, 108, 112, 110, 109, 110, 113, 108, 109, 109, 111, 103, 108, 105,
  104, 106, 109, 108, 111, 109, 115, 113, 117, 118, 121, 118, 123, 123, 124, 127, 131, 128, 132, 132,
  132, 131, 138, 135, 141, 142, 149, 149, 155, 156, 159, 160, 163, 164, 166, 167, 165, 159, 157, 150,
  144, 140, 136, 130, 128, 123, 121, 117, 118, 115, 116, 112, 118, 112, 113, 113, 114, 109, 112, 109,
  109, 107, 109, 107, 106, 109, 112, 108, 112, 113, 114, 115, 118, 117, 120, 120, 121, 121, 123, 121,
  123, 125, 127, 127, 128, 131, 130, 132, 132, 134, 133, 133, 134, 135, 134, 136, 137, 139, 140, 143,
  144, 146, 147, 148, 150, 150, 150, 149, 148, 146, 144, 141, 139, 137, 134, 131, 128, 128, 125, 124,
  123, 119, 119, 117, 115, 115, 115, 115, 115, 113, 115, 112, 113, 115, 115, 117, 117, 118, 119, 120,
  119, 120, 122, 123, 122, 125, 124, 124, 125, 124, 124, 126, 126, 126, 127, 129, 127, 129, 130, 128,
  130, 130, 129, 130, 128, 129, 127, 128, 129, 130, 132, 133, 133, 135, 134, 135, 136, 137, 136, 139,
  137, 137, 136, 135, 135, 134, 135, 135, 134, 133, 133, 131, 130, 129, 128, 128, 126, 126, 125, 123,
  122, 122, 122, 121, 120, 121, 119, 119, 121, 120, 120, 122, 121, 123, 122, 123, 124, 123, 125, 126,
  126, 127, 127, 127, 128, 126, 128, 128, 128, 127, 127, 127, 127, 126, 127, 126, 126, 127, 127, 127,
  128, 128, 128, 129, 128, 130, 129, 130, 129, 130, 129, 130, 129, 130, 130, 131, 132, 131, 133, 132,
  132, 132, 131, 132, 131, 131, 131, 130, 128, 128, 128, 127, 127, 127, 127, 126, 125, 126, 125, 126,
  125, 127, 126, 126, 126, 125, 126, 126, 126, 126, 127, 126, 126, 126, 126, 126, 127, 127, 127, 128,
  128, 127, 126, 127, 127, 126, 127, 127, 126, 126, 126, 126, 124, 125, 126, 126, 126, 126, 127, 127,
  126, 127, 128, 129, 128, 129, 129, 129, 129, 129, 129, 129, 130, 129, 129, 130, 129, 129, 130, 129,
  129, 129, 129, 129, 128, 128, 129, 127, 127, 128, 127, 127, 128, 127, 128, 128, 127, 128, 127, 127,
  127, 127, 126, 127, 127, 127, 127, 127, 128, 127, 127, 127, 127, 126, 127, 127, 127, 126, 127, 126,
  127, 127, 127, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 129, 129, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 128
};

#endif

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_chin)
const uint8_t soDemData_chin_0[] PROGMEM = {
  128, 127, 127, 127, 127, 127, 127, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 128, 127, 128, 128, 128, 128, 128, 127,
  128, 127, 128, 127, 127, 127, 127, 128, 128, 127, 127, 127, 127, 128, 128, 128, 128, 127, 127, 127,
  127, 127, 127, 127, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 127,
  127, 128, 128, 127, 127, 127, 127, 127, 128, 127, 128, 128, 128, 128, 127, 127, 127, 127, 127, 127,
  127, 127, 128, 127, 128, 127, 127, 127, 127, 127, 128, 127, 128, 128, 127, 128, 129, 125, 127, 127,
  127, 128, 125, 129, 126, 128, 127, 125, 128, 126, 128, 128, 129, 128, 129, 126, 128, 128, 128, 130,
  132, 130, 128, 125, 127, 126, 129, 128, 126, 127, 125, 124, 125, 128, 130, 131, 124, 126, 129, 128,
  126, 128, 129, 125, 127, 129, 128, 125, 124, 128, 128, 130, 131, 124, 125, 136, 130, 128, 132, 126,
  124, 125, 126, 129, 130, 128, 132, 131, 127, 129, 127, 123, 127, 129, 132, 132, 126, 125, 130, 127,
  124, 123, 128, 130, 126, 125, 130, 131, 135, 128, 129, 130, 127, 132, 129, 121, 125, 127, 127, 127,
  129, 131, 128, 124, 127, 130, 129, 129, 128, 124, 128, 122, 127, 131, 125, 118, 132, 133, 124, 131,
  128, 128, 124, 126, 131, 129, 126, 129, 127, 121, 131, 135, 124, 125, 128, 122, 117, 122, 128, 122,
  124, 126, 128, 127, 125, 123, 126, 129, 128, 125, 128, 135, 131, 118, 127, 137, 126, 134, 121, 126,
  124, 126, 132, 130, 129, 132, 123, 127, 128, 135, 125, 126, 129, 129, 129, 124, 130, 125, 133, 129,
  128, 130, 131, 127, 130, 123, 120, 128, 128, 119, 127, 133, 121, 134, 126, 132, 122, 128, 122, 131,
  129, 126, 123, 131, 129, 129, 132, 128, 129, 130, 131, 126, 128, 129, 125, 141, 125, 131, 122, 126,
  124, 130, 125, 125, 131, 129, 123, 135, 125, 129, 125, 123, 132, 129, 131, 131, 132, 125, 127, 126,
  126, 124, 128, 125, 127, 134, 133, 131, 132, 126, 128, 123, 130, 123, 131, 119, 131, 127, 123, 127,
  124, 131, 125, 136, 119, 129, 130, 136, 124, 133, 126, 135, 117, 134, 127, 142, 122, 132, 126, 127,
  129, 128, 132, 131, 133, 127, 126, 129, 133, 124, 132, 125, 139, 123, 139, 121, 133, 122, 125, 135,
  122, 128, 113, 127, 122, 131, 121, 124, 125, 125, 118, 119, 114, 120, 118, 113, 123, 110, 122, 111,
  128, 119, 127, 123, 142, 136, 147, 144, 153, 156, 162, 158, 165, 166, 162, 160, 159, 153, 147, 138,
  134, 122, 118, 111, 111, 100, 99, 99, 94, 94, 98, 97, 90, 100, 92, 96, 100, 96, 103, 100,
  101, 107, 99, 108, 111, 118, 132, 117, 156, 139, 170, 149, 179, 174, 186, 180, 196, 186, 180, 179,
  173, 170, 149, 155, 139, 133, 121, 120, 109, 110, 99, 109, 94, 101, 98, 101, 103, 99, 107, 110,
  106, 105, 109, 107, 112, 104, 104, 104, 100, 96, 92, 94, 108, 85, 96, 100, 93, 137, 80, 151,
  129, 173, 152, 184, 191, 195, 206, 218, 215, 209, 208, 191, 195, 156, 167, 135, 134, 101, 111, 84,
  91, 69, 94, 72, 87, 76, 104, 94, 111, 112, 127, 124, 134, 134, 129, 128, 123, 121, 111, 106,
  99, 90, 82, 84, 76, 78, 64, 77, 84, 63, 137, 76, 148, 157, 164, 177, 183, 216, 210, 231,
  226, 239, 214, 222, 191, 205, 150, 161, 127, 124, 95, 93, 75, 79, 59, 74, 70, 77, 83, 106,
  101, 113, 124, 135, 138, 143, 144, 135, 132, 125, 119, 107, 99, 93, 80, 72, 74, 63, 66, 72,
  66, 86, 70, 108, 125, 113, 183, 158, 203, 187, 230, 223, 236, 231, 252, 219, 224, 196, 191, 165,
  137, 127, 109, 89, 74, 71, 64, 57, 62, 73, 69, 85, 91, 113, 112, 128, 135, 142, 137, 148,
  136, 133, 124, 117, 109, 98, 92, 84, 75, 71, 68, 67, 84, 73, 91, 99, 102, 158, 116, 169,
  176, 195, 196, 220, 229, 227, 228, 235, 227, 205, 201, 169, 166, 125, 124, 101, 90, 68, 72, 61,
  63, 58, 78, 76, 86, 92, 115, 116, 127, 134, 141, 137, 142, 137, 128, 121, 115, 107, 96, 90,
  85, 76, 74, 77, 77, 80, 80, 92, 106, 98, 156, 126, 166, 200, 192, 211, 206, 232, 225, 230,
  221, 225, 193, 194, 158, 161, 119, 113, 96, 85, 70, 67, 60, 70, 59, 76, 85, 86, 102, 115,
  124, 125, 138, 140, 142, 138, 143, 125, 122, 111, 108, 96, 89, 88, 78, 75, 82, 75, 81, 91,
  95, 117, 105, 147, 158, 147, 203, 184, 212, 199, 228, 221, 217, 211, 227, 183, 185, 163, 149, 129,
  104, 102, 85, 70, 69, 68, 65, 70, 79, 93, 89, 109, 115, 128, 130, 142, 142, 142, 136, 137,
  122, 116, 111, 102, 92, 86, 84, 78, 77, 79, 80, 84, 100, 97, 114, 125, 138, 173, 149, 183,
  193, 202, 202, 218, 216, 215, 205, 210, 192, 171, 164, 140, 129, 102, 104, 85, 77, 66, 78, 68,
  79, 81, 101, 98, 111, 121, 131, 132, 137, 144, 135, 132, 132, 124, 111, 107, 99, 94, 84, 89,
  85, 81, 85, 89, 92, 101, 108, 122, 127, 130, 170, 155, 168, 187, 189, 191, 197, 202, 199, 193,
  189, 192, 167, 163, 148, 141, 119, 112, 102, 98, 85, 88, 87, 89, 91, 101, 108, 107, 113, 117,
  123, 121, 126, 124, 125, 115, 116, 112, 104, 102, 104, 100, 100, 103, 103, 105, 106, 110, 113, 117,
  125, 132, 138, 142, 146, 148, 154, 157, 156, 162, 165, 166, 163, 165, 162, 158, 152, 150, 144, 136,
  133, 130, 126, 121, 121, 121, 119, 119, 122, 125, 123, 126, 128, 129, 125, 125, 125, 123, 115, 117,
  113, 114, 111, 111, 112, 105, 105, 102, 102, 104, 105, 109, 112, 113, 110, 112, 112, 109, 109, 112,
  112, 117, 121, 128, 134, 140, 148, 154, 160, 166, 169, 172, 173, 174, 174, 172, 168, 165, 161, 154,
  151, 146, 139, 135, 130, 126, 121, 117, 113, 110, 107, 104, 102, 100, 98, 98, 97, 96, 96, 97,
  98, 100, 102, 103, 107, 108, 109, 112, 111, 109, 107, 108, 114, 112, 117, 124, 128, 131, 137, 145,
  151, 160, 167, 173, 176, 176, 174, 172, 168, 166, 162, 156, 152, 145, 140, 135, 132, 131, 130, 126,
  126, 124, 121, 121, 120, 116, 115, 114, 111, 109, 107, 105, 103, 102, 102, 101, 102, 101, 103, 103,
  101, 99, 96, 93, 89, 88, 94, 96, 100, 108, 114, 117, 128, 139, 147, 162, 173, 180, 186, 190,
  188, 187, 185, 181, 177, 172, 165, 157, 150, 144, 137, 133, 130, 126, 121, 118, 118, 114, 111, 113,
  111, 109, 110, 108, 106, 107, 105, 105, 108, 104, 103, 105, 102, 99, 97, 93, 88, 81, 77, 83,
  87, 87, 100, 105, 107, 121, 131, 141, 161, 173, 179, 189, 193, 190, 190, 190, 184, 180, 177, 168,
  161, 156, 147, 140, 141, 135, 128, 130, 122, 118, 119, 113, 110, 111, 107, 104, 105, 102, 101, 103,
  101, 101, 102, 101, 99, 98, 93, 89, 83, 74, 74, 83, 81, 87, 99, 100, 108, 124, 131, 147,
  168, 175, 184, 194, 194, 193, 195, 189, 188, 185, 176, 167, 165, 156, 148, 146, 143, 137, 134, 129,
  121, 119, 114, 108, 107, 103, 100, 97, 96, 94, 94, 94, 94, 94, 92, 91, 90, 85, 79, 72,
  74, 82, 81, 89, 101, 105, 113, 128, 135, 153, 172, 179, 188, 196, 195, 194, 193, 189, 188, 184,
  176, 168, 165, 158, 152, 149, 145, 140, 137, 129, 120, 116, 109, 103, 100, 95, 93, 90, 87, 85,
  85, 86, 86, 87, 87, 83, 79, 72, 71, 81, 84, 89, 101, 106, 111, 124, 131, 147, 166, 177,
  185, 193, 195, 197, 195, 192, 192, 190, 185, 175, 170, 164, 157, 151, 147, 141, 138, 130, 121, 115,
  107, 101, 96, 93, 91, 87, 83, 81, 79, 78, 78, 77, 74, 70, 65, 67, 80, 78, 87, 98,
  101, 111, 125, 131, 149, 165, 172, 186, 193, 196, 196, 196, 196, 198, 196, 190, 182, 179, 172, 164,
  160, 152, 148, 141, 131, 122, 114, 105, 99, 93, 88, 85, 80, 76, 72, 70, 68, 64, 59, 55,
  57, 68, 68, 77, 89, 93, 102, 116, 124, 143, 159, 169, 180, 186, 191, 194, 195, 197, 200, 198,
  194, 187, 185, 179, 172, 167, 162, 157, 149, 140, 128, 120, 112, 103, 97, 91, 87, 80, 75, 70,
  64, 57, 49, 48, 54, 57, 61, 72, 78, 83, 96, 104, 120, 137, 150, 162, 172, 179, 184, 187,
  192, 197, 199, 198, 193, 191, 186, 181, 176, 174, 169, 162, 154, 144, 135, 126, 116, 110, 103, 98,
  90, 82, 72, 63, 53, 47, 48, 52, 51, 59, 65, 67, 79, 86, 100, 118, 132, 144, 157, 165,
  172, 177, 185, 192, 196, 197, 195, 192, 189, 186, 181, 181, 177, 171, 163, 154, 145, 135, 126, 119,
  112, 105, 97, 87, 75, 63, 52, 48, 53, 48, 53, 59, 59, 67, 75, 84, 100, 116, 129, 142,
  152, 160, 163, 173, 181, 188, 192, 191, 190, 188, 187, 184, 184, 183, 179, 173, 166, 156, 147, 138,
  129, 123, 115, 106, 93, 78, 63, 53, 53, 50, 50, 55, 56, 57, 66, 69, 84, 98, 113, 126,
  137, 146, 152, 160, 169, 179, 184, 188, 186, 187, 187, 185, 186, 185, 185, 181, 174, 166, 156, 148,
  139, 131, 124, 114, 99, 83, 68, 59, 59, 51, 54, 55, 53, 58, 62, 69, 81, 96, 108, 121,
  131, 140, 145, 158, 166, 175, 182, 182, 184, 184, 184, 184, 185, 186, 185, 180, 173, 166, 157, 150,
  142, 133, 125, 110, 95, 79, 68, 67, 57, 59, 59, 55, 57, 60, 65, 76, 88, 98, 110, 120,
  130, 135, 147, 157, 166, 174, 175, 179, 182, 182, 184, 185, 188, 186, 182, 177, 169, 163, 156, 148,
  141, 129, 115, 99, 84, 79, 73, 67, 68, 63, 59, 64, 61, 70, 79, 88, 99, 107, 116, 122,
  131, 142, 152, 159, 166, 167, 171, 174, 175, 179, 181, 183, 181, 177, 172, 166, 160, 154, 146, 136,
  123, 107, 95, 91, 82, 79, 78, 71, 69, 72, 69, 78, 86, 91, 101, 107, 115, 119, 129, 138,
  147, 154, 158, 160, 165, 167, 169, 173, 176, 177, 174, 171, 166, 162, 155, 150, 142, 131, 118, 105,
  95, 92, 83, 83, 81, 75, 77, 75, 79, 85, 93, 99, 106, 113, 118, 123, 132, 142, 148, 154,
  157, 160, 164, 167, 168, 173, 174, 174, 170, 166, 162, 156, 151, 142, 133, 122, 109, 100, 98, 88,
  88, 85, 81, 83, 81, 83, 89, 95, 100, 107, 111, 118, 121, 130, 138, 143, 151, 151, 156, 160,
  161, 166, 168, 170, 170, 167, 164, 158, 153, 147, 138, 129, 117, 108, 102, 98, 93, 91, 89, 86,
  88, 86, 91, 96, 101, 107, 110, 116, 120, 126, 134, 140, 146, 149, 151, 156, 158, 162, 163, 166,
  167, 163, 161, 155, 150, 144, 138, 132, 123, 114, 104, 99, 100, 93, 95, 93, 91, 93, 94, 97,
  101, 108, 111, 116, 121, 125, 128, 135, 142, 145, 150, 152, 154, 158, 159, 160, 161, 160, 158, 153,
  149, 141, 136, 130, 123, 116, 109, 105, 103, 100, 99, 99, 99, 99, 101, 103, 107, 112, 115, 120,
  123, 128, 131, 135, 142, 145, 149, 150, 152, 154, 154, 155, 154, 153, 150, 145, 140, 134, 129, 124,
  118, 112, 108, 105, 103, 102, 101, 103, 104, 103, 108, 109, 112, 117, 120, 126, 128, 132, 136, 139,
  144, 146, 150, 151, 151, 153, 151, 151, 149, 147, 145, 139, 135, 129, 124, 120, 115, 111, 107, 105,
  105, 105, 104, 107, 108, 108, 113, 114, 117, 121, 125, 129, 131, 135, 137, 140, 143, 145, 147, 147,
  146, 148, 146, 144, 144, 140, 137, 133, 128, 125, 121, 118, 115, 113, 111, 110, 109, 109, 110, 112,
  113, 115, 118, 119, 122, 125, 127, 130, 133, 136, 138, 140, 141, 142, 143, 143, 144, 142, 141, 139,
  136, 135, 132, 129, 128, 125, 122, 120, 118, 116, 115, 115, 115, 115, 116, 117, 117, 119, 119, 121,
  123, 126, 128, 131, 133, 133, 135, 136, 137, 138, 138, 139, 137, 137, 135, 134, 133, 130, 130, 128,
  127, 125, 123, 123, 121, 121, 121, 120, 119, 119, 119, 120, 121, 121, 123, 124, 125, 126, 128, 129,
  131, 132, 133, 134, 134, 134, 134, 134, 134, 133, 132, 132, 130, 130, 128, 128, 127, 126, 126, 124,
  124, 124, 123, 123, 123, 123, 123, 123, 124, 124, 125, 126, 126, 127, 128, 128, 129, 129, 129, 130,
  130, 130, 130, 130, 130, 130, 129, 129, 129, 129, 128, 128, 128, 127, 127, 127, 127, 127, 127, 126,
  126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 128, 128, 128, 128, 127, 127, 128,
  128, 127, 127, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 127, 127, 127,
  127, 127, 127, 127, 127, 127, 128, 128, 128, 128, 128, 128, 128, 128, 128, 127, 127, 127, 127, 127,
  127, 127, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 127, 128, 128,
  128, 128, 128, 127, 127, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 127, 128, 127,
  128, 127, 127, 127, 127, 128, 128
};

#endif

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_tam)
const uint8_t soDemData_tam_0[] PROGMEM = {
  128, 127, 127, 127, 128, 128, 127, 127, 127, 127, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 128, 128, 127, 127, 127, 127, 128,
  128, 127, 128, 128, 128, 127, 128, 127, 127, 128, 128, 127, 127, 128, 128, 128, 127, 128, 128, 128,
  128, 127, 128, 128, 128, 127, 128, 128, 127, 128, 128, 127, 127, 127, 128, 128, 127, 128, 128, 127,
  128, 127, 127, 128, 128, 128, 128, 128, 128, 127, 127, 127, 127, 127, 127, 128, 128, 128, 128, 128,
  128, 128, 127, 127, 127, 127, 127, 127, 127, 127, 128, 128, 128, 127, 127, 127, 128, 127, 128, 128,
  128, 128, 127, 127, 128, 128, 128, 128, 128, 128, 128, 127, 128, 127, 128, 126, 127, 127, 128, 130,
  128, 130, 127, 126, 127, 127, 125, 125, 124, 125, 127, 130, 128, 126, 128, 128, 125, 127, 128, 129,
  139, 136, 136, 135, 140, 141, 143, 141, 140, 138, 137, 134, 130, 128, 127, 125, 122, 116, 110, 105,
  98, 95, 97, 85, 66, 52, 82, 135, 152, 163, 165, 168, 168, 134, 102, 92, 117, 122, 132, 134,
  160, 179, 171, 142, 126, 120, 123, 119, 117, 130, 151, 164, 163, 149, 142, 151, 144, 129, 127, 127,
  132, 132, 124, 131, 134, 132, 129, 128, 126, 112, 82, 66, 61, 67, 78, 63, 57, 75, 107, 178,
  202, 197, 161, 132, 108, 92, 80, 92, 139, 173, 193, 185, 166, 151, 125, 105, 96, 99, 126, 155,
  168, 163, 153, 143, 139, 122, 107, 112, 121, 134, 146, 149, 153, 156, 159, 157, 145, 131, 126, 116,
  120, 126, 127, 135, 132, 118, 96, 81, 78, 81, 75, 80, 73, 52, 39, 84, 214, 232, 198, 138,
  84, 96, 104, 84, 117, 150, 186, 202, 180, 136, 111, 101, 107, 121, 133, 152, 175, 166, 140, 113,
  120, 137, 142, 125, 116, 138, 160, 159, 136, 109, 126, 153, 162, 159, 141, 139, 133, 118, 115, 125,
  133, 141, 120, 100, 100, 103, 89, 72, 65, 74, 75, 56, 37, 91, 204, 229, 198, 126, 67, 71,
  101, 108, 128, 157, 192, 208, 183, 125, 91, 89, 111, 138, 154, 158, 162, 149, 135, 119, 119, 127,
  135, 140, 137, 136, 137, 141, 140, 142, 134, 129, 141, 160, 161, 147, 126, 121, 127, 137, 135, 131,
  121, 121, 109, 99, 100, 93, 97, 94, 86, 88, 70, 52, 14, 71, 211, 252, 211, 120, 45, 50,
  102, 132, 150, 171, 183, 184, 154, 106, 93, 112, 139, 157, 151, 138, 139, 144, 137, 128, 130, 146,
  152, 138, 132, 133, 135, 122, 149, 157, 143, 136, 140, 144, 151, 136, 128, 130, 141, 140, 134, 117,
  119, 121, 110, 105, 100, 98, 98, 90, 87, 91, 70, 32, 17, 101, 223, 235, 183, 102, 45, 74,
  109, 125, 147, 168, 182, 171, 138, 107, 109, 125, 140, 147, 146, 143, 147, 146, 137, 131, 136, 146,
  144, 137, 133, 132, 138, 128, 148, 155, 146, 135, 134, 146, 145, 134, 129, 130, 139, 137, 130, 118,
  120, 119, 112, 105, 107, 92, 101, 96, 90, 96, 80, 47, 13, 68, 202, 240, 200, 113, 51, 66,
  111, 131, 145, 160, 169, 172, 147, 111, 106, 124, 146, 156, 145, 135, 140, 146, 144, 134, 134, 143,
  147, 143, 137, 133, 131, 132, 145, 155, 146, 141, 133, 137, 142, 134, 127, 133, 134, 136, 129, 117,
  114, 117, 111, 111, 104, 98, 92, 84, 87, 92, 70, 34, 26, 108, 208, 227, 174, 99, 56, 80,
  111, 135, 152, 164, 173, 166, 138, 114, 114, 131, 148, 151, 141, 140, 148, 148, 143, 138, 136, 142,
  146, 139, 130, 132, 134, 150, 141, 149, 144, 138, 131, 141, 137, 135, 127, 128, 132, 133, 121, 118,
  112, 113, 110, 103, 101, 100, 78, 75, 80, 72, 50, 50, 108, 190, 204, 163, 98, 64, 82, 116,
  139, 156, 161, 163, 159, 141, 124, 123, 131, 142, 149, 145, 142, 143, 146, 149, 146, 142, 140, 139,
  135, 139, 137, 141, 143, 150, 140, 148, 141, 137, 135, 130, 132, 133, 130, 128, 126, 121, 118, 113,
  104, 102, 103, 100, 94, 82, 84, 90, 72, 44, 43, 121, 197, 208, 164, 96, 59, 85, 125, 150,
  159, 158, 155, 154, 140, 131, 134, 135, 140, 141, 138, 144, 153, 152, 143, 130, 134, 150, 154, 143,
  129, 129, 140, 153, 154, 131, 149, 142, 140, 135, 127, 122, 134, 132, 131, 122, 117, 111, 111, 105,
  103, 95, 91, 87, 85, 85, 78, 56, 42, 83, 166, 201, 187, 125, 69, 68, 113, 145, 161, 159,
  153, 155, 153, 137, 128, 127, 136, 149, 146, 138, 142, 152, 154, 145, 138, 141, 146, 144, 135, 130,
  137, 150, 150, 145, 135, 127, 134, 145, 141, 132, 116, 115, 125, 132, 122, 111, 107, 107, 108, 102,
  92, 84, 85, 93, 91, 73, 57, 51, 111, 190, 200, 167, 103, 66, 89, 127, 152, 160, 154, 151,
  155, 153, 139, 133, 132, 139, 144, 142, 143, 152, 153, 147, 137, 137, 146, 152, 141, 131, 130, 134,
  150, 152, 141, 138, 131, 126, 138, 130, 132, 125, 115, 114, 120, 114, 118, 110, 107, 100, 99, 90,
  82, 77, 89, 86, 71, 66, 100, 154, 185, 168, 121, 85, 89, 120, 148, 158, 153, 148, 150, 155,
  151, 145, 135, 132, 135, 140, 144, 154, 154, 145, 136, 138, 146, 153, 140, 132, 126, 136, 143, 149,
  141, 141, 130, 132, 132, 129, 124, 125, 123, 122, 114, 114, 115, 109, 109, 103, 93, 90, 91, 82,
  76, 65, 73, 102, 147, 159, 157, 128, 101, 97, 119, 133, 144, 145, 148, 154, 163, 156, 143, 132,
  130, 136, 144, 147, 149, 146, 145, 142, 144, 149, 148, 135, 132, 130, 138, 144, 148, 134, 130, 130,
  137, 142, 136, 121, 119, 117, 123, 124, 121, 112, 110, 109, 103, 92, 94, 92, 91, 93, 83, 61,
  73, 111, 146, 168, 160, 124, 102, 105, 116, 133, 147, 150, 155, 161, 156, 148, 140, 136, 134, 135,
  140, 148, 155, 152, 141, 137, 144, 150, 144, 134, 125, 124, 142, 148, 141, 136, 128, 126, 129, 130,
  131, 126, 121, 121, 118, 117, 118, 115, 111, 104, 97, 93, 95, 92, 89, 77, 66, 77, 117, 142,
  162, 156, 130, 106, 110, 114, 126, 141, 149, 153, 163, 161, 153, 146, 141, 134, 134, 138, 145, 151,
  151, 149, 149, 145, 141, 135, 130, 125, 128, 133, 139, 137, 132, 129, 127, 130, 132, 127, 119, 117,
  117, 119, 122, 120, 113, 108, 103, 99, 99, 97, 91, 78, 69, 78, 112, 136, 155, 154, 136, 118,
  119, 118, 124, 133, 142, 149, 162, 161, 156, 152, 146, 138, 136, 137, 141, 145, 148, 145, 143, 142,
  139, 133, 128, 122, 124, 131, 137, 134, 129, 125, 123, 124, 126, 125, 122, 123, 123, 124, 124, 121,
  114, 109, 105, 102, 100, 97, 87, 80, 89, 110, 122, 133, 133, 124, 122, 128, 129, 135, 143, 147,
  149, 152, 146, 142, 142, 142, 141, 143, 145, 146, 147, 143, 137, 135, 135, 133, 132, 131, 128, 127,
  130, 129, 127, 126, 126, 126, 129, 129, 128, 126, 125, 125, 129, 128, 126, 123, 118, 114, 111, 105,
  98, 95, 100, 104, 105, 103, 100, 97, 104, 112, 120, 130, 137, 141, 145, 145, 144, 146, 149, 150,
  152, 153, 152, 155, 156, 154, 152, 150, 147, 145, 144, 142, 139, 135, 128, 123, 121, 120, 118, 116,
  112, 111, 112, 115, 118, 118, 115, 112, 108, 107, 105, 103, 100, 98, 101, 108, 107, 106, 104, 105,
  110, 123, 130, 136, 144, 145, 149, 152, 153, 152, 154, 153, 153, 153, 153, 154, 153, 151, 147, 146,
  146, 145, 141, 138, 134, 130, 129, 124, 121, 119, 116, 114, 112, 110, 108, 108, 109, 109, 108, 105,
  103, 100, 97, 93, 96, 103, 105, 105, 106, 106, 109, 121, 129, 134, 142, 145, 148, 153, 156, 156,
  159, 160, 157, 158, 157, 157, 157, 154, 150, 149, 150, 149, 147, 142, 136, 132, 129, 125, 122, 118,
  114, 111, 109, 107, 105, 104, 101, 99, 97, 95, 93, 88, 87, 93, 98, 99, 102, 102, 103, 112,
  119, 126, 137, 142, 146, 151, 156, 157, 162, 164, 164, 164, 164, 163, 163, 160, 158, 157, 157, 156,
  152, 147, 140, 134, 131, 128, 123, 119, 115, 111, 108, 104, 101, 97, 94, 94, 92, 91, 85, 82,
  86, 92, 93, 97, 98, 98, 108, 116, 123, 133, 138, 142, 147, 153, 156, 163, 166, 167, 167, 166,
  167, 167, 167, 163, 161, 161, 157, 153, 148, 142, 135, 130, 124, 121, 117, 113, 107, 102, 97, 95,
  94, 92, 89, 82, 80, 85, 90, 90, 93, 94, 97, 106, 113, 119, 129, 133, 139, 144, 151, 153,
  160, 164, 167, 168, 168, 169, 169, 169, 165, 162, 160, 158, 154, 150, 143, 134, 130, 126, 123, 118,
  111, 104, 98, 95, 94, 91, 84, 78, 78, 87, 86, 89, 89, 90, 95, 104, 109, 118, 127, 130,
  137, 144, 148, 154, 159, 165, 167, 170, 170, 172, 172, 171, 168, 167, 166, 161, 158, 149, 142, 137,
  132, 128, 123, 115, 108, 102, 99, 95, 90, 81, 76, 80, 82, 81, 83, 82, 82, 91, 97, 102,
  114, 118, 125, 131, 138, 142, 151, 158, 165, 169, 170, 172, 173, 176, 175, 174, 174, 170, 166, 158,
  152, 147, 142, 135, 129, 121, 116, 112, 105, 99, 89, 82, 82, 85, 81, 82, 80, 79, 85, 89,
  92, 101, 108, 115, 120, 126, 130, 138, 146, 156, 161, 164, 167, 169, 170, 171, 173, 174, 172, 167,
  161, 155, 150, 145, 138, 133, 126, 120, 116, 110, 102, 92, 86, 87, 87, 84, 84, 84, 84, 88,
  91, 94, 101, 109, 116, 121, 127, 129, 137, 146, 156, 160, 164, 167, 167, 169, 171, 172, 173, 172,
  168, 163, 157, 149, 143, 137, 132, 126, 121, 114, 105, 95, 88, 88, 86, 83, 82, 80, 79, 82,
  84, 86, 94, 101, 109, 115, 121, 123, 131, 142, 151, 157, 161, 165, 166, 171, 174, 176, 177, 176,
  172, 168, 163, 156, 151, 144, 139, 133, 128, 120, 110, 99, 93, 95, 89, 87, 84, 81, 80, 83,
  83, 84, 93, 98, 105, 110, 116, 120, 129, 140, 147, 153, 157, 160, 163, 167, 169, 171, 173, 171,
  168, 163, 158, 153, 148, 143, 136, 132, 124, 115, 104, 98, 101, 94, 91, 88, 85, 84, 87, 86,
  88, 96, 101, 107, 113, 116, 121, 130, 142, 148, 153, 154, 157, 163, 166, 169, 169, 170, 168, 165,
  161, 155, 151, 146, 141, 135, 129, 120, 111, 102, 98, 99, 91, 91, 88, 84, 86, 87, 87, 91,
  98, 104, 108, 115, 117, 124, 133, 143, 147, 152, 155, 157, 163, 165, 166, 167, 167, 166, 162, 157,
  152, 148, 144, 140, 133, 125, 116, 107, 105, 105, 97, 95, 93, 90, 92, 92, 91, 95, 102, 106,
  110, 115, 117, 124, 134, 142, 145, 148, 151, 155, 159, 161, 160, 162, 162, 160, 156, 152, 147, 142,
  139, 133, 128, 121, 113, 105, 103, 103, 97, 96, 94, 93, 95, 96, 95, 99, 106, 111, 114, 120,
  123, 128, 138, 144, 147, 151, 153, 156, 160, 162, 161, 161, 161, 159, 156, 151, 145, 140, 137, 132,
  127, 118, 111, 107, 107, 102, 98, 97, 96, 96, 97, 98, 97, 102, 108, 111, 114, 119, 122, 128,
  137, 140, 142, 145, 148, 152, 156, 156, 155, 156, 156, 153, 150, 145, 140, 137, 134, 130, 124, 117,
  113, 111, 112, 108, 105, 103, 103, 105, 107, 106, 108, 112, 117, 120, 124, 125, 129, 135, 140, 142,
  143, 145, 147, 149, 150, 149, 148, 147, 146, 142, 137, 133, 130, 127, 123, 120, 115, 111, 110, 110,
  108, 107, 105, 105, 108, 110, 110, 113, 116, 120, 125, 127, 130, 134, 138, 143, 145, 146, 147, 148,
  150, 150, 149, 146, 145, 143, 139, 135, 130, 126, 126, 123, 118, 114, 113, 112, 112, 111, 108, 107,
  109, 110, 111, 113, 114, 117, 122, 124, 127, 130, 133, 136, 139, 141, 143, 144, 145, 145, 144, 144,
  143, 141, 139, 136, 133, 130, 128, 125, 122, 120, 118, 116, 115, 114, 113, 113, 114, 115, 115, 116,
  118, 120, 122, 124, 126, 128, 131, 134, 136, 138, 139, 140, 142, 142, 142, 141, 140, 137, 136, 134,
  132, 130, 128, 126, 123, 120, 120, 119, 118, 117, 116, 116, 116, 117, 117, 119, 119, 120, 122, 124,
  125, 127, 129, 131, 133, 135, 136, 138, 139, 140, 140, 140, 138, 137, 136, 135, 132, 130, 128, 126,
  125, 124, 122, 121, 121, 120, 120, 120, 119, 119, 120, 121, 121, 122, 123, 124, 126, 127, 127, 128,
  130, 131, 132, 133, 133, 133, 133, 134, 133, 133, 132, 131, 130, 129, 129, 128, 127, 127, 126, 126,
  126, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 128, 128,
  129, 129, 129, 128, 128, 128, 128, 128, 129, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  127, 127, 126, 127, 127, 127, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  128, 128, 128, 128, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 128, 128, 128, 128, 128, 127,
  127, 127, 127, 127, 126, 126, 126, 126, 126, 127, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 127, 127, 128, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 128
};

#endif

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_bay)
const uint8_t soDemData_bay_0[] PROGMEM = {
  128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 127, 127, 128, 128, 128, 128, 128, 128, 129, 129, 129, 129, 129, 129, 129, 129,
  129, 129, 129, 129, 129, 129, 129, 129, 128, 128, 128, 128, 128, 127, 127, 127, 126, 126, 125, 125,
  124, 124, 123, 123, 122, 122, 121, 121, 121, 122, 122, 123, 124, 125, 126, 127, 129, 130, 132, 133,
  134, 135, 136, 137, 137, 138, 138, 138, 138, 138, 138, 137, 136, 135, 133, 132, 130, 129, 127, 125,
  124, 122, 121, 120, 119, 118, 118, 117, 117, 117, 117, 117, 117, 117, 118, 119, 119, 120, 121, 121,
  122, 123, 123, 124, 125, 127, 128, 130, 132, 134, 135, 136, 138, 139, 139, 140, 139, 139, 138, 138,
  137, 136, 136, 135, 133, 132, 131, 130, 128, 127, 126, 125, 124, 123, 123, 122, 122, 123, 123, 124,
  124, 125, 126, 127, 128, 128, 129, 129, 129, 129, 129, 129, 128, 127, 126, 125, 124, 123, 122, 121,
  120, 119, 119, 118, 118, 118, 117, 116, 116, 117, 119, 120, 122, 124, 126, 127, 130, 132, 135, 137,
  138, 139, 140, 141, 141, 142, 143, 142, 142, 140, 139, 138, 137, 136, 134, 132, 130, 128, 126, 125,
  124, 123, 122, 122, 122, 122, 123, 124, 124, 125, 126, 126, 127, 127, 127, 126, 126, 125, 124, 123,
  121, 120, 119, 118, 117, 116, 115, 115, 115, 115, 115, 115, 115, 116, 118, 121, 123, 125, 128, 130,
  133, 136, 139, 142, 143, 144, 144, 145, 145, 145, 145, 144, 142, 141, 139, 137, 136, 134, 132, 131,
  129, 127, 125, 124, 123, 122, 122, 122, 122, 122, 123, 124, 125, 126, 127, 128, 128, 129, 129, 129,
  129, 128, 127, 126, 125, 123, 121, 119, 117, 115, 114, 112, 111, 111, 110, 110, 109, 110, 110, 111,
  113, 115, 118, 120, 123, 126, 131, 136, 141, 145, 149, 152, 155, 158, 160, 161, 160, 158, 155, 151,
  151, 151, 149, 141, 129, 123, 109, 103, 98, 105, 108, 117, 115, 118, 131, 140, 148, 149, 142, 131,
  127, 125, 128, 131, 130, 124, 117, 109, 103, 101, 99, 96, 96, 95, 96, 103, 107, 110, 115, 114,
  113, 106, 94, 79, 65, 102, 150, 179, 221, 214, 205, 190, 194, 177, 176, 144, 104, 71, 62, 66,
  91, 119, 129, 146, 162, 176, 192, 190, 167, 138, 123, 105, 110, 102, 99, 94, 111, 123, 148, 156,
  150, 139, 139, 144, 154, 153, 128, 115, 97, 95, 100, 109, 110, 116, 113, 106, 103, 104, 105, 109,
  110, 103, 92, 81, 88, 94, 107, 101, 73, 44, 70, 176, 203, 250, 224, 187, 166, 198, 162, 151,
  98, 69, 74, 136, 156, 180, 174, 163, 170, 187, 170, 129, 87, 48, 68, 112, 151, 159, 157, 144,
  150, 161, 142, 113, 86, 68, 79, 118, 146, 170, 172, 165, 142, 130, 103, 93, 88, 96, 113, 126,
  119, 104, 94, 90, 103, 115, 114, 96, 85, 73, 80, 93, 102, 99, 73, 45, 102, 228, 241, 252,
  204, 145, 149, 175, 119, 94, 74, 93, 162, 218, 196, 185, 163, 150, 151, 129, 83, 76, 86, 110,
  149, 167, 162, 163, 151, 134, 114, 98, 75, 91, 107, 120, 139, 154, 163, 176, 159, 130, 122, 105,
  101, 103, 100, 109, 131, 128, 121, 111, 94, 94, 104, 100, 104, 99, 85, 81, 79, 88, 105, 114,
  108, 77, 53, 130, 220, 228, 223, 185, 152, 181, 170, 114, 92, 101, 142, 197, 198, 164, 164, 161,
  157, 138, 96, 77, 110, 126, 129, 131, 133, 153, 169, 141, 111, 94, 96, 112, 115, 99, 108, 132,
  147, 163, 150, 142, 137, 135, 114, 102, 87, 99, 117, 129, 133, 128, 119, 110, 102, 91, 97, 105,
  110, 103, 90, 82, 91, 100, 114, 110, 97, 66, 54, 169, 219, 219, 197, 187, 178, 207, 140, 87,
  95, 136, 161, 177, 152, 153, 191, 180, 143, 111, 94, 109, 131, 111, 104, 122, 152, 161, 148, 115,
  116, 121, 114, 104, 98, 101, 118, 130, 130, 137, 151, 154, 144, 135, 114, 115, 106, 94, 106, 118,
  129, 130, 119, 111, 112, 102, 98, 94, 99, 107, 103, 92, 92, 100, 107, 118, 110, 84, 57, 77,
  217, 189, 199, 188, 214, 206, 196, 101, 104, 139, 143, 127, 130, 138, 184, 185, 151, 132, 136, 135,
  129, 103, 91, 110, 135, 132, 130, 125, 135, 137, 130, 111, 118, 114, 111, 106, 111, 115, 145, 139,
  142, 142, 138, 123, 114, 100, 109, 116, 114, 116, 122, 113, 112, 99, 100, 102, 108, 106, 112, 107,
  99, 97, 100, 109, 114, 98, 76, 72, 140, 200, 169, 196, 231, 221, 200, 153, 128, 143, 127, 99,
  115, 137, 147, 157, 153, 161, 160, 147, 136, 137, 111, 104, 109, 113, 113, 118, 115, 133, 136, 133,
  129, 132, 124, 111, 108, 116, 128, 125, 110, 141, 132, 124, 113, 125, 119, 119, 114, 117, 114, 109,
  100, 101, 100, 101, 104, 110, 117, 117, 112, 115, 113, 106, 116, 114, 88, 74, 63, 179, 150, 153,
  196, 242, 201, 195, 159, 181, 157, 118, 116, 135, 117, 115, 126, 144, 152, 139, 147, 163, 145, 124,
  131, 123, 115, 106, 103, 111, 113, 110, 119, 131, 131, 127, 116, 135, 136, 127, 120, 127, 129, 125,
  114, 112, 111, 113, 119, 119, 120, 123, 121, 113, 105, 101, 98, 97, 101, 104, 109, 110, 114, 115,
  114, 120, 118, 109, 95, 71, 135, 155, 112, 180, 208, 194, 189, 192, 197, 187, 149, 154, 155, 123,
  107, 124, 115, 117, 116, 129, 146, 145, 132, 154, 145, 135, 129, 127, 115, 107, 101, 111, 105, 106,
  116, 122, 120, 126, 139, 134, 136, 133, 132, 127, 115, 113, 112, 109, 112, 114, 115, 119, 116, 116,
  116, 111, 107, 108, 108, 105, 109, 108, 104, 111, 107, 111, 116, 109, 101, 94, 118, 163, 102, 175,
  194, 185, 178, 203, 189, 192, 166, 178, 168, 136, 128, 138, 110, 112, 113, 115, 118, 124, 124, 144,
  134, 139, 146, 138, 127, 127, 116, 118, 106, 108, 106, 103, 105, 116, 122, 121, 128, 135, 138, 128,
  129, 127, 120, 117, 118, 111, 112, 109, 111, 112, 106, 108, 111, 107, 110, 113, 113, 118, 114, 112,
  114, 113, 118, 112, 110, 105, 91, 140, 131, 110, 171, 182, 160, 195, 189, 199, 186, 182, 189, 172,
  142, 153, 137, 113, 118, 110, 107, 110, 108, 118, 122, 120, 136, 136, 133, 133, 133, 134, 119, 119,
  124, 110, 107, 116, 106, 114, 115, 120, 124, 121, 128, 131, 122, 127, 131, 122, 122, 121, 116, 114,
  113, 107, 108, 106, 106, 109, 109, 110, 115, 116, 114, 117, 119, 120, 113, 113, 107, 86, 136, 113,
  113, 160, 156, 147, 180, 168, 189, 182, 187, 194, 179, 167, 174, 152, 139, 135, 122, 116, 110, 106,
  110, 103, 108, 116, 119, 119, 125, 126, 131, 125, 130, 125, 123, 120, 123, 116, 116, 113, 123, 116,
  118, 123, 121, 119, 127, 121, 126, 125, 123, 124, 121, 118, 118, 112, 111, 110, 107, 111, 111, 111,
  113, 115, 112, 116, 116, 122, 116, 117, 114, 100, 137, 111, 126, 144, 145, 146, 172, 161, 181, 175,
  185, 187, 180, 176, 175, 159, 154, 142, 135, 124, 119, 113, 109, 103, 108, 106, 109, 110, 114, 118,
  120, 120, 127, 124, 126, 123, 128, 125, 122, 124, 124, 121, 122, 122, 121, 120, 123, 122, 122, 121,
  122, 121, 120, 118, 117, 115, 115, 113, 112, 114, 114, 115, 116, 115, 116, 115, 116, 121, 113, 115,
  108, 108, 130, 106, 135, 135, 134, 147, 159, 160, 169, 171, 183, 177, 177, 178, 171, 164, 159, 149,
  141, 130, 129, 119, 113, 111, 109, 108, 107, 109, 113, 112, 115, 118, 119, 119, 124, 125, 126, 125,
  129, 125, 126, 125, 124, 122, 123, 122, 122, 121, 122, 118, 119, 118, 118, 118, 118, 117, 117, 117,
  119, 117, 118, 119, 117, 118, 117, 115, 118, 113, 109, 110, 99, 122, 100, 118, 131, 128, 131, 146,
  145, 159, 158, 178, 172, 174, 179, 175, 169, 167, 160, 154, 142, 139, 132, 123, 122, 117, 113, 112,
  109, 111, 109, 111, 113, 114, 113, 118, 118, 121, 122, 124, 124, 126, 127, 127, 126, 125, 127, 124,
  126, 124, 123, 121, 120, 118, 118, 116, 117, 116, 116, 117, 117, 119, 120, 120, 120, 120, 119, 120,
  117, 113, 112, 102, 124, 104, 106, 124, 116, 126, 134, 137, 144, 146, 165, 164, 167, 174, 171, 169,
  168, 166, 160, 154, 150, 144, 133, 133, 126, 124, 117, 116, 113, 111, 112, 112, 111, 111, 115, 116,
  117, 120, 122, 121, 124, 124, 124, 125, 126, 124, 124, 123, 123, 121, 120, 120, 119, 118, 118, 117,
  118, 118, 119, 118, 119, 120, 120, 121, 121, 120, 119, 117, 112, 109, 109, 113, 103, 125, 115, 124,
  122, 134, 135, 144, 152, 158, 159, 168, 166, 168, 166, 165, 162, 157, 153, 149, 141, 137, 133, 128,
  124, 122, 118, 115, 113, 114, 110, 112, 113, 115, 115, 118, 119, 121, 123, 125, 124, 125, 126, 126,
  126, 125, 125, 122, 123, 120, 119, 117, 118, 116, 118, 117, 118, 119, 119, 120, 121, 121, 122, 121,
  118, 115, 111, 112, 117, 105, 122, 108, 119, 116, 130, 129, 137, 144, 151, 151, 162, 161, 165, 162,
  164, 161, 158, 156, 151, 144, 142, 135, 134, 127, 128, 122, 120, 118, 118, 114, 118, 114, 120, 116,
  121, 121, 122, 123, 125, 122, 126, 124, 126, 124, 123, 122, 122, 120, 119, 117, 117, 116, 117, 116,
  118, 119, 119, 120, 121, 121, 123, 120, 118, 117, 111, 114, 113, 108, 119, 109, 118, 116, 125, 127,
  132, 140, 144, 149, 155, 156, 159, 159, 161, 157, 156, 155, 150, 146, 144, 140, 137, 133, 132, 127,
  126, 123, 123, 119, 121, 120, 122, 121, 121, 122, 122, 123, 123, 123, 123, 122, 123, 121, 121, 119,
  119, 117, 117, 115, 115, 114, 116, 116, 117, 118, 119, 121, 121, 121, 116, 117, 111, 117, 105, 119,
  111, 118, 115, 122, 122, 128, 134, 142, 143, 151, 153, 157, 158, 159, 159, 156, 155, 152, 149, 146,
  144, 140, 138, 135, 132, 130, 128, 128, 123, 124, 122, 124, 122, 123, 123, 123, 122, 123, 121, 121,
  120, 118, 119, 116, 116, 114, 113, 113, 113, 114, 115, 114, 117, 117, 118, 120, 120, 118, 117, 114,
  112, 112, 107, 116, 109, 115, 114, 121, 122, 129, 135, 142, 144, 154, 154, 158, 159, 160, 159, 158,
  156, 152, 150, 145, 143, 141, 138, 136, 130, 132, 128, 130, 125, 128, 126, 128, 126, 126, 126, 124,
  122, 122, 120, 118, 116, 115, 113, 112, 112, 111, 111, 111, 112, 112, 114, 115, 116, 117, 115, 114,
  112, 107, 116, 106, 115, 110, 115, 113, 121, 122, 129, 132, 140, 141, 152, 152, 157, 159, 160, 159,
  158, 157, 153, 151, 148, 146, 141, 140, 138, 134, 135, 131, 132, 129, 129, 128, 129, 126, 127, 123,
  124, 121, 121, 118, 117, 114, 113, 112, 112, 111, 111, 111, 111, 112, 113, 113, 115, 114, 112, 111,
  108, 106, 111, 104, 114, 107, 116, 114, 122, 122, 130, 135, 142, 145, 154, 154, 159, 160, 160, 159,
  158, 157, 152, 150, 145, 144, 140, 138, 137, 134, 134, 131, 132, 130, 131, 129, 131, 127, 128, 124,
  125, 122, 120, 117, 116, 113, 112, 109, 110, 108, 108, 109, 109, 108, 109, 106, 105, 105, 102, 104,
  105, 105, 113, 111, 118, 118, 125, 128, 135, 141, 145, 151, 155, 157, 159, 160, 159, 158, 157, 155,
  150, 150, 145, 142, 142, 138, 138, 136, 136, 133, 133, 129, 131, 128, 129, 126, 124, 123, 120, 118,
  117, 113, 113, 109, 109, 108, 105, 106, 105, 104, 105, 104, 101, 102, 101, 100, 106, 103, 113, 113,
  119, 123, 128, 133, 137, 144, 149, 152, 158, 159, 161, 161, 160, 159, 157, 155, 152, 149, 148, 143,
  145, 140, 139, 135, 135, 132, 131, 128, 127, 124, 122, 121, 119, 115, 115, 112, 110, 108, 106, 105,
  105, 104, 105, 104, 104, 102, 101, 101, 103, 100, 109, 106, 116, 118, 123, 126, 131, 135, 140, 145,
  152, 152, 158, 158, 159, 159, 159, 156, 156, 154, 150, 149, 147, 145, 141, 141, 138, 135, 133, 129,
  128, 124, 122, 119, 117, 114, 112, 109, 110, 105, 106, 103, 103, 102, 103, 104, 104, 104, 105, 105,
  105, 108, 110, 114, 118, 121, 129, 129, 134, 138, 143, 145, 149, 153, 155, 156, 158, 157, 158, 155,
  154, 152, 150, 148, 145, 142, 141, 137, 135, 132, 127, 124, 123, 118, 116, 115, 111, 110, 109, 107,
  106, 104, 105, 104, 103, 105, 104, 106, 108, 110, 110, 113, 112, 115, 119, 121, 129, 129, 137, 140,
  141, 145, 146, 149, 151, 153, 155, 155, 156, 154, 153, 151, 149, 146, 143, 141, 137, 135, 133, 131,
  126, 124, 120, 116, 113, 112, 108, 110, 104, 107, 102, 105, 103, 102, 104, 104, 105, 109, 110, 113,
  114, 117, 119, 121, 123, 128, 130, 136, 139, 142, 147, 146, 149, 150, 151, 154, 155, 156, 156, 154,
  154, 150, 149, 145, 142, 139, 135, 133, 131, 125, 123, 118, 115, 113, 109, 108, 107, 106, 105, 102,
  104, 101, 102, 103, 105, 106, 109, 110, 113, 115, 119, 119, 125, 126, 129, 132, 136, 137, 143, 143,
  148, 149, 150, 150, 150, 151, 152, 152, 153, 150, 149, 144, 142, 139, 136, 134, 132, 128, 127, 121,
  119, 115, 112, 111, 108, 108, 106, 106, 107, 104, 106, 106, 107, 109, 112, 113, 115, 119, 117, 123,
  122, 127, 129, 133, 135, 137, 140, 142, 142, 147, 145, 148, 149, 148, 148, 147, 146, 146, 145, 143,
  141, 137, 135, 131, 129, 126, 123, 122, 118, 117, 115, 113, 112, 111, 110, 111, 110, 111, 111, 113,
  113, 115, 115, 117, 117, 120, 120, 123, 126, 127, 131, 132, 135, 135, 137, 139, 140, 141, 142, 143,
  141, 141, 140, 140, 138, 137, 136, 136, 133, 133, 131, 130, 128, 127, 124, 123, 123, 121, 121, 120,
  119, 118, 118, 117, 117, 118, 117, 120, 120, 121, 122, 124, 124, 125, 127, 127, 128, 129, 130, 131,
  132, 132, 133, 133, 134, 134, 135, 135, 134, 135, 135, 134, 133, 133, 131, 130, 130, 128, 127, 126,
  125, 123, 123, 121, 121, 121, 121, 121, 121, 122, 122, 123, 123, 124, 125, 127, 127, 128, 129, 130,
  129, 130, 129, 130, 131, 130, 131, 131, 130, 130, 130, 130, 130, 130, 129, 130, 129, 128, 128, 127,
  127, 127, 127, 126, 126, 126, 125, 125, 125, 125, 125, 126, 126, 127, 126, 127, 127, 126, 127, 127,
  127, 127, 127, 127, 128, 127, 128, 128, 128, 128, 129, 129, 129, 130, 130, 130, 130, 130, 129, 129,
  129, 129, 129, 129, 129, 128, 128, 127, 127, 127, 127, 127, 127, 126, 126, 126, 126, 125, 125, 125,
  125, 125, 125, 126, 125, 126, 126, 126, 126, 127, 127, 127, 128, 128, 128, 128, 128, 128, 129, 129,
  129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 130, 130, 129, 129, 129, 129, 129, 129, 129, 128,
  128, 127, 127, 127, 126, 126, 127, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 126, 127, 127,
  127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128
};

#endif

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_sau)
const uint8_t soDemData_sau_0[] PROGMEM = {
  128, 127, 128, 127, 128, 127, 128, 127, 128, 128, 128, 128, 128, 127, 128, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 127, 128, 128, 128, 127, 128, 128, 127, 128, 127, 128, 127, 127, 127, 127, 127,
  128, 127, 128, 128, 128, 128, 128, 128, 127, 128, 127, 128, 127, 127, 128, 127, 127, 128, 128, 128,
  127, 128, 127, 128, 128, 127, 128, 128, 127, 128, 127, 127, 128, 127, 128, 128, 128, 128, 128, 128,
  127, 128, 127, 128, 128, 128, 128, 128, 128, 127, 128, 127, 128, 127, 128, 128, 127, 128, 127, 127,
  128, 127, 127, 127, 128, 128, 127, 127, 128, 128, 127, 128, 128, 127, 128, 127, 128, 127, 128, 127,
  128, 128, 127, 129, 127, 128, 127, 129, 128, 127, 128, 126, 129, 128, 128, 125, 127, 128, 128, 125,
  129, 127, 127, 128, 128, 129, 127, 127, 127, 128, 127, 128, 125, 129, 128, 125, 128, 129, 129, 129,
  123, 130, 127, 128, 126, 129, 126, 130, 127, 128, 128, 126, 126, 128, 128, 125, 129, 128, 127, 128,
  131, 124, 128, 127, 126, 130, 128, 125, 130, 126, 128, 130, 128, 127, 129, 128, 124, 130, 123, 129,
  126, 124, 131, 127, 125, 131, 125, 125, 129, 128, 125, 132, 127, 126, 131, 120, 132, 127, 121, 130,
  125, 131, 124, 128, 129, 129, 122, 134, 126, 128, 130, 129, 121, 133, 127, 125, 129, 131, 126, 123,
  129, 127, 124, 129, 128, 130, 130, 123, 131, 127, 128, 125, 134, 127, 128, 129, 123, 126, 128, 127,
  130, 122, 133, 121, 130, 128, 133, 121, 130, 130, 126, 134, 121, 130, 125, 132, 120, 127, 135, 122,
  131, 133, 121, 137, 116, 132, 124, 126, 126, 132, 122, 129, 134, 124, 135, 126, 128, 129, 122, 124,
  124, 128, 120, 134, 125, 129, 133, 127, 123, 136, 116, 129, 128, 121, 140, 112, 138, 117, 134, 117,
  129, 127, 126, 132, 121, 135, 120, 133, 118, 135, 130, 126, 129, 123, 133, 125, 137, 122, 136, 124,
  125, 130, 131, 123, 134, 123, 131, 128, 124, 129, 126, 131, 127, 127, 131, 124, 131, 129, 127, 135,
  118, 132, 122, 130, 116, 135, 115, 144, 123, 128, 118, 128, 124, 127, 122, 128, 121, 130, 128, 126,
  136, 121, 132, 125, 133, 123, 137, 118, 139, 122, 136, 130, 124, 121, 134, 119, 134, 125, 120, 136,
  131, 124, 131, 134, 113, 129, 124, 120, 141, 127, 128, 136, 117, 144, 117, 131, 131, 121, 139, 117,
  137, 126, 130, 119, 130, 133, 129, 131, 124, 126, 138, 124, 125, 127, 129, 124, 131, 117, 124, 121,
  140, 120, 135, 125, 136, 133, 122, 132, 117, 123, 132, 122, 137, 115, 141, 123, 120, 123, 135, 115,
  133, 117, 142, 123, 121, 127, 120, 129, 131, 125, 129, 125, 118, 136, 123, 130, 117, 132, 114, 146,
  116, 135, 122, 138, 116, 147, 112, 140, 128, 134, 120, 135, 119, 136, 133, 119, 145, 110, 136, 119,
  114, 133, 134, 123, 128, 129, 113, 135, 126, 145, 114, 142, 133, 115, 132, 118, 133, 118, 123, 140,
  122, 128, 121, 122, 136, 126, 121, 128, 128, 135, 115, 133, 115, 141, 125, 126, 142, 127, 120, 128,
  136, 125, 134, 132, 111, 135, 108, 141, 117, 132, 125, 132, 124, 128, 117, 126, 136, 127, 128, 148,
  116, 139, 117, 134, 118, 118, 137, 123, 128, 135, 125, 120, 125, 128, 112, 120, 140, 133, 115, 118,
  142, 120, 106, 128, 135, 132, 126, 140, 122, 134, 121, 139, 119, 130, 133, 129, 129, 139, 117, 137,
  128, 119, 122, 131, 119, 125, 123, 132, 115, 138, 117, 134, 127, 130, 117, 133, 111, 120, 143, 108,
  154, 115, 143, 114, 144, 109, 143, 122, 121, 136, 113, 142, 116, 130, 117, 117, 132, 113, 130, 102,
  143, 129, 127, 137, 126, 124, 133, 105, 139, 130, 135, 136, 116, 128, 136, 110, 129, 135, 105, 148,
  124, 122, 133, 120, 128, 146, 105, 137, 118, 125, 133, 129, 131, 143, 103, 153, 117, 147, 115, 136,
  135, 126, 109, 139, 107, 131, 143, 109, 159, 105, 148, 122, 130, 121, 143, 106, 145, 135, 128, 120,
  138, 131, 136, 123, 134, 125, 142, 116, 132, 121, 137, 117, 133, 128, 129, 122, 136, 116, 150, 112,
  146, 114, 116, 127, 118, 120, 128, 121, 135, 124, 129, 137, 122, 135, 129, 138, 111, 144, 106, 141,
  115, 138, 125, 132, 128, 132, 126, 131, 118, 142, 124, 132, 132, 131, 134, 121, 140, 135, 130, 136,
  127, 129, 125, 130, 122, 132, 125, 125, 124, 129, 116, 145, 134, 138, 140, 137, 123, 133, 130, 124,
  122, 125, 121, 115, 128, 121, 132, 128, 124, 140, 130, 131, 135, 128, 131, 127, 119, 123, 122, 119,
  125, 128, 130, 128, 126, 138, 127, 130, 131, 123, 119, 111, 115, 119, 117, 124, 128, 134, 135, 128,
  131, 134, 133, 128, 129, 126, 133, 123, 119, 129, 127, 129, 126, 131, 134, 125, 119, 128, 127, 117,
  130, 116, 134, 120, 123, 129, 125, 131, 125, 128, 139, 134, 139, 137, 149, 148, 150, 147, 149, 143,
  147, 134, 134, 141, 133, 128, 130, 128, 136, 130, 127, 128, 131, 113, 118, 112, 108, 109, 91, 94,
  90, 93, 86, 82, 85, 85, 76, 85, 90, 96, 113, 113, 142, 158, 171, 180, 176, 164, 173, 148,
  143, 130, 132, 146, 152, 161, 156, 164, 163, 164, 158, 156, 145, 145, 141, 142, 141, 136, 139, 138,
  129, 122, 107, 107, 114, 109, 94, 82, 78, 70, 64, 51, 49, 56, 61, 74, 77, 93, 92, 114,
  139, 216, 203, 193, 145, 132, 136, 128, 99, 108, 134, 159, 171, 150, 151, 177, 167, 163, 141, 135,
  155, 149, 144, 146, 145, 159, 161, 148, 150, 147, 143, 144, 135, 133, 134, 131, 126, 121, 109, 110,
  107, 98, 100, 88, 91, 72, 55, 57, 57, 62, 72, 65, 57, 74, 112, 210, 219, 205, 155, 123,
  128, 123, 87, 107, 128, 159, 167, 148, 141, 158, 158, 146, 129, 111, 124, 136, 133, 145, 161, 176,
  188, 162, 133, 135, 143, 167, 159, 147, 140, 141, 151, 149, 146, 140, 139, 142, 129, 108, 97, 92,
  98, 88, 77, 68, 71, 51, 40, 40, 44, 65, 92, 148, 204, 204, 184, 124, 90, 87, 103, 109,
  125, 132, 156, 170, 174, 147, 136, 125, 124, 127, 125, 126, 139, 151, 165, 174, 170, 159, 147, 138,
  149, 153, 161, 159, 161, 147, 162, 146, 149, 146, 150, 150, 152, 128, 118, 110, 107, 104, 101, 88,
  86, 87, 72, 63, 41, 53, 44, 26, 38, 105, 203, 252, 219, 147, 72, 62, 97, 117, 132, 134,
  144, 158, 176, 166, 144, 124, 112, 113, 126, 132, 137, 145, 146, 152, 163, 168, 158, 144, 127, 122,
  145, 174, 180, 171, 137, 156, 154, 162, 150, 139, 139, 156, 154, 136, 119, 109, 110, 113, 107, 101,
  99, 84, 75, 58, 51, 38, 39, 18, 27, 134, 220, 244, 221, 112, 46, 52, 99, 126, 159, 132,
  129, 145, 161, 160, 157, 119, 107, 108, 119, 131, 144, 147, 147, 155, 162, 167, 159, 140, 125, 123,
  141, 165, 175, 181, 147, 166, 160, 159, 156, 145, 137, 153, 150, 142, 130, 114, 110, 113, 112, 110,
  113, 96, 84, 69, 49, 53, 51, 31, 22, 28, 141, 236, 252, 212, 107, 30, 39, 96, 127, 160,
  141, 126, 135, 153, 154, 162, 140, 115, 107, 110, 128, 152, 159, 152, 153, 153, 162, 160, 145, 127,
  127, 140, 159, 171, 175, 164, 155, 150, 146, 152, 150, 149, 149, 139, 139, 129, 123, 115, 113, 110,
  111, 108, 99, 86, 77, 57, 53, 50, 38, 27, 31, 79, 209, 232, 247, 160, 75, 22, 56, 85,
  139, 159, 150, 141, 146, 144, 159, 163, 136, 120, 100, 108, 127, 155, 158, 163, 155, 160, 159, 158,
  142, 130, 128, 133, 159, 165, 176, 167, 153, 144, 145, 147, 154, 149, 142, 137, 131, 123, 122, 114,
  111, 114, 109, 106, 97, 80, 68, 55, 48, 44, 41, 39, 60, 112, 200, 223, 230, 151, 80, 30,
  48, 82, 144, 160, 164, 149, 141, 139, 154, 154, 144, 130, 108, 107, 123, 145, 157, 165, 158, 162,
  161, 154, 138, 127, 127, 134, 159, 167, 177, 166, 151, 141, 138, 139, 148, 147, 144, 138, 133, 124,
  121, 116, 113, 112, 109, 105, 99, 87, 77, 65, 54, 48, 45, 41, 47, 69, 136, 197, 228, 215,
  150, 82, 44, 56, 89, 146, 162, 165, 151, 133, 136, 152, 157, 163, 144, 124, 118, 114, 131, 145,
  160, 171, 172, 163, 146, 140, 136, 137, 149, 159, 162, 170, 152, 144, 132, 135, 140, 148, 151, 144,
  134, 122, 115, 111, 109, 107, 106, 97, 94, 82, 77, 71, 65, 57, 52, 37, 40, 58, 107, 181,
  217, 230, 182, 120, 66, 61, 70, 126, 144, 160, 149, 135, 126, 145, 157, 176, 172, 147, 128, 109,
  113, 128, 150, 161, 177, 159, 157, 141, 140, 149, 155, 163, 169, 158, 147, 139, 129, 137, 137, 143,
  144, 141, 134, 127, 117, 113, 106, 101, 104, 96, 97, 87, 80, 76, 66, 62, 56, 40, 41, 46,
  101, 148, 193, 216, 190, 157, 111, 85, 86, 112, 129, 156, 138, 131, 115, 124, 138, 165, 176, 182,
  163, 143, 125, 120, 130, 148, 163, 160, 155, 142, 140, 147, 156, 166, 169, 162, 149, 137, 127, 130,
  135, 141, 144, 136, 127, 114, 105, 102, 103, 104, 106, 97, 88, 79, 75, 73, 67, 51, 41, 31,
  60, 92, 140, 181, 196, 193, 162, 133, 111, 114, 119, 139, 135, 133, 115, 111, 108, 128, 146, 173,
  179, 176, 159, 144, 138, 140, 150, 152, 153, 145, 141, 137, 143, 150, 159, 165, 160, 155, 143, 138,
  137, 138, 140, 136, 128, 118, 108, 103, 103, 105, 107, 103, 102, 96, 92, 84, 71, 49, 34, 23,
  48, 69, 114, 146, 167, 177, 165, 151, 140, 139, 141, 149, 143, 139, 119, 110, 99, 108, 120, 146,
  160, 172, 168, 162, 156, 150, 154, 152, 156, 152, 149, 140, 139, 136, 142, 147, 151, 155, 153, 151,
  147, 142, 139, 134, 128, 123, 114, 108, 102, 98, 100, 100, 105, 106, 100, 85, 63, 43, 31, 38,
  58, 86, 115, 137, 145, 150, 145, 148, 153, 160, 167, 165, 154, 138, 118, 105, 100, 106, 121, 136,
  151, 160, 160, 158, 151, 155, 155, 158, 162, 162, 157, 153, 141, 137, 132, 133, 139, 144, 150, 149,
  148, 143, 138, 130, 126, 120, 118, 114, 113, 110, 110, 107, 101, 87, 70, 51, 38, 37, 49, 71,
  98, 117, 129, 132, 133, 136, 145, 156, 168, 173, 171, 160, 142, 124, 110, 105, 107, 117, 129, 140,
  146, 151, 151, 152, 155, 158, 165, 167, 168, 166, 155, 148, 137, 132, 131, 133, 137, 141, 143, 143,
  139, 135, 130, 127, 125, 124, 124, 121, 115, 100, 80, 58, 42, 32, 38, 55, 81, 102, 119, 127,
  130, 132, 136, 143, 152, 161, 165, 164, 156, 145, 130, 119, 112, 110, 112, 118, 126, 137, 145, 151,
  155, 157, 159, 159, 160, 160, 158, 156, 152, 146, 141, 136, 132, 131, 131, 133, 134, 137, 140, 142,
  142, 140, 137, 130, 120, 103, 86, 68, 59, 53, 56, 64, 75, 85, 92, 99, 106, 119, 132, 148,
  158, 164, 162, 157, 146, 136, 128, 124, 124, 127, 129, 130, 130, 129, 131, 134, 140, 148, 155, 161,
  162, 160, 155, 149, 145, 141, 139, 138, 138, 138, 138, 137, 136, 137, 139, 143, 145, 143, 135, 122,
  107, 87, 74, 66, 67, 68, 73, 77, 84, 91, 99, 106, 116, 129, 140, 150, 155, 159, 156, 151,
  143, 136, 129, 126, 123, 125, 127, 132, 136, 140, 141, 141, 139, 139, 140, 143, 146, 150, 150, 150,
  146, 141, 136, 135, 136, 140, 146, 152, 155, 151, 142, 125, 108, 90, 81, 78, 83, 88, 94, 95,
  95, 92, 91, 92, 100, 114, 130, 145, 155, 159, 155, 147, 137, 129, 125, 126, 131, 137, 142, 144,
  142, 136, 130, 125, 124, 127, 132, 137, 143, 145, 142, 135, 128, 124, 125, 131, 143, 154, 162, 163,
  156, 140, 122, 106, 99, 95, 99, 104, 108, 108, 103, 95, 90, 89, 95, 107, 122, 137, 149, 155,
  154, 148, 139, 131, 126, 127, 132, 140, 147, 149, 146, 139, 129, 122, 118, 120, 126, 134, 140, 142,
  138, 132, 124, 119, 119, 126, 136, 147, 154, 154, 146, 130, 115, 103, 97, 98, 103, 109, 114, 114,
  109, 102, 96, 94, 98, 110, 124, 139, 148, 152, 149, 142, 135, 130, 129, 133, 140, 147, 153, 153,
  150, 144, 135, 130, 127, 130, 134, 139, 141, 139, 133, 127, 121, 118, 119, 125, 134, 141, 144, 142,
  135, 126, 115, 106, 101, 102, 106, 111, 112, 110, 107, 103, 99, 100, 104, 112, 121, 131, 138, 141,
  141, 139, 136, 134, 134, 138, 142, 147, 151, 152, 150, 145, 138, 131, 126, 124, 127, 131, 136, 139,
  140, 138, 136, 133, 131, 128, 127, 127, 129, 128, 125, 119, 112, 105, 100, 97, 98, 102, 107, 112,
  115, 116, 117, 118, 120, 122, 127, 132, 139, 143, 145, 143, 139, 136, 134, 135, 138, 145, 150, 153,
  153, 150, 144, 138, 134, 133, 135, 137, 140, 139, 136, 129, 122, 117, 113, 112, 112, 115, 119, 120,
  118, 114, 107, 100, 95, 97, 102, 110, 118, 122, 124, 123, 121, 118, 119, 123, 130, 139, 147, 152,
  153, 151, 146, 142, 140, 143, 147, 151, 154, 153, 149, 142, 134, 128, 126, 127, 130, 134, 134, 132,
  126, 119, 111, 105, 103, 105, 109, 113, 113, 112, 108, 104, 102, 103, 107, 113, 119, 125, 130, 133,
  134, 135, 133, 133, 133, 139, 144, 150, 153, 154, 152, 149, 145, 141, 140, 140, 143, 144, 146, 145,
  143, 137, 129, 122, 118, 116, 114, 113, 114, 114, 111, 107, 102, 98, 96, 98, 102, 107, 112, 116,
  119, 121, 122, 123, 126, 127, 129, 133, 139, 144, 148, 149, 150, 148, 146, 145, 145, 145, 147, 149,
  151, 152, 151, 149, 145, 138, 131, 126, 124, 124, 124, 122, 119, 113, 106, 100, 97, 98, 100, 104,
  107, 109, 110, 109, 109, 107, 108, 111, 117, 124, 130, 134, 137, 138, 139, 140, 142, 145, 148, 151,
  154, 154, 154, 153, 151, 147, 143, 140, 138, 141, 141, 141, 141, 138, 134, 129, 123, 119, 115, 113,
  113, 110, 108, 106, 102, 99, 98, 97, 99, 102, 106, 109, 112, 114, 115, 116, 119, 123, 128, 134,
  139, 143, 145, 145, 146, 145, 147, 150, 154, 158, 159, 157, 153, 146, 140, 137, 136, 137, 139, 139,
  138, 133, 128, 122, 117, 113, 112, 110, 111, 110, 109, 107, 104, 102, 101, 101, 102, 106, 110, 114,
  116, 118, 120, 122, 125, 129, 133, 136, 140, 143, 145, 147, 147, 149, 149, 151, 151, 151, 149, 148,
  145, 142, 138, 135, 132, 132, 131, 131, 129, 126, 122, 118, 115, 113, 112, 110, 109, 107, 107, 107,
  107, 108, 109, 111, 112, 116, 118, 121, 124, 126, 129, 131, 134, 136, 139, 141, 142, 142, 143, 143,
  145, 148, 149, 149, 148, 146, 143, 140, 135, 132, 130, 128, 126, 125, 122, 120, 117, 114, 111, 110,
  111, 112, 113, 113, 113, 112, 112, 111, 114, 117, 120, 123, 124, 124, 125, 127, 130, 135, 139, 142,
  143, 142, 140, 138, 138, 138, 140, 143, 144, 144, 142, 139, 136, 134, 133, 131, 131, 129, 127, 124,
  121, 118, 116, 115, 115, 114, 114, 114, 113, 115, 117, 118, 119, 120, 120, 120, 120, 121, 123, 126,
  128, 130, 130, 131, 131, 132, 134, 136, 138, 138, 138, 138, 137, 136, 136, 135, 136, 136, 135, 134,
  133, 131, 130, 129, 128, 127, 127, 127, 126, 125, 124, 124, 123, 123, 123, 123, 123, 123, 122, 121,
  121, 120, 120, 120, 121, 123, 124, 125, 124, 124, 124, 125, 127, 129, 130, 130, 129, 129, 128, 129,
  130, 131, 132, 132, 132, 132, 131, 132, 132, 132, 132, 132, 131, 131, 131, 130, 130, 129, 128, 128,
  127, 127, 126, 126, 126, 126, 126, 126, 126, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126,
  126, 126, 127, 127, 128, 127, 127, 127, 127, 127, 128, 128, 128, 129, 129, 128, 128, 128, 127, 127,
  128, 128, 128, 128, 127, 127, 127, 127, 127, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 129, 129, 129, 128, 128, 128, 128, 129, 129, 129, 129, 128, 128, 128, 128, 128, 128,
  128, 127, 127, 126, 126, 126, 125, 126, 126, 126, 126, 126, 126, 126, 125, 125, 126, 126, 127, 127,
  127, 126, 127, 127, 127, 127, 128, 128, 129, 129, 129, 130, 130, 130, 130, 130, 130, 130, 131, 131,
  130, 130, 130, 129, 129, 129, 129, 128, 128, 127, 127, 127, 126, 126, 126, 126, 126, 126, 126, 126,
  126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 128
};

#endif

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_nam)
const uint8_t soDemData_nam_0[] PROGMEM = {
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 127, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 128,
  128, 128, 128, 128, 127, 127, 127, 127, 127, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
  126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 128, 128, 128, 129, 130, 130,
  131, 132, 132, 133, 134, 135, 136, 136, 137, 137, 136, 135, 135, 135, 134, 133, 131, 129, 127, 124,
  122, 121, 119, 118, 116, 114, 113, 112, 112, 112, 112, 112, 112, 113, 113, 114, 116, 117, 119, 120,
  122, 125, 127, 130, 132, 134, 136, 138, 140, 143, 148, 151, 154, 155, 155, 155, 153, 152, 151, 149,
  145, 140, 133, 128, 122, 119, 117, 115, 113, 112, 112, 112, 112, 114, 116, 118, 120, 121, 122, 123,
  123, 123, 124, 124, 124, 124, 123, 122, 120, 119, 118, 116, 115, 114, 113, 113, 113, 114, 115, 117,
  119, 122, 123, 125, 128, 130, 133, 137, 146, 151, 154, 159, 162, 161, 164, 162, 163, 161, 156, 149,
  143, 133, 126, 120, 116, 114, 111, 109, 108, 108, 108, 111, 113, 118, 120, 121, 124, 124, 124, 125,
  125, 126, 126, 124, 123, 121, 120, 118, 116, 115, 114, 112, 111, 110, 109, 110, 111, 113, 115, 117,
  120, 122, 125, 128, 132, 135, 142, 151, 157, 161, 166, 168, 166, 169, 165, 165, 162, 156, 147, 140,
  130, 122, 117, 113, 111, 109, 108, 107, 109, 110, 113, 116, 120, 122, 123, 124, 124, 125, 124, 125,
  125, 124, 122, 121, 119, 117, 115, 113, 112, 110, 109, 107, 107, 106, 107, 109, 111, 114, 118, 120,
  124, 128, 132, 136, 143, 153, 159, 164, 170, 172, 170, 173, 168, 168, 164, 158, 148, 141, 130, 123,
  117, 112, 111, 108, 108, 106, 108, 109, 112, 115, 119, 121, 122, 122, 122, 122, 122, 122, 122, 122,
  120, 119, 117, 116, 113, 112, 110, 109, 107, 106, 106, 106, 107, 110, 112, 116, 120, 123, 128, 131,
  137, 142, 150, 161, 165, 172, 175, 176, 173, 174, 169, 167, 162, 151, 144, 132, 125, 114, 111, 107,
  106, 105, 106, 106, 108, 111, 113, 118, 121, 123, 124, 124, 122, 123, 121, 122, 121, 120, 118, 116,
  114, 112, 110, 109, 108, 107, 106, 105, 106, 107, 109, 113, 117, 121, 124, 129, 133, 137, 144, 151,
  165, 166, 175, 177, 178, 175, 175, 171, 166, 163, 150, 145, 129, 123, 111, 108, 104, 103, 103, 103,
  104, 105, 109, 111, 118, 121, 123, 124, 124, 122, 123, 122, 121, 122, 121, 118, 116, 113, 112, 110,
  108, 108, 107, 107, 106, 106, 108, 112, 116, 120, 123, 128, 131, 136, 141, 149, 164, 166, 176, 179,
  180, 176, 178, 172, 168, 165, 150, 145, 129, 122, 108, 106, 101, 101, 101, 101, 103, 103, 109, 111,
  118, 122, 124, 125, 123, 123, 121, 121, 122, 121, 120, 118, 116, 112, 112, 110, 110, 109, 108, 108,
  107, 108, 110, 113, 117, 121, 125, 129, 133, 138, 143, 152, 167, 169, 178, 181, 181, 177, 178, 171,
  166, 163, 149, 142, 127, 120, 107, 104, 100, 99, 100, 100, 101, 103, 108, 110, 117, 121, 123, 124,
  122, 122, 121, 121, 120, 120, 119, 117, 114, 112, 111, 109, 110, 109, 109, 110, 109, 112, 114, 118,
  122, 125, 129, 131, 137, 140, 150, 162, 170, 174, 180, 182, 174, 179, 169, 168, 162, 154, 142, 130,
  122, 108, 105, 99, 100, 98, 100, 100, 101, 107, 109, 115, 119, 122, 123, 123, 122, 123, 121, 123,
  121, 122, 119, 117, 115, 113, 112, 111, 111, 109, 110, 109, 111, 114, 116, 120, 121, 127, 127, 132,
  136, 145, 162, 165, 176, 178, 182, 177, 178, 172, 167, 169, 152, 147, 130, 123, 109, 105, 100, 96,
  101, 97, 99, 98, 105, 106, 113, 116, 120, 123, 121, 124, 122, 125, 125, 124, 125, 122, 119, 117,
  115, 112, 112, 110, 110, 109, 109, 110, 112, 116, 119, 121, 125, 127, 129, 135, 144, 160, 163, 174,
  178, 178, 178, 177, 174, 170, 173, 157, 150, 134, 125, 113, 107, 103, 97, 101, 97, 98, 97, 99,
  103, 109, 115, 116, 121, 120, 120, 122, 123, 129, 127, 130, 127, 124, 122, 119, 116, 115, 113, 111,
  110, 108, 109, 108, 111, 114, 116, 120, 121, 125, 124, 132, 148, 153, 164, 169, 177, 172, 179, 174,
  172, 179, 168, 165, 149, 144, 125, 120, 111, 105, 105, 101, 100, 94, 100, 97, 105, 108, 112, 115,
  116, 118, 118, 123, 125, 128, 129, 129, 128, 125, 123, 120, 118, 116, 115, 113, 111, 111, 109, 109,
  111, 113, 116, 117, 121, 116, 122, 131, 150, 148, 160, 167, 168, 176, 172, 175, 172, 182, 170, 164,
  149, 140, 130, 118, 114, 103, 108, 102, 101, 101, 103, 106, 110, 115, 115, 115, 114, 116, 117, 118,
  119, 121, 125, 124, 128, 125, 123, 124, 121, 122, 120, 116, 113, 109, 101, 100, 101, 107, 109, 108,
  101, 101, 161, 173, 176, 188, 212, 200, 189, 147, 142, 152, 139, 133, 110, 131, 133, 132, 124, 125,
  137, 134, 128, 113, 115, 110, 109, 105, 111, 111, 112, 114, 115, 127, 121, 118, 126, 123, 127, 119,
  113, 113, 112, 115, 113, 110, 113, 99, 93, 88, 93, 111, 120, 109, 84, 105, 209, 197, 196, 206,
  228, 188, 147, 102, 112, 135, 127, 143, 147, 173, 165, 146, 143, 119, 110, 94, 92, 99, 111, 118,
  134, 140, 145, 126, 108, 98, 100, 99, 107, 113, 131, 144, 149, 135, 121, 105, 100, 97, 101, 101,
  101, 92, 92, 98, 107, 123, 129, 110, 75, 85, 195, 214, 195, 207, 216, 193, 156, 100, 93, 135,
  160, 169, 162, 173, 171, 148, 125, 89, 85, 92, 106, 119, 130, 141, 151, 141, 115, 94, 81, 87,
  93, 117, 135, 142, 148, 138, 119, 106, 98, 92, 101, 113, 113, 109, 96, 88, 97, 103, 106, 129,
  127, 90, 55, 106, 242, 222, 217, 190, 180, 163, 123, 79, 102, 164, 200, 193, 175, 149, 144, 124,
  105, 73, 84, 114, 140, 147, 147, 139, 139, 116, 92, 73, 69, 95, 136, 148, 156, 144, 135, 122,
  107, 96, 96, 104, 115, 119, 112, 101, 91, 86, 90, 93, 107, 121, 114, 74, 64, 166, 240, 238,
  205, 163, 142, 156, 118, 92, 114, 170, 219, 212, 170, 127, 124, 126, 109, 81, 91, 129, 159, 160,
  131, 120, 121, 116, 91, 73, 83, 118, 153, 162, 147, 125, 121, 114, 106, 104, 104, 113, 123, 124,
  108, 92, 78, 80, 96, 101, 110, 123, 109, 62, 55, 171, 244, 250, 202, 146, 106, 144, 132, 117,
  124, 166, 210, 223, 189, 116, 97, 107, 120, 106, 106, 123, 150, 172, 151, 119, 103, 99, 94, 95,
  94, 124, 157, 163, 149, 119, 96, 101, 111, 112, 110, 110, 112, 118, 106, 90, 85, 88, 92, 95,
  105, 116, 106, 71, 72, 194, 244, 247, 195, 120, 78, 137, 149, 139, 138, 159, 198, 219, 192, 121,
  90, 103, 120, 115, 117, 124, 149, 168, 152, 117, 105, 99, 90, 98, 109, 129, 153, 164, 148, 112,
  96, 95, 108, 121, 119, 107, 105, 106, 105, 99, 90, 82, 88, 94, 108, 120, 109, 65, 61, 177,
  250, 252, 210, 130, 68, 110, 149, 154, 144, 161, 187, 213, 207, 141, 92, 87, 117, 124, 137, 128,
  130, 149, 164, 135, 111, 92, 84, 100, 115, 130, 141, 151, 142, 125, 105, 97, 104, 121, 123, 112,
  104, 100, 102, 104, 103, 94, 90, 86, 95, 106, 114, 82, 53, 102, 219, 249, 245, 178, 99, 73,
  125, 154, 159, 158, 168, 185, 211, 189, 136, 92, 93, 109, 134, 147, 142, 134, 144, 144, 137, 116,
  92, 77, 94, 120, 137, 152, 152, 129, 118, 112, 105, 108, 115, 108, 111, 113, 110, 103, 103, 97,
  93, 95, 89, 87, 99, 105, 83, 64, 104, 199, 238, 241, 182, 104, 66, 106, 146, 174, 179, 172,
  181, 198, 191, 151, 113, 95, 98, 125, 150, 154, 148, 143, 140, 137, 129, 102, 82, 82, 99, 129,
  152, 158, 144, 124, 110, 103, 105, 112, 109, 106, 108, 110, 114, 116, 107, 93, 87, 84, 85, 97,
  108, 93, 66, 69, 140, 197, 235, 223, 169, 98, 82, 100, 138, 176, 194, 189, 182, 178, 166, 157,
  139, 118, 104, 115, 131, 148, 152, 143, 130, 123, 118, 111, 106, 102, 104, 118, 131, 139, 140, 134,
  124, 120, 117, 115, 113, 113, 113, 116, 119, 118, 112, 105, 97, 93, 95, 102, 109, 107, 89, 73,
  85, 115, 139, 158, 159, 138, 125, 129, 137, 158, 181, 186, 180, 172, 153, 146, 151, 153, 154, 157,
  150, 143, 138, 128, 123, 124, 124, 122, 123, 118, 112, 115, 117, 122, 128, 127, 123, 120, 117, 116,
  120, 122, 125, 125, 123, 120, 118, 115, 111, 110, 108, 108, 107, 105, 102, 93, 82, 87, 105, 107,
  112, 107, 100, 100, 121, 136, 156, 178, 178, 175, 172, 167, 167, 179, 181, 177, 175, 164, 153, 146,
  138, 131, 136, 136, 130, 122, 113, 106, 110, 116, 116, 117, 116, 113, 111, 112, 114, 117, 121, 121,
  119, 118, 118, 118, 116, 115, 112, 112, 111, 109, 105, 96, 84, 83, 98, 99, 107, 107, 102, 99,
  116, 128, 145, 166, 164, 164, 163, 162, 165, 179, 183, 182, 179, 166, 157, 148, 144, 141, 144, 142,
  138, 127, 119, 113, 113, 118, 119, 118, 117, 114, 110, 113, 115, 117, 120, 120, 118, 118, 118, 118,
  117, 116, 114, 113, 112, 109, 103, 92, 81, 81, 95, 97, 105, 104, 99, 98, 110, 122, 140, 159,
  160, 162, 161, 158, 163, 176, 182, 183, 178, 167, 157, 151, 150, 151, 152, 148, 141, 130, 122, 118,
  117, 120, 121, 120, 118, 116, 112, 112, 115, 118, 120, 121, 118, 116, 116, 117, 117, 117, 114, 113,
  111, 109, 105, 99, 86, 80, 85, 94, 99, 107, 105, 99, 106, 115, 129, 148, 157, 159, 160, 160,
  160, 170, 177, 182, 180, 173, 164, 156, 153, 151, 151, 151, 147, 137, 128, 120, 117, 118, 120, 120,
  118, 115, 112, 111, 113, 116, 117, 119, 119, 118, 116, 118, 118, 120, 119, 116, 114, 113, 112, 111,
  107, 96, 88, 87, 98, 98, 107, 105, 102, 102, 110, 117, 133, 147, 152, 157, 156, 155, 159, 168,
  174, 177, 174, 167, 161, 156, 153, 152, 155, 151, 146, 137, 128, 122, 120, 122, 123, 123, 120, 118,
  114, 114, 115, 117, 120, 121, 118, 117, 115, 115, 117, 118, 116, 115, 112, 110, 109, 107, 105, 101,
  93, 90, 96, 100, 102, 106, 105, 103, 110, 117, 128, 142, 150, 153, 154, 155, 154, 162, 170, 174,
  173, 169, 163, 156, 155, 153, 154, 153, 150, 142, 134, 127, 124, 125, 126, 125, 123, 120, 116, 116,
  116, 117, 118, 119, 120, 117, 116, 114, 113, 113, 113, 113, 111, 109, 106, 105, 104, 104, 103, 99,
  94, 92, 100, 101, 108, 110, 112, 112, 120, 126, 137, 149, 154, 158, 158, 158, 159, 165, 171, 173,
  171, 166, 160, 155, 153, 152, 152, 150, 146, 138, 131, 126, 125, 126, 125, 124, 120, 118, 115, 115,
  115, 116, 117, 116, 116, 114, 113, 112, 111, 111, 111, 110, 109, 108, 106, 104, 104, 104, 104, 103,
  98, 97, 99, 107, 108, 115, 116, 117, 122, 129, 134, 145, 153, 157, 159, 161, 160, 163, 168, 170,
  170, 166, 163, 158, 154, 151, 150, 150, 148, 142, 135, 130, 126, 125, 125, 124, 122, 119, 116, 114,
  113, 114, 114, 114, 114, 112, 112, 110, 111, 109, 109, 109, 109, 109, 107, 106, 105, 104, 104, 105,
  105, 102, 101, 102, 109, 110, 116, 119, 120, 124, 131, 135, 144, 151, 154, 156, 158, 158, 161, 164,
  167, 167, 165, 163, 159, 156, 154, 153, 152, 150, 145, 140, 135, 131, 129, 127, 125, 122, 119, 116,
  114, 113, 113, 112, 113, 112, 111, 109, 109, 109, 108, 107, 105, 107, 107, 108, 107, 106, 104, 103,
  104, 105, 106, 105, 105, 106, 110, 114, 117, 122, 124, 128, 132, 137, 143, 148, 153, 156, 159, 159,
  161, 163, 165, 166, 165, 162, 159, 157, 155, 155, 154, 151, 146, 142, 137, 133, 131, 128, 125, 122,
  119, 115, 113, 112, 111, 111, 110, 109, 109, 108, 109, 109, 109, 107, 106, 106, 106, 107, 107, 107,
  107, 106, 106, 107, 108, 110, 110, 111, 112, 114, 115, 119, 122, 124, 128, 132, 135, 140, 145, 149,
  152, 155, 156, 158, 160, 161, 162, 161, 161, 158, 157, 156, 155, 153, 151, 148, 144, 141, 137, 134,
  130, 127, 124, 121, 118, 115, 114, 112, 111, 111, 110, 111, 110, 109, 109, 109, 108, 108, 108, 107,
  107, 107, 107, 107, 109, 109, 110, 110, 111, 112, 113, 115, 115, 118, 119, 122, 124, 126, 128, 131,
  134, 137, 141, 143, 146, 148, 149, 150, 153, 154, 155, 155, 156, 155, 154, 153, 153, 152, 150, 149,
  147, 144, 141, 137, 134, 131, 128, 125, 122, 118, 116, 114, 113, 111, 111, 110, 109, 109, 109, 109,
  109, 109, 108, 109, 109, 109, 110, 109, 110, 111, 112, 113, 115, 115, 117, 119, 120, 122, 124, 125,
  127, 129, 130, 132, 134, 135, 136, 138, 140, 141, 143, 144, 144, 146, 147, 147, 148, 148, 147, 147,
  146, 146, 145, 144, 142, 140, 138, 136, 135, 133, 130, 128, 125, 123, 121, 119, 118, 116, 115, 114,
  113, 113, 112, 112, 112, 112, 112, 113, 114, 114, 115, 116, 117, 118, 119, 120, 122, 123, 124, 125,
  126, 127, 128, 129, 130, 131, 132, 132, 133, 133, 134, 134, 135, 135, 135, 135, 135, 135, 135, 135,
  135, 135, 135, 135, 135, 134, 134, 133, 133, 132, 132, 131, 131, 129, 129, 127, 126, 126, 126, 125,
  125, 124, 123, 122, 122, 122, 122, 122, 122, 121, 121, 121, 122, 122, 122, 123, 123, 123, 124, 124,
  125, 125, 126, 127, 128, 128, 129, 129, 130, 130, 131, 131, 131, 132, 132, 132, 132, 132, 131, 131,
  131, 131, 131, 130, 130, 129, 129, 129, 129, 129, 128, 127, 127, 127, 127, 127, 126, 126, 125, 126,
  126, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 127,
  127, 127, 127, 127, 128, 128, 129, 128, 129, 129, 129, 130, 130, 130, 130, 130, 130, 131, 131, 131,
  131, 131, 131, 131, 131, 131, 130, 130, 130, 129, 129, 129, 129, 128, 128, 127, 127, 127, 126, 126,
  126, 126, 125, 125, 125, 125, 125, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124, 124,
  125, 125, 125, 125, 125, 126, 126, 126, 127, 127, 127, 128, 128, 129, 129, 129, 130, 130, 131, 131,
  131, 131, 132, 132, 132, 132, 132, 132, 132, 132, 132, 131, 131, 131, 131, 131, 130, 130, 129, 129,
  129, 128, 128, 127, 127, 126, 126, 125, 125, 125, 125, 125, 125, 124, 124, 124, 124, 124, 124, 124,
  124, 124, 124, 124, 125, 125, 125, 125, 126, 126, 126, 126, 127, 127, 127, 127, 128, 128, 128, 128,
  129, 129, 129, 129, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 129, 129, 129, 129, 129,
  129, 128, 128, 128, 128, 128, 127, 127, 127, 127, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
  126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 128, 128, 128, 128, 128, 129, 129, 129, 129,
  129, 129, 130, 130, 130, 130, 130, 130, 130, 130, 130, 129, 129, 129, 129, 129, 129, 128, 128, 128,
  127, 127, 127, 127, 126, 126, 126, 126, 126, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125,
  125, 125, 125, 125, 125, 126, 126, 126, 126, 127, 127, 127, 127, 128, 128, 128, 129, 129, 129, 130,
  130, 130, 130, 130, 131, 131, 131, 131, 131, 131, 131, 131, 130, 130, 130, 130, 130, 130, 129, 129,
  129, 129, 128, 128, 128, 127, 127, 127, 126, 126, 126, 126, 125, 125, 125, 125, 125, 125, 125, 125,
  125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 127, 127, 127, 127, 128, 128, 128,
  128, 129, 129, 129, 129, 129, 129, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 129, 129, 129,
  129, 129, 129, 128, 128, 128, 128, 128, 127, 127, 127, 127, 127, 126, 126, 126, 126, 126, 126, 126,
  126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 128, 128, 128,
  128, 128, 128, 128, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 128, 128, 128,
  128, 128, 128, 128, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 127, 127, 127, 127, 128
};

#endif

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_bon)
const uint8_t soDemData_bon_0[] PROGMEM = {
  128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 127, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 129, 129, 129, 129, 129, 129, 129, 129, 129,
  129, 129, 129, 129, 128, 128, 128, 128, 128, 128, 127, 127, 127, 126, 126, 126, 125, 125, 125, 124,
  124, 124, 123, 123, 123, 123, 123, 123, 123, 124, 124, 125, 125, 126, 127, 128, 129, 130, 131, 132,
  133, 134, 135, 135, 136, 136, 137, 137, 137, 137, 137, 137, 136, 135, 134, 133, 132, 131, 130, 128,
  127, 126, 124, 123, 121, 120, 119, 118, 117, 116, 115, 114, 113, 113, 113, 113, 113, 113, 114, 115,
  116, 117, 118, 119, 121, 123, 126, 128, 131, 133, 136, 138, 140, 142, 143, 144, 145, 146, 146, 146,
  146, 146, 145, 144, 143, 142, 140, 138, 136, 134, 132, 130, 128, 126, 124, 123, 122, 121, 120, 119,
  118, 118, 118, 117, 117, 117, 117, 117, 116, 116, 115, 115, 114, 114, 114, 114, 114, 114, 115, 115,
  116, 116, 117, 118, 119, 122, 124, 127, 130, 133, 135, 138, 140, 142, 144, 146, 147, 148, 149, 149,
  149, 149, 148, 148, 146, 145, 143, 141, 139, 136, 134, 131, 129, 127, 125, 124, 122, 121, 120, 120,
  119, 119, 118, 118, 118, 118, 117, 117, 116, 115, 115, 114, 113, 112, 111, 111, 110, 110, 110, 110,
  111, 111, 112, 113, 114, 116, 119, 123, 126, 130, 134, 137, 140, 143, 146, 148, 151, 153, 154, 155,
  155, 154, 154, 153, 151, 150, 148, 146, 143, 141, 137, 134, 131, 128, 125, 123, 121, 119, 118, 117,
  117, 117, 117, 117, 117, 117, 117, 117, 117, 117, 116, 115, 114, 113, 112, 111, 110, 109, 109, 108,
  108, 108, 108, 108, 109, 110, 112, 115, 119, 124, 128, 132, 137, 140, 144, 148, 151, 153, 156, 158,
  159, 160, 160, 159, 158, 157, 155, 153, 150, 147, 144, 140, 136, 132, 128, 124, 121, 119, 117, 115,
  115, 114, 114, 115, 115, 116, 116, 116, 116, 116, 116, 116, 115, 115, 114, 112, 111, 109, 108, 107,
  106, 105, 103, 103, 103, 103, 105, 107, 109, 112, 117, 122, 126, 131, 135, 139, 144, 148, 152, 158,
  162, 166, 168, 171, 173, 174, 175, 174, 172, 171, 168, 162, 151, 140, 132, 120, 112, 105, 104, 103,
  102, 100, 101, 108, 113, 118, 122, 124, 128, 133, 133, 130, 126, 116, 109, 103, 95, 89, 89, 89,
  90, 91, 88, 84, 81, 77, 76, 80, 89, 102, 119, 143, 164, 182, 199, 203, 204, 202, 200, 194,
  193, 189, 177, 165, 144, 120, 98, 82, 72, 70, 79, 87, 102, 117, 128, 140, 150, 160, 167, 176,
  179, 180, 178, 169, 158, 147, 132, 121, 112, 102, 98, 94, 92, 90, 92, 93, 92, 92, 87, 87,
  85, 88, 92, 96, 97, 95, 93, 86, 83, 79, 77, 81, 89, 122, 145, 179, 214, 226, 237, 231,
  219, 194, 188, 173, 162, 157, 135, 111, 87, 64, 50, 56, 74, 97, 135, 160, 180, 191, 193, 187,
  183, 179, 166, 164, 149, 135, 122, 106, 97, 90, 94, 96, 107, 114, 118, 123, 119, 115, 105, 96,
  86, 80, 77, 76, 76, 72, 72, 71, 69, 70, 68, 73, 79, 110, 146, 174, 225, 242, 252, 240,
  226, 193, 172, 162, 146, 144, 129, 107, 83, 61, 50, 55, 84, 115, 160, 192, 209, 216, 205, 187,
  170, 157, 141, 135, 129, 116, 109, 98, 92, 93, 102, 112, 128, 139, 144, 145, 134, 118, 100, 82,
  67, 61, 59, 60, 63, 65, 67, 67, 68, 68, 70, 76, 96, 144, 170, 217, 245, 246, 238, 217,
  184, 152, 150, 138, 139, 140, 121, 100, 81, 64, 64, 91, 124, 163, 203, 218, 220, 207, 183, 160,
  143, 131, 124, 127, 119, 111, 104, 94, 94, 101, 113, 129, 144, 150, 147, 135, 113, 92, 72, 56,
  51, 53, 57, 64, 71, 73, 73, 73, 69, 74, 84, 105, 153, 181, 225, 241, 240, 223, 199, 169,
  146, 145, 138, 144, 142, 123, 106, 88, 76, 80, 106, 138, 174, 206, 216, 214, 195, 168, 147, 130,
  123, 121, 125, 121, 118, 110, 100, 101, 102, 113, 127, 140, 146, 142, 129, 106, 84, 64, 51, 49,
  53, 61, 68, 75, 76, 76, 73, 69, 79, 91, 124, 167, 198, 236, 239, 234, 208, 184, 153, 142,
  141, 138, 144, 136, 118, 102, 85, 81, 91, 120, 152, 187, 209, 215, 208, 186, 160, 140, 124, 119,
  118, 123, 119, 119, 109, 103, 102, 107, 117, 131, 142, 145, 139, 122, 99, 76, 56, 46, 46, 53,
  62, 71, 77, 78, 78, 76, 76, 88, 105, 146, 178, 214, 242, 239, 228, 202, 172, 145, 140, 138,
  139, 143, 131, 114, 98, 80, 80, 96, 125, 159, 195, 212, 214, 204, 179, 156, 136, 123, 120, 124,
  126, 120, 116, 104, 99, 97, 102, 116, 130, 140, 143, 135, 117, 95, 72, 55, 48, 49, 56, 65,
  73, 76, 77, 76, 73, 80, 92, 119, 164, 191, 230, 244, 240, 220, 195, 164, 142, 138, 133, 138,
  137, 122, 107, 91, 79, 81, 101, 130, 166, 197, 213, 217, 202, 179, 154, 133, 122, 120, 123, 123,
  123, 115, 104, 97, 92, 97, 109, 124, 135, 140, 132, 115, 94, 71, 58, 52, 54, 59, 66, 72,
  73, 74, 70, 74, 82, 101, 145, 175, 217, 243, 244, 235, 213, 183, 155, 148, 139, 139, 141, 128,
  113, 96, 79, 73, 85, 107, 139, 177, 200, 214, 212, 197, 174, 151, 135, 125, 125, 121, 123, 119,
  109, 99, 90, 89, 94, 109, 122, 136, 138, 129, 113, 90, 73, 61, 57, 58, 63, 66, 66, 65,
  59, 61, 69, 86, 128, 161, 209, 240, 248, 247, 230, 202, 172, 161, 146, 144, 143, 129, 113, 95,
  76, 65, 73, 92, 122, 161, 189, 210, 214, 205, 186, 166, 148, 135, 131, 126, 125, 118, 108, 95,
  85, 82, 85, 99, 112, 125, 130, 128, 118, 103, 91, 80, 74, 69, 66, 61, 56, 51, 44, 49,
  61, 91, 130, 169, 213, 237, 249, 243, 231, 206, 188, 174, 160, 155, 141, 124, 103, 82, 65, 59,
  69, 88, 122, 155, 183, 202, 207, 200, 186, 171, 155, 148, 142, 135, 129, 119, 105, 90, 81, 76,
  83, 94, 109, 121, 127, 126, 119, 110, 99, 91, 83, 77, 69, 59, 49, 41, 39, 43, 66, 103,
  141, 186, 216, 236, 240, 236, 220, 206, 195, 181, 173, 158, 139, 115, 92, 71, 59, 59, 69, 95,
  124, 153, 179, 194, 197, 191, 181, 167, 160, 152, 146, 142, 133, 120, 105, 93, 82, 79, 84, 94,
  105, 114, 119, 119, 115, 107, 97, 89, 82, 74, 68, 62, 55, 50, 51, 69, 93, 120, 156, 188,
  209, 218, 224, 218, 212, 203, 192, 183, 170, 154, 134, 115, 96, 80, 73, 74, 85, 101, 123, 144,
  162, 173, 178, 177, 172, 167, 160, 155, 150, 142, 133, 122, 110, 98, 89, 83, 82, 85, 91, 101,
  109, 114, 115, 112, 104, 93, 83, 73, 65, 60, 58, 66, 83, 99, 123, 147, 165, 179, 194, 203,
  207, 209, 208, 203, 193, 178, 159, 141, 123, 107, 98, 92, 91, 94, 100, 109, 123, 135, 145, 157,
  164, 164, 164, 162, 156, 150, 143, 135, 129, 120, 111, 103, 96, 91, 88, 89, 92, 98, 103, 105,
  107, 105, 100, 94, 85, 75, 69, 68, 72, 87, 108, 128, 146, 164, 175, 182, 185, 190, 191, 193,
  193, 189, 181, 171, 157, 139, 125, 113, 102, 97, 98, 101, 108, 122, 130, 139, 148, 152, 149, 149,
  146, 142, 140, 137, 136, 132, 126, 117, 110, 100, 93, 89, 89, 91, 97, 101, 105, 109, 107, 102,
  95, 86, 77, 75, 78, 87, 105, 123, 139, 152, 165, 171, 174, 179, 180, 181, 184, 183, 178, 176,
  167, 155, 144, 133, 120, 113, 109, 107, 111, 119, 125, 133, 139, 139, 138, 136, 133, 130, 128, 125,
  124, 121, 116, 111, 107, 102, 101, 102, 104, 106, 110, 111, 111, 109, 102, 93, 85, 79, 81, 85,
  96, 112, 125, 136, 150, 157, 161, 170, 174, 176, 183, 185, 181, 182, 175, 164, 154, 143, 128, 121,
  116, 114, 118, 124, 127, 131, 134, 131, 131, 128, 124, 121, 119, 115, 112, 111, 107, 106, 107, 105,
  108, 111, 112, 115, 118, 115, 111, 105, 94, 88, 88, 87, 92, 105, 113, 120, 134, 140, 145, 157,
  163, 167, 177, 181, 179, 183, 177, 167, 158, 148, 133, 129, 125, 123, 130, 136, 138, 140, 139, 132,
  128, 123, 115, 113, 111, 107, 107, 108, 104, 105, 105, 103, 106, 109, 110, 114, 118, 115, 112, 105,
  95, 90, 90, 87, 94, 106, 112, 124, 138, 143, 154, 164, 166, 170, 178, 173, 175, 177, 171, 167,
  162, 150, 142, 140, 134, 135, 140, 142, 143, 145, 140, 134, 127, 116, 107, 101, 93, 90, 92, 92,
  97, 101, 102, 104, 105, 105, 105, 106, 104, 102, 98, 96, 98, 95, 100, 104, 107, 114, 127, 135,
  148, 164, 170, 180, 185, 184, 182, 180, 173, 168, 165, 157, 155, 154, 151, 150, 152, 149, 144, 141,
  133, 125, 119, 110, 104, 99, 93, 90, 89, 87, 86, 87, 87, 90, 94, 96, 98, 98, 93, 92,
  96, 93, 98, 105, 107, 112, 123, 127, 139, 155, 162, 171, 181, 181, 181, 184, 178, 176, 176, 173,
  170, 170, 165, 159, 158, 151, 146, 141, 134, 126, 120, 111, 103, 98, 93, 89, 88, 85, 84, 84,
  84, 86, 87, 86, 84, 84, 84, 92, 90, 99, 105, 106, 114, 122, 128, 141, 157, 161, 174, 179,
  179, 182, 182, 180, 180, 181, 175, 175, 169, 164, 159, 154, 148, 144, 139, 130, 123, 114, 106, 99,
  93, 90, 87, 85, 84, 82, 82, 81, 79, 77, 75, 79, 86, 87, 98, 105, 105, 117, 123, 131,
  146, 158, 164, 177, 181, 181, 185, 184, 184, 183, 183, 177, 173, 168, 161, 156, 151, 147, 139, 133,
  125, 115, 108, 101, 95, 91, 87, 83, 80, 78, 76, 73, 72, 69, 69, 77, 83, 86, 99, 106,
  108, 123, 128, 137, 155, 163, 171, 181, 184, 184, 189, 187, 188, 188, 184, 179, 173, 168, 160, 155,
  150, 145, 137, 129, 120, 111, 104, 97, 92, 88, 83, 79, 76, 72, 67, 63, 60, 63, 71, 73,
  86, 94, 98, 110, 118, 127, 142, 154, 163, 174, 178, 181, 185, 187, 191, 192, 190, 187, 182, 175,
  170, 164, 159, 154, 145, 137, 127, 117, 109, 101, 95, 90, 85, 80, 75, 67, 62, 55, 57, 66,
  68, 78, 88, 92, 102, 111, 120, 133, 148, 157, 167, 173, 177, 179, 183, 188, 188, 189, 186, 180,
  174, 168, 162, 158, 153, 145, 138, 127, 116, 107, 99, 94, 88, 84, 79, 71, 65, 59, 56, 63,
  69, 75, 87, 95, 101, 114, 122, 134, 149, 161, 170, 176, 181, 181, 185, 189, 190, 190, 186, 178,
  171, 165, 157, 153, 148, 142, 134, 123, 113, 103, 95, 91, 84, 80, 73, 64, 57, 52, 55, 63,
  68, 80, 88, 93, 107, 115, 128, 142, 156, 167, 174, 180, 183, 185, 193, 195, 194, 193, 184, 177,
  171, 162, 158, 152, 145, 138, 126, 116, 105, 97, 91, 84, 79, 71, 62, 55, 53, 58, 64, 70,
  82, 90, 96, 110, 115, 130, 143, 156, 166, 174, 179, 181, 186, 192, 193, 192, 187, 179, 173, 164,
  158, 152, 147, 139, 130, 118, 107, 98, 91, 85, 78, 71, 65, 58, 56, 65, 67, 76, 86, 94,
  102, 113, 121, 134, 148, 159, 167, 173, 179, 180, 188, 190, 189, 189, 182, 175, 168, 160, 155, 148,
  141, 134, 121, 111, 101, 92, 86, 80, 74, 68, 62, 59, 64, 71, 76, 88, 96, 101, 116, 122,
  133, 147, 156, 164, 170, 175, 177, 181, 185, 183, 184, 179, 169, 163, 156, 150, 143, 139, 129, 119,
  110, 99, 91, 85, 80, 74, 70, 65, 65, 74, 77, 87, 98, 105, 115, 125, 131, 144, 155, 161,
  170, 173, 177, 179, 182, 183, 180, 177, 169, 160, 154, 146, 140, 135, 127, 119, 108, 99, 89, 84,
  80, 75, 71, 67, 68, 74, 80, 88, 98, 107, 114, 125, 130, 141, 152, 160, 167, 171, 176, 176,
  180, 181, 180, 177, 170, 161, 153, 147, 142, 135, 129, 120, 110, 102, 93, 88, 84, 80, 76, 73,
  75, 83, 85, 95, 103, 110, 118, 125, 132, 139, 150, 155, 161, 165, 168, 169, 173, 173, 171, 167,
  159, 152, 146, 140, 135, 131, 124, 116, 107, 99, 92, 89, 86, 83, 82, 82, 87, 94, 98, 109,
  116, 120, 130, 134, 140, 147, 155, 159, 162, 167, 166, 168, 169, 168, 164, 158, 150, 142, 137, 132,
  127, 122, 115, 107, 100, 92, 89, 86, 85, 83, 84, 89, 97, 99, 109, 116, 120, 128, 134, 140,
  145, 154, 157, 161, 165, 165, 167, 169, 167, 163, 157, 149, 142, 136, 132, 126, 122, 114, 107, 100,
  94, 90, 88, 87, 87, 87, 91, 99, 100, 110, 116, 120, 128, 133, 139, 144, 153, 157, 160, 165,
  165, 166, 169, 166, 163, 158, 149, 144, 137, 134, 127, 122, 115, 107, 101, 95, 92, 90, 89, 88,
  89, 93, 99, 101, 109, 115, 119, 125, 129, 135, 141, 150, 154, 157, 161, 161, 163, 165, 162, 159,
  154, 148, 142, 137, 133, 128, 123, 117, 110, 104, 98, 96, 95, 94, 95, 95, 99, 105, 106, 113,
  117, 122, 128, 132, 137, 142, 149, 152, 155, 159, 158, 158, 159, 157, 153, 149, 143, 137, 133, 128,
  123, 119, 114, 107, 103, 99, 97, 97, 97, 97, 99, 103, 108, 110, 116, 121, 125, 130, 135, 139,
  143, 150, 152, 155, 156, 156, 157, 156, 156, 152, 148, 142, 136, 132, 127, 123, 119, 115, 110, 105,
  102, 100, 99, 99, 101, 102, 105, 110, 111, 117, 121, 124, 130, 133, 137, 141, 145, 148, 150, 153,
  152, 152, 153, 151, 148, 145, 140, 135, 131, 127, 123, 119, 116, 111, 108, 105, 104, 104, 104, 105,
  106, 108, 113, 117, 120, 125, 128, 131, 135, 138, 141, 145, 147, 148, 150, 149, 148, 148, 146, 143,
  141, 137, 132, 128, 125, 121, 119, 116, 113, 110, 108, 107, 107, 108, 109, 110, 113, 115, 119, 121,
  125, 128, 130, 134, 137, 139, 142, 143, 145, 145, 145, 145, 143, 143, 141, 138, 135, 131, 128, 126,
  123, 120, 118, 116, 114, 112, 112, 112, 113, 113, 115, 116, 118, 120, 122, 126, 128, 130, 133, 135,
  136, 138, 140, 140, 141, 141, 140, 139, 138, 136, 135, 134, 131, 129, 127, 124, 122, 120, 119, 118,
  118, 117, 117, 117, 117, 118, 119, 121, 122, 124, 126, 127, 129, 131, 132, 134, 135, 136, 136, 136,
  136, 136, 136, 135, 134, 133, 132, 130, 128, 127, 125, 124, 123, 122, 121, 121, 121, 121, 121, 121,
  121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 131, 132, 132, 133, 133, 133, 133, 132, 131,
  131, 130, 129, 128, 128, 127, 126, 126, 125, 125, 125, 124, 124, 124, 124, 124, 124, 125, 125, 126,
  126, 127, 127, 128, 128, 128, 129, 129, 130, 130, 130, 130, 130, 130, 129, 129, 129, 129, 129, 128,
  128, 128, 127, 127, 127, 127, 127, 127, 126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127,
  127, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 127,
  127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 127, 128
};

#endif

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_ba)
const uint8_t soDemData_ba_0[] PROGMEM = {
  128, 128, 128, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 127, 127, 127, 127, 128, 128, 128, 128, 128, 129, 129, 129, 129, 129, 129, 130,
  130, 130, 130, 129, 129, 129, 129, 129, 129, 128, 128, 128, 127, 127, 127, 127, 126, 126, 125, 125,
  124, 124, 124, 123, 123, 123, 123, 122, 122, 122, 123, 123, 124, 125, 126, 127, 128, 129, 130, 131,
  132, 133, 134, 135, 135, 135, 136, 136, 136, 135, 135, 134, 134, 133, 132, 131, 130, 129, 128, 127,
  126, 124, 124, 123, 122, 121, 121, 121, 120, 120, 120, 121, 121, 121, 122, 122, 122, 123, 123, 124,
  124, 124, 124, 125, 125, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 134, 135, 135, 134, 134,
  134, 134, 134, 134, 133, 133, 132, 131, 131, 130, 129, 129, 128, 127, 126, 125, 125, 125, 125, 125,
  125, 125, 125, 126, 126, 127, 127, 127, 127, 128, 128, 127, 127, 126, 126, 125, 124, 124, 123, 122,
  121, 121, 120, 120, 120, 119, 119, 119, 120, 121, 123, 124, 125, 126, 128, 130, 132, 134, 135, 136,
  136, 137, 138, 139, 139, 139, 138, 137, 136, 135, 134, 133, 132, 130, 129, 128, 127, 126, 125, 125,
  125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 125, 125, 124, 124, 123, 122, 121, 121,
  120, 119, 119, 118, 118, 118, 118, 118, 118, 119, 121, 123, 125, 127, 128, 130, 132, 135, 137, 140,
  141, 141, 141, 141, 141, 142, 141, 140, 139, 137, 135, 134, 132, 131, 130, 128, 126, 125, 125, 124,
  123, 124, 123, 124, 125, 125, 126, 126, 127, 127, 128, 128, 128, 128, 126, 125, 124, 122, 121, 120,
  118, 116, 115, 114, 113, 113, 113, 113, 114, 114, 114, 115, 116, 118, 121, 123, 125, 128, 130, 134,
  140, 146, 152, 156, 160, 162, 163, 163, 161, 157, 152, 146, 139, 132, 126, 119, 117, 114, 109, 106,
  103, 107, 115, 120, 130, 132, 139, 147, 154, 150, 140, 116, 110, 103, 106, 105, 103, 99, 101, 102,
  102, 102, 99, 98, 99, 103, 105, 105, 96, 96, 115, 167, 186, 223, 213, 200, 176, 166, 141, 136,
  112, 90, 82, 81, 93, 117, 137, 144, 162, 166, 175, 176, 166, 134, 117, 101, 109, 121, 126, 115,
  115, 118, 137, 147, 150, 140, 138, 145, 152, 148, 134, 108, 93, 93, 100, 105, 106, 96, 91, 96,
  95, 94, 89, 84, 92, 112, 117, 110, 87, 77, 152, 206, 238, 235, 181, 114, 104, 89, 98, 117,
  109, 129, 166, 190, 195, 187, 139, 111, 98, 95, 110, 129, 123, 138, 152, 165, 174, 166, 118, 94,
  83, 86, 115, 134, 139, 162, 162, 166, 162, 135, 100, 87, 78, 97, 117, 118, 111, 106, 97, 103,
  96, 84, 79, 78, 83, 116, 126, 109, 92, 88, 196, 238, 252, 209, 121, 43, 70, 88, 136, 159,
  154, 175, 206, 194, 170, 114, 69, 68, 93, 125, 159, 168, 163, 164, 155, 139, 128, 100, 73, 82,
  118, 150, 189, 171, 149, 127, 111, 117, 129, 123, 120, 112, 105, 113, 111, 102, 94, 88, 94, 100,
  93, 85, 77, 86, 105, 123, 118, 111, 142, 219, 227, 217, 136, 70, 50, 94, 129, 174, 174, 177,
  180, 181, 159, 132, 87, 79, 96, 128, 156, 173, 162, 157, 138, 136, 129, 123, 107, 110, 109, 134,
  144, 150, 151, 142, 125, 124, 114, 129, 138, 127, 110, 99, 93, 96, 110, 94, 114, 111, 107, 105,
  76, 68, 69, 101, 143, 146, 114, 85, 102, 178, 233, 229, 175, 93, 49, 81, 133, 176, 189, 176,
  167, 170, 156, 134, 102, 79, 101, 133, 163, 175, 157, 137, 122, 117, 130, 134, 138, 135, 120, 120,
  132, 130, 141, 129, 117, 122, 127, 136, 138, 116, 102, 98, 98, 112, 109, 105, 100, 98, 106, 102,
  89, 79, 80, 105, 127, 125, 104, 87, 139, 203, 222, 206, 136, 80, 80, 108, 145, 176, 177, 181,
  175, 158, 134, 114, 99, 112, 129, 150, 160, 156, 144, 136, 123, 128, 127, 139, 131, 131, 122, 123,
  128, 131, 130, 131, 129, 133, 128, 122, 111, 105, 99, 107, 113, 112, 110, 96, 96, 101, 110, 110,
  93, 82, 80, 103, 130, 124, 104, 83, 144, 201, 220, 199, 130, 76, 84, 115, 153, 184, 183, 181,
  168, 149, 133, 115, 106, 119, 132, 150, 159, 151, 141, 131, 124, 130, 130, 137, 136, 129, 126, 126,
  123, 126, 129, 132, 129, 130, 130, 121, 113, 100, 99, 111, 117, 121, 109, 99, 91, 95, 110, 113,
  106, 91, 83, 92, 110, 118, 113, 102, 116, 173, 187, 198, 157, 114, 102, 117, 133, 163, 171, 178,
  176, 163, 141, 126, 111, 121, 129, 142, 149, 147, 140, 138, 129, 132, 133, 143, 130, 126, 116, 123,
  128, 133, 134, 137, 128, 132, 120, 114, 109, 109, 105, 116, 116, 118, 111, 105, 91, 96, 107, 113,
  106, 90, 81, 94, 106, 116, 112, 108, 132, 166, 174, 173, 141, 117, 122, 131, 143, 158, 159, 168,
  168, 155, 138, 126, 123, 133, 143, 146, 143, 137, 130, 139, 138, 141, 134, 128, 130, 131, 126, 128,
  126, 131, 137, 133, 133, 130, 122, 116, 114, 111, 112, 116, 113, 104, 104, 90, 105, 112, 115, 113,
  95, 92, 82, 95, 119, 121, 107, 88, 98, 145, 188, 195, 169, 126, 104, 112, 138, 165, 177, 173,
  160, 150, 140, 135, 129, 128, 139, 142, 143, 143, 135, 136, 133, 127, 130, 128, 147, 145, 128, 120,
  120, 123, 142, 135, 127, 126, 124, 123, 121, 110, 108, 112, 110, 109, 109, 103, 106, 106, 111, 109,
  97, 94, 86, 91, 113, 115, 98, 80, 119, 167, 191, 180, 136, 107, 116, 127, 148, 165, 168, 171,
  160, 144, 135, 135, 135, 139, 144, 140, 140, 138, 135, 141, 136, 134, 133, 126, 137, 139, 123, 127,
  128, 130, 145, 134, 122, 125, 120, 123, 118, 111, 114, 120, 115, 110, 103, 100, 105, 109, 118, 113,
  98, 88, 83, 94, 116, 112, 93, 73, 123, 170, 186, 170, 125, 98, 118, 134, 151, 164, 162, 168,
  162, 145, 135, 132, 135, 146, 145, 141, 142, 139, 136, 139, 135, 136, 139, 139, 127, 124, 124, 138,
  142, 133, 134, 132, 125, 132, 127, 117, 116, 118, 120, 125, 115, 112, 111, 108, 98, 97, 110, 118,
  114, 99, 83, 88, 95, 96, 96, 92, 111, 147, 151, 153, 139, 122, 129, 138, 135, 143, 148, 156,
  168, 162, 148, 139, 135, 140, 146, 142, 142, 139, 138, 148, 143, 134, 139, 145, 127, 126, 123, 136,
  148, 137, 127, 134, 133, 138, 126, 110, 111, 127, 126, 126, 113, 109, 116, 115, 98, 96, 108, 117,
  112, 99, 85, 94, 98, 96, 94, 92, 102, 133, 135, 144, 139, 130, 136, 141, 132, 136, 138, 146,
  163, 164, 154, 148, 138, 139, 147, 143, 140, 137, 137, 154, 149, 136, 133, 131, 133, 141, 126, 128,
  138, 138, 139, 134, 127, 129, 131, 129, 128, 127, 119, 121, 118, 107, 109, 107, 117, 123, 118, 108,
  98, 99, 85, 94, 115, 115, 94, 75, 77, 111, 151, 157, 143, 128, 117, 115, 131, 145, 155, 164,
  153, 145, 144, 142, 143, 144, 146, 145, 145, 145, 141, 137, 137, 136, 132, 127, 147, 152, 144, 135,
  128, 124, 139, 131, 126, 127, 137, 141, 136, 121, 116, 116, 115, 111, 112, 113, 118, 117, 119, 110,
  99, 94, 92, 97, 112, 103, 90, 72, 87, 126, 149, 151, 132, 114, 120, 132, 134, 140, 144, 149,
  152, 147, 145, 149, 147, 143, 145, 141, 143, 144, 143, 148, 139, 130, 138, 139, 138, 142, 126, 132,
  146, 141, 139, 134, 121, 128, 136, 138, 131, 124, 116, 124, 125, 115, 106, 105, 125, 132, 123, 101,
  97, 103, 88, 92, 119, 119, 97, 68, 77, 118, 148, 146, 124, 109, 112, 122, 133, 142, 145, 151,
  146, 139, 142, 144, 142, 144, 145, 143, 147, 147, 142, 142, 142, 139, 141, 137, 133, 131, 141, 153,
  147, 132, 135, 138, 131, 130, 128, 129, 132, 129, 129, 129, 119, 121, 125, 123, 105, 100, 108, 122,
  120, 111, 102, 104, 101, 101, 101, 97, 92, 104, 99, 109, 118, 126, 130, 138, 126, 122, 122, 129,
  140, 149, 146, 145, 142, 146, 148, 145, 140, 138, 143, 153, 149, 137, 143, 147, 137, 139, 135, 139,
  149, 141, 133, 138, 135, 136, 133, 126, 130, 133, 123, 127, 122, 121, 132, 128, 101, 104, 117, 121,
  121, 111, 99, 109, 111, 103, 106, 103, 96, 101, 97, 101, 109, 120, 124, 134, 129, 124, 122, 126,
  128, 135, 142, 146, 145, 146, 144, 144, 148, 145, 142, 151, 147, 138, 138, 135, 143, 149, 136, 139,
  147, 143, 138, 134, 130, 132, 137, 138, 139, 136, 127, 125, 127, 120, 120, 110, 118, 120, 123, 122,
  118, 121, 102, 96, 110, 120, 118, 110, 90, 86, 103, 109, 113, 122, 115, 110, 118, 121, 125, 133,
  127, 127, 136, 138, 137, 136, 138, 145, 147, 148, 150, 149, 144, 137, 131, 130, 147, 153, 157, 151,
  142, 132, 135, 133, 133, 139, 141, 136, 134, 132, 127, 125, 124, 130, 137, 131, 112, 105, 110, 123,
  124, 120, 117, 115, 112, 109, 109, 111, 107, 106, 106, 96, 104, 113, 118, 124, 118, 114, 117, 115,
  119, 125, 130, 138, 136, 134, 137, 135, 136, 140, 144, 153, 147, 137, 140, 145, 143, 145, 138, 137,
  143, 147, 149, 147, 136, 134, 136, 134, 131, 128, 130, 141, 138, 125, 128, 132, 121, 115, 114, 117,
  122, 128, 114, 110, 125, 120, 112, 110, 109, 113, 113, 100, 108, 116, 112, 113, 114, 114, 124, 121,
  112, 120, 123, 116, 123, 129, 133, 140, 130, 127, 142, 147, 140, 140, 139, 140, 145, 145, 140, 145,
  140, 136, 150, 151, 141, 140, 132, 130, 138, 135, 132, 136, 129, 131, 139, 137, 120, 119, 115, 121,
  122, 122, 120, 124, 119, 113, 119, 120, 115, 117, 113, 112, 118, 117, 114, 116, 111, 113, 116, 112,
  117, 126, 120, 115, 121, 121, 126, 124, 119, 125, 135, 139, 139, 136, 134, 141, 143, 140, 139, 143,
  140, 142, 141, 141, 146, 146, 140, 145, 139, 132, 131, 134, 136, 132, 127, 133, 133, 124, 122, 128,
  123, 122, 119, 120, 121, 118, 115, 124, 121, 118, 116, 111, 113, 124, 121, 114, 115, 121, 121, 120,
  118, 121, 125, 118, 123, 128, 125, 119, 122, 122, 130, 132, 129, 128, 129, 131, 137, 138, 130, 134,
  137, 138, 138, 136, 140, 141, 139, 138, 141, 140, 135, 133, 137, 132, 128, 127, 132, 130, 128, 129,
  128, 129, 121, 121, 123, 123, 120, 122, 121, 125, 121, 120, 123, 124, 118, 116, 120, 121, 121, 121,
  121, 126, 124, 121, 125, 129, 128, 125, 121, 126, 128, 126, 124, 132, 133, 130, 131, 134, 131, 126,
  125, 127, 132, 128, 134, 138, 138, 133, 133, 133, 134, 129, 130, 134, 133, 132, 134, 135, 132, 129,
  127, 126, 129, 127, 125, 124, 124, 123, 128, 127, 126, 124, 123, 123, 122, 121, 121, 119, 123, 126,
  126, 125, 123, 123, 122, 124, 125, 126, 124, 127, 128, 129, 128, 127, 129, 128, 127, 129, 128, 128,
  130, 133, 132, 129, 131, 130, 129, 129, 130, 131, 131, 128, 132, 133, 131, 132, 129, 128, 127, 127,
  128, 128, 128, 130, 128, 129, 128, 126, 126, 125, 125, 125, 125, 126, 126, 125, 126, 126, 124, 124,
  125, 127, 124, 122, 126, 127, 125, 125, 127, 128, 128, 126, 128, 129, 126, 125, 128, 129, 129, 128,
  129, 129, 129, 128, 131, 132, 129, 126, 128, 128, 130, 129, 129, 130, 129, 128, 130, 128, 128, 127,
  127, 128, 129, 128, 127, 127, 128, 128, 127, 128, 127, 126, 125, 125, 126, 126, 125, 125, 128, 128,
  127, 126, 127, 127, 125, 125, 126, 127, 127, 127, 127, 128, 128, 128, 128, 128, 129, 129, 127, 126,
  128, 129, 129, 128, 130, 130, 129, 129, 129, 129, 128, 128, 129, 130, 129, 128, 129, 129, 128, 127,
  128, 128, 128, 128, 127, 127, 127, 125, 125, 126, 127, 127, 126, 126, 127, 127, 126, 125, 126, 126,
  126, 126, 126, 127, 127, 127, 126, 127, 127, 127, 128, 128, 128, 128, 128, 127, 128, 128, 129, 129,
  129, 129, 129, 130, 129, 129, 129, 129, 130, 129, 129, 129, 128, 128, 129, 129, 128, 128, 128, 128,
  128, 128, 127, 128, 127, 127, 127, 127, 127, 126, 126, 127, 127, 126, 126, 126, 127, 126, 126, 126,
  126, 126, 126, 126, 127, 127, 126, 127, 127, 127, 127, 127, 128, 128, 128, 127, 128, 128, 128, 128,
  128, 129, 129, 128, 129, 129, 129, 128, 129, 129, 129, 129, 129, 129, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 127, 128
};

#endif

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_hai)
const uint8_t soDemData_hai_0[] PROGMEM = {
  128, 127, 127, 128, 128, 128, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 128, 128, 127,
  127, 127, 127, 127, 127, 127, 128, 128, 128, 128, 128, 127, 127, 128, 128, 127, 127, 128, 128, 127,
  128, 128, 128, 127, 127, 127, 127, 127, 127, 127, 128, 127, 127, 127, 128, 127, 127, 128, 128, 127,
  127, 127, 127, 127, 127, 128, 128, 128, 128, 128, 128, 127, 127, 127, 128, 127, 128, 129, 126, 129,
  126, 127, 127, 127, 126, 128, 128, 128, 127, 127, 128, 126, 127, 127, 128, 128, 127, 129, 128, 126,
  128, 125, 127, 128, 129, 129, 129, 127, 128, 127, 126, 128, 127, 126, 128, 128, 128, 127, 129, 128,
  125, 125, 126, 125, 127, 129, 130, 131, 127, 129, 129, 126, 124, 128, 127, 127, 127, 130, 131, 128,
  131, 130, 126, 128, 129, 127, 123, 124, 127, 129, 129, 128, 126, 126, 126, 123, 130, 129, 123, 129,
  121, 127, 129, 126, 132, 134, 126, 132, 129, 129, 127, 124, 123, 132, 135, 128, 127, 131, 124, 128,
  129, 117, 123, 127, 124, 131, 131, 128, 127, 126, 122, 130, 130, 124, 128, 141, 125, 124, 123, 127,
  136, 130, 126, 135, 128, 123, 127, 123, 127, 124, 122, 134, 129, 115, 126, 125, 129, 133, 126, 130,
  123, 123, 134, 131, 130, 133, 122, 132, 132, 120, 121, 129, 129, 130, 135, 117, 125, 134, 125, 126,
  124, 124, 127, 125, 137, 139, 130, 123, 127, 135, 130, 116, 124, 130, 133, 131, 121, 132, 132, 123,
  113, 131, 129, 119, 126, 136, 135, 129, 111, 118, 134, 133, 123, 127, 125, 131, 126, 131, 128, 127,
  121, 134, 131, 127, 122, 138, 134, 133, 123, 124, 120, 135, 128, 113, 127, 138, 129, 130, 123, 117,
  136, 122, 121, 140, 129, 116, 132, 131, 130, 126, 128, 125, 120, 133, 127, 120, 124, 139, 138, 134,
  115, 134, 136, 120, 129, 142, 134, 124, 120, 122, 137, 130, 121, 137, 131, 119, 123, 124, 131, 141,
  123, 133, 125, 117, 137, 125, 116, 131, 135, 124, 119, 115, 127, 125, 116, 101, 129, 132, 117, 127,
  125, 120, 139, 117, 118, 131, 123, 112, 135, 139, 127, 137, 135, 128, 134, 124, 132, 143, 142, 135,
  138, 144, 141, 132, 135, 150, 147, 148, 139, 150, 154, 137, 134, 152, 143, 136, 124, 137, 126, 119,
  111, 121, 118, 106, 95, 113, 99, 108, 104, 114, 106, 88, 90, 100, 99, 105, 87, 88, 106, 104,
  118, 128, 104, 88, 98, 111, 117, 149, 141, 130, 135, 141, 152, 160, 163, 168, 178, 176, 192, 194,
  184, 164, 169, 165, 165, 166, 171, 154, 156, 154, 139, 140, 140, 115, 123, 128, 128, 117, 99, 104,
  126, 100, 84, 103, 119, 76, 82, 87, 89, 77, 84, 90, 103, 74, 69, 89, 100, 73, 94, 109,
  108, 84, 97, 108, 129, 89, 100, 112, 148, 155, 180, 196, 210, 172, 163, 163, 167, 164, 176, 187,
  210, 194, 177, 183, 177, 145, 142, 133, 133, 149, 144, 138, 146, 167, 146, 99, 95, 127, 131, 115,
  125, 117, 86, 76, 103, 102, 86, 112, 106, 69, 73, 70, 74, 70, 73, 87, 94, 99, 86, 54,
  43, 74, 74, 88, 110, 108, 177, 194, 183, 166, 196, 193, 174, 144, 149, 186, 199, 175, 185, 207,
  202, 159, 137, 142, 163, 152, 145, 142, 154, 153, 121, 124, 146, 141, 132, 105, 122, 156, 155, 125,
  118, 91, 89, 95, 134, 103, 103, 106, 91, 62, 55, 59, 93, 89, 70, 70, 61, 61, 52, 44,
  66, 86, 76, 74, 103, 207, 215, 217, 202, 171, 143, 141, 132, 163, 199, 215, 217, 216, 175, 148,
  155, 157, 136, 120, 143, 186, 180, 136, 126, 163, 160, 130, 93, 121, 151, 137, 122, 151, 161, 138,
  95, 105, 104, 97, 100, 109, 95, 109, 106, 45, 35, 70, 95, 73, 55, 56, 54, 54, 56, 62,
  66, 56, 67, 149, 227, 203, 191, 181, 175, 142, 122, 138, 173, 203, 210, 209, 203, 185, 158, 140,
  144, 142, 138, 151, 168, 179, 160, 127, 137, 162, 154, 124, 106, 140, 164, 151, 130, 136, 152, 127,
  105, 116, 106, 118, 70, 103, 75, 76, 83, 79, 89, 59, 30, 44, 40, 25, 52, 89, 70, 38,
  33, 97, 200, 227, 190, 188, 187, 147, 121, 127, 154, 191, 211, 209, 209, 205, 161, 132, 134, 133,
  129, 156, 178, 178, 178, 174, 150, 130, 135, 134, 117, 133, 152, 153, 162, 149, 137, 125, 117, 115,
  142, 112, 105, 105, 107, 63, 70, 70, 84, 78, 58, 40, 47, 22, 12, 42, 72, 35, 27, 57,
  158, 222, 191, 180, 211, 157, 109, 102, 125, 163, 207, 227, 234, 223, 186, 147, 141, 128, 112, 126,
  178, 198, 178, 162, 168, 163, 159, 122, 109, 127, 140, 137, 140, 155, 168, 136, 125, 147, 148, 102,
  118, 97, 86, 90, 110, 85, 73, 75, 84, 61, 53, 28, 29, 34, 24, 29, 48, 42, 12, 85,
  235, 218, 204, 205, 189, 123, 95, 94, 145, 185, 213, 243, 252, 213, 164, 144, 140, 117, 105, 142,
  192, 200, 171, 155, 172, 168, 156, 112, 111, 125, 136, 131, 139, 142, 165, 150, 139, 152, 151, 114,
  115, 87, 83, 93, 95, 87, 80, 84, 85, 54, 40, 32, 29, 23, 23, 37, 36, 21, 34, 147,
  229, 189, 214, 225, 166, 110, 98, 108, 145, 178, 217, 252, 250, 203, 173, 159, 127, 100, 122, 163,
  178, 176, 173, 171, 182, 161, 149, 117, 119, 126, 124, 127, 130, 136, 165, 151, 139, 167, 150, 104,
  119, 91, 83, 92, 98, 79, 83, 77, 73, 59, 51, 33, 34, 23, 30, 39, 42, 20, 26, 122,
  220, 181, 209, 230, 181, 114, 111, 115, 126, 150, 203, 232, 227, 204, 203, 179, 134, 117, 133, 150,
  145, 162, 173, 174, 178, 181, 171, 127, 136, 136, 126, 118, 124, 148, 173, 167, 170, 163, 140, 108,
  88, 95, 87, 109, 87, 112, 81, 64, 70, 55, 47, 39, 25, 36, 24, 15, 33, 38, 16, 38,
  170, 228, 179, 216, 221, 148, 104, 126, 144, 141, 166, 220, 227, 200, 193, 199, 169, 139, 144, 155,
  156, 144, 164, 170, 161, 193, 198, 152, 130, 159, 127, 100, 124, 145, 154, 146, 166, 172, 140, 113,
  119, 86, 83, 103, 113, 84, 91, 74, 59, 49, 54, 53, 47, 34, 35, 33, 25, 23, 20, 32,
  61, 171, 184, 177, 241, 226, 139, 142, 134, 137, 142, 168, 200, 193, 194, 208, 196, 182, 162, 163,
  162, 150, 146, 159, 164, 163, 186, 170, 147, 161, 151, 132, 119, 132, 148, 134, 153, 162, 131, 126,
  133, 101, 90, 106, 118, 90, 98, 90, 67, 50, 61, 50, 61, 57, 50, 46, 31, 25, 30, 11,
  18, 42, 150, 159, 164, 217, 236, 158, 167, 150, 140, 140, 158, 179, 184, 189, 213, 197, 194, 186,
  180, 172, 161, 153, 157, 152, 161, 161, 159, 156, 158, 148, 150, 129, 147, 127, 140, 150, 137, 129,
  148, 115, 108, 107, 116, 100, 108, 102, 89, 72, 64, 57, 63, 57, 57, 59, 46, 41, 40, 25,
  20, 26, 43, 78, 138, 134, 183, 192, 179, 178, 170, 159, 151, 160, 178, 174, 178, 195, 188, 190,
  196, 191, 183, 182, 179, 172, 167, 155, 163, 162, 154, 139, 148, 147, 138, 140, 139, 140, 143, 147,
  139, 130, 128, 124, 107, 108, 105, 106, 98, 83, 76, 60, 66, 65, 61, 62, 56, 53, 48, 39,
  39, 28, 26, 34, 54, 105, 95, 147, 182, 162, 180, 181, 178, 169, 173, 180, 172, 176, 187, 182,
  182, 191, 186, 180, 190, 183, 185, 176, 168, 171, 158, 148, 140, 143, 150, 139, 131, 145, 139, 139,
  155, 134, 145, 136, 100, 135, 103, 106, 114, 91, 94, 82, 72, 77, 64, 65, 64, 52, 53, 46,
  48, 56, 33, 44, 28, 30, 90, 77, 116, 144, 149, 173, 181, 177, 171, 175, 185, 172, 184, 187,
  179, 181, 188, 175, 180, 189, 184, 186, 180, 179, 177, 167, 164, 156, 152, 145, 132, 139, 134, 136,
  147, 144, 143, 142, 129, 130, 123, 116, 117, 114, 98, 95, 93, 71, 73, 73, 63, 68, 65, 63,
  64, 58, 56, 45, 43, 37, 27, 41, 72, 82, 123, 134, 137, 171, 165, 174, 170, 181, 181, 181,
  189, 184, 178, 188, 174, 174, 182, 177, 177, 184, 183, 183, 176, 174, 172, 151, 150, 149, 133, 140,
  133, 137, 140, 138, 144, 126, 135, 130, 121, 122, 113, 107, 107, 93, 87, 86, 78, 72, 74, 69,
  65, 67, 64, 63, 66, 61, 49, 53, 47, 51, 65, 74, 105, 120, 122, 151, 154, 165, 168, 179,
  178, 180, 186, 187, 183, 190, 178, 175, 178, 179, 174, 179, 180, 177, 182, 172, 171, 163, 159, 148,
  144, 144, 131, 130, 143, 125, 132, 130, 124, 125, 122, 115, 115, 110, 108, 102, 101, 92, 91, 84,
  83, 78, 75, 73, 74, 72, 73, 77, 73, 67, 71, 62, 69, 69, 84, 93, 108, 119, 133, 139,
  153, 154, 166, 169, 174, 182, 180, 180, 184, 178, 177, 178, 174, 172, 179, 179, 174, 173, 179, 163,
  159, 166, 154, 155, 134, 146, 125, 136, 127, 121, 125, 125, 119, 124, 115, 116, 115, 107, 110, 97,
  94, 96, 88, 91, 87, 83, 84, 82, 84, 82, 83, 83, 77, 81, 73, 79, 78, 90, 98, 102,
  111, 121, 126, 133, 144, 148, 153, 162, 164, 168, 172, 172, 174, 173, 177, 176, 175, 179, 172, 175,
  179, 167, 168, 165, 161, 151, 155, 138, 135, 138, 127, 126, 130, 123, 123, 120, 123, 119, 118, 115,
  116, 109, 105, 105, 103, 99, 97, 96, 92, 89, 95, 90, 86, 102, 88, 92, 94, 81, 95, 88,
  95, 97, 102, 108, 108, 115, 121, 122, 134, 135, 139, 150, 149, 157, 161, 157, 164, 164, 165, 169,
  172, 171, 173, 171, 169, 166, 168, 155, 162, 155, 143, 147, 143, 130, 137, 125, 127, 126, 123, 121,
  120, 121, 116, 116, 123, 109, 114, 109, 102, 103, 108, 94, 101, 103, 95, 103, 104, 104, 105, 108,
  105, 102, 110, 103, 102, 112, 106, 111, 118, 113, 119, 123, 122, 128, 132, 133, 137, 138, 140, 143,
  148, 149, 149, 156, 152, 159, 159, 156, 161, 156, 156, 156, 153, 152, 148, 146, 143, 135, 136, 131,
  126, 129, 124, 125, 125, 125, 120, 122, 120, 114, 119, 114, 112, 115, 111, 110, 114, 110, 110, 114,
  113, 113, 117, 116, 112, 118, 121, 114, 123, 120, 118, 124, 117, 122, 121, 123, 120, 124, 126, 127,
  126, 129, 127, 129, 130, 132, 132, 138, 137, 140, 138, 140, 143, 140, 142, 144, 142, 142, 143, 141,
  139, 139, 135, 134, 133, 133, 130, 130, 131, 126, 128, 124, 124, 124, 119, 122, 121, 117, 121, 118,
  118, 121, 117, 120, 118, 120, 120, 121, 123, 120, 126, 123, 123, 127, 125, 127, 130, 125, 130, 127,
  128, 127, 128, 130, 127, 130, 130, 128, 129, 129, 126, 130, 126, 130, 128, 131, 130, 131, 132, 134,
  127, 135, 130, 131, 133, 131, 134, 132, 132, 131, 128, 129, 128, 127, 128, 128, 124, 125, 125, 124,
  124, 124, 123, 123, 121, 124, 120, 126, 123, 126, 125, 125, 126, 125, 126, 127, 128, 127, 130, 128,
  130, 129, 130, 129, 129, 129, 129, 130, 130, 130, 129, 129, 128, 127, 127, 126, 127, 126, 127, 128,
  127, 128, 129, 130, 130, 130, 131, 127, 128, 128, 127, 129, 127, 127, 128, 127, 128, 126, 127, 127,
  125, 127, 126, 126, 127, 126, 127, 126, 125, 126, 125, 126, 125, 126, 127, 127, 126, 127, 126, 127,
  128, 128, 129, 129, 129, 129, 129, 128, 128, 130, 128, 130, 129, 128, 129, 129, 128, 129, 129, 129,
  128, 128, 129, 127, 127, 127, 127, 128, 127, 128, 128, 128, 129, 127, 128, 128, 127, 127, 127, 126,
  127, 125, 125, 125, 125, 126, 125, 126, 127, 126, 128, 127, 126, 127, 125, 126, 127, 127, 127, 127,
  128, 127, 128, 129, 129, 129, 129, 128, 129, 128, 128, 128, 127, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128
};

#endif

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_mot)
const uint8_t soDemData_mot_0[] PROGMEM = {
  128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 127, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 128,
  128, 128, 128, 128, 128, 128, 128, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129, 129,
  128, 128, 128, 128, 128, 128, 127, 127, 127, 127, 127, 126, 126, 126, 125, 125, 125, 125, 125, 125,
  124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 126, 126, 127, 127, 128, 128, 129, 130, 130, 131,
  132, 133, 133, 134, 135, 135, 136, 136, 137, 137, 137, 137, 137, 137, 136, 136, 135, 134, 133, 131,
  129, 128, 126, 124, 122, 120, 118, 116, 115, 113, 112, 111, 110, 109, 108, 108, 108, 108, 109, 109,
  111, 112, 113, 115, 117, 119, 122, 125, 128, 131, 134, 137, 140, 143, 147, 148, 152, 157, 160, 163,
  167, 167, 164, 164, 162, 158, 156, 153, 145, 138, 131, 122, 115, 112, 108, 105, 104, 102, 100, 100,
  101, 103, 106, 111, 113, 116, 118, 119, 121, 124, 125, 126, 126, 125, 123, 121, 118, 115, 113, 111,
  109, 108, 106, 105, 106, 108, 110, 113, 118, 121, 124, 129, 134, 139, 145, 150, 153, 157, 165, 171,
  173, 178, 179, 174, 173, 171, 165, 162, 158, 148, 139, 132, 121, 113, 109, 105, 102, 102, 100, 96,
  97, 98, 99, 104, 109, 113, 116, 120, 121, 123, 126, 129, 129, 131, 129, 125, 123, 119, 114, 110,
  107, 103, 101, 100, 97, 97, 99, 101, 104, 109, 113, 118, 123, 128, 133, 138, 145, 150, 154, 163,
  173, 175, 182, 186, 183, 182, 183, 178, 174, 173, 163, 152, 143, 133, 121, 116, 112, 105, 103, 101,
  95, 93, 94, 94, 96, 102, 106, 108, 113, 116, 118, 122, 126, 128, 130, 131, 129, 126, 123, 119,
  114, 110, 106, 102, 99, 96, 93, 93, 94, 96, 100, 105, 108, 113, 119, 124, 129, 136, 143, 147,
  154, 166, 172, 178, 187, 189, 186, 189, 188, 183, 183, 181, 171, 162, 154, 139, 130, 124, 117, 110,
  108, 103, 96, 95, 93, 92, 95, 100, 101, 105, 109, 111, 113, 119, 121, 123, 127, 127, 124, 123,
  120, 115, 113, 110, 104, 101, 97, 93, 91, 91, 91, 92, 97, 100, 103, 109, 114, 118, 125, 133,
  138, 145, 157, 167, 173, 184, 189, 188, 192, 195, 192, 192, 194, 186, 179, 171, 158, 146, 140, 131,
  122, 118, 111, 102, 98, 94, 89, 89, 92, 92, 95, 100, 102, 105, 111, 115, 118, 123, 126, 125,
  126, 125, 120, 118, 114, 109, 105, 101, 95, 91, 89, 88, 87, 90, 93, 96, 100, 104, 109, 115,
  122, 129, 136, 147, 160, 165, 177, 185, 186, 189, 196, 195, 196, 202, 196, 189, 185, 173, 160, 154,
  145, 134, 129, 122, 110, 104, 98, 91, 89, 90, 88, 89, 93, 94, 96, 103, 107, 111, 118, 123,
  123, 126, 126, 123, 122, 120, 116, 112, 108, 101, 95, 93, 89, 88, 89, 91, 91, 94, 98, 101,
  106, 114, 120, 125, 135, 150, 154, 164, 176, 179, 182, 191, 192, 192, 201, 200, 194, 194, 187, 172,
  167, 159, 147, 141, 136, 123, 115, 110, 99, 94, 94, 90, 88, 92, 91, 91, 99, 102, 105, 114,
  119, 120, 125, 127, 125, 126, 126, 122, 119, 115, 107, 101, 96, 90, 88, 88, 87, 87, 88, 89,
  91, 94, 98, 105, 113, 117, 129, 144, 147, 160, 171, 174, 179, 190, 191, 195, 206, 204, 201, 201,
  192, 177, 173, 161, 148, 145, 136, 123, 119, 112, 101, 98, 96, 90, 91, 94, 93, 97, 106, 109,
  118, 126, 129, 131, 134, 128, 125, 123, 117, 111, 107, 100, 91, 86, 79, 76, 80, 84, 87, 89,
  86, 84, 85, 88, 94, 102, 107, 116, 141, 157, 176, 199, 208, 210, 212, 210, 197, 200, 198, 189,
  184, 174, 152, 134, 121, 101, 93, 98, 99, 111, 126, 139, 146, 154, 149, 135, 128, 115, 110, 113,
  120, 125, 131, 132, 123, 116, 109, 104, 107, 114, 119, 123, 123, 111, 96, 81, 65, 57, 58, 66,
  76, 90, 98, 100, 101, 97, 95, 97, 99, 105, 112, 140, 169, 191, 227, 234, 235, 218, 207, 177,
  171, 170, 165, 167, 161, 139, 114, 95, 79, 76, 100, 124, 154, 179, 186, 180, 162, 139, 111, 100,
  91, 91, 101, 110, 117, 119, 123, 119, 123, 130, 135, 146, 149, 144, 131, 114, 91, 71, 58, 47,
  48, 55, 68, 82, 97, 106, 107, 109, 106, 104, 104, 102, 101, 99, 121, 153, 175, 218, 229, 234,
  217, 205, 174, 166, 167, 162, 166, 158, 137, 112, 97, 87, 91, 118, 145, 170, 189, 188, 175, 151,
  125, 99, 89, 83, 85, 97, 106, 114, 121, 128, 134, 141, 151, 153, 155, 148, 134, 116, 97, 81,
  67, 62, 58, 61, 68, 78, 90, 102, 111, 111, 110, 106, 98, 94, 88, 84, 81, 92, 138, 160,
  214, 241, 250, 238, 219, 185, 151, 150, 140, 147, 153, 144, 125, 113, 99, 98, 118, 146, 168, 195,
  195, 184, 160, 129, 97, 77, 70, 68, 82, 99, 114, 132, 140, 149, 150, 155, 152, 149, 143, 131,
  118, 101, 86, 74, 65, 64, 62, 69, 77, 91, 105, 118, 124, 120, 113, 100, 86, 78, 68, 70,
  74, 98, 149, 173, 229, 244, 252, 230, 209, 172, 146, 147, 142, 152, 154, 140, 121, 107, 97, 99,
  123, 153, 176, 200, 198, 183, 155, 122, 89, 71, 66, 68, 85, 104, 120, 136, 141, 146, 147, 149,
  151, 151, 148, 139, 123, 105, 84, 73, 63, 63, 66, 75, 87, 99, 111, 118, 122, 118, 109, 99,
  85, 81, 77, 75, 79, 85, 130, 156, 200, 234, 242, 245, 224, 199, 159, 154, 140, 139, 144, 138,
  124, 115, 101, 102, 112, 138, 158, 185, 191, 189, 171, 147, 117, 93, 76, 69, 71, 82, 96, 113,
  128, 141, 150, 157, 157, 158, 151, 144, 131, 115, 99, 84, 75, 70, 71, 75, 80, 88, 97, 108,
  117, 124, 124, 119, 110, 96, 86, 76, 69, 73, 80, 120, 153, 195, 237, 244, 247, 225, 203, 164,
  153, 141, 139, 144, 139, 124, 113, 96, 94, 100, 126, 148, 177, 190, 191, 179, 153, 124, 98, 80,
  70, 70, 81, 94, 110, 125, 138, 145, 152, 154, 154, 152, 146, 137, 123, 108, 91, 77, 68, 65,
  68, 74, 83, 94, 106, 117, 126, 128, 124, 117, 105, 97, 90, 82, 83, 82, 105, 145, 171, 219,
  232, 245, 229, 213, 179, 159, 150, 140, 141, 140, 124, 114, 99, 92, 92, 110, 131, 155, 177, 184,
  183, 167, 145, 121, 99, 85, 75, 77, 83, 97, 111, 126, 139, 147, 152, 152, 151, 146, 139, 131,
  120, 108, 95, 85, 75, 71, 70, 72, 80, 91, 105, 119, 130, 132, 127, 118, 103, 92, 85, 79,
  85, 92, 127, 156, 189, 224, 226, 230, 210, 195, 168, 162, 154, 149, 149, 138, 120, 107, 90, 87,
  92, 115, 136, 164, 178, 183, 176, 159, 136, 117, 100, 91, 87, 92, 97, 107, 114, 122, 128, 134,
  139, 144, 148, 148, 144, 136, 122, 107, 92, 82, 75, 76, 79, 84, 91, 98, 105, 112, 118, 119,
  118, 115, 109, 104, 96, 89, 90, 94, 124, 147, 179, 216, 223, 230, 213, 198, 169, 161, 150, 146,
  148, 140, 126, 114, 96, 90, 90, 106, 123, 150, 168, 180, 181, 169, 151, 130, 109, 96, 88, 89,
  92, 102, 110, 119, 126, 131, 136, 140, 144, 146, 143, 139, 129, 117, 104, 93, 84, 79, 78, 78,
  82, 88, 96, 106, 116, 123, 123, 122, 116, 107, 99, 90, 88, 88, 103, 136, 155, 196, 211, 222,
  214, 206, 187, 173, 168, 159, 156, 152, 137, 123, 104, 91, 81, 89, 103, 124, 148, 165, 174, 174,
  163, 148, 130, 116, 105, 101, 100, 103, 107, 113, 116, 120, 124, 128, 133, 137, 141, 140, 137, 129,
  119, 108, 97, 89, 83, 81, 79, 81, 85, 93, 104, 116, 124, 126, 126, 119, 110, 102, 92, 91,
  93, 111, 137, 158, 192, 204, 214, 205, 199, 182, 174, 171, 166, 164, 157, 141, 124, 103, 87, 77,
  83, 93, 116, 138, 156, 168, 170, 163, 151, 138, 123, 115, 111, 110, 113, 115, 116, 114, 114, 113,
  116, 123, 129, 138, 142, 143, 136, 127, 114, 102, 93, 88, 86, 86, 88, 90, 92, 97, 103, 111,
  116, 121, 122, 120, 115, 107, 102, 98, 103, 125, 139, 169, 187, 201, 201, 200, 189, 179, 175, 167,
  164, 160, 149, 137, 121, 107, 91, 87, 85, 93, 109, 127, 144, 158, 165, 163, 156, 144, 131, 122,
  115, 114, 117, 121, 121, 122, 119, 115, 113, 113, 116, 122, 129, 133, 134, 130, 121, 112, 102, 95,
  90, 89, 90, 94, 99, 104, 110, 114, 116, 117, 117, 116, 113, 109, 107, 106, 113, 128, 140, 161,
  173, 186, 187, 190, 183, 180, 175, 169, 164, 157, 149, 139, 128, 117, 106, 101, 96, 99, 104, 114,
  125, 137, 144, 148, 148, 144, 138, 131, 127, 124, 125, 126, 129, 129, 127, 123, 117, 113, 110, 111,
  114, 119, 122, 124, 123, 119, 113, 107, 102, 99, 97, 99, 103, 108, 113, 118, 121, 122, 123, 121,
  118, 115, 111, 108, 109, 118, 124, 136, 148, 157, 164, 169, 171, 170, 171, 168, 166, 163, 159, 152,
  147, 139, 131, 123, 116, 110, 108, 108, 110, 116, 122, 128, 132, 134, 134, 133, 131, 129, 129, 130,
  131, 133, 132, 130, 126, 122, 118, 116, 115, 116, 117, 118, 120, 120, 120, 119, 118, 116, 114, 113,
  112, 111, 112, 114, 116, 118, 120, 121, 121, 120, 117, 115, 112, 112, 113, 118, 122, 131, 137, 145,
  149, 155, 157, 160, 161, 161, 159, 158, 155, 152, 148, 143, 137, 130, 123, 118, 115, 113, 115, 118,
  121, 125, 127, 128, 128, 127, 126, 127, 127, 129, 130, 131, 130, 129, 127, 124, 122, 120, 120, 119,
  120, 121, 121, 122, 121, 121, 120, 120, 120, 120, 119, 120, 120, 120, 121, 122, 123, 124, 124, 124,
  124, 122, 120, 118, 117, 117, 118, 120, 124, 127, 131, 136, 139, 142, 145, 147, 148, 149, 148, 147,
  146, 144, 142, 140, 138, 134, 131, 127, 124, 122, 121, 121, 121, 122, 122, 123, 123, 123, 123, 123,
  123, 123, 125, 126, 127, 129, 130, 131, 131, 130, 129, 128, 126, 125, 124, 124, 124, 125, 125, 125,
  125, 125, 125, 124, 124, 125, 125, 126, 126, 127, 127, 127, 126, 125, 124, 122, 121, 120, 120, 120,
  120, 121, 123, 125, 126, 128, 130, 131, 132, 133, 134, 135, 136, 136, 136, 136, 135, 134, 133, 132,
  131, 131, 130, 129, 129, 128, 127, 126, 126, 125, 124, 124, 125, 125, 126, 127, 128, 128, 129, 129,
  129, 130, 130, 130, 130, 130, 130, 129, 128, 128, 128, 127, 127, 127, 126, 126, 125, 125, 125, 125,
  124, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 126, 126, 126, 127, 127, 127, 127,
  127, 127, 128, 128, 128, 129, 129, 129, 129, 129, 130, 130, 130, 130, 130, 129, 130, 130, 130, 129,
  129, 128, 128, 127, 128, 128, 128, 128, 127, 127, 127, 127, 127, 127, 127, 127, 128, 128, 128, 128,
  128, 128, 128, 128, 127, 127, 127, 127, 128, 128, 128, 128, 128, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 129, 129, 128, 128, 128, 127, 127, 128, 128, 128, 127, 127, 127,
  127, 127, 127, 127, 127, 127, 127, 127, 128, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 128,
  128, 128, 128, 127, 127, 127, 127, 127, 127, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128
};

#endif

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_khong)
const uint8_t soDemData_khong_0[] PROGMEM = {
  128, 128, 127, 128, 127, 128, 128, 127, 128, 127, 128, 127, 128, 127, 128, 128, 128, 128, 127, 127,
  128, 127, 127, 127, 128, 128, 128, 127, 127, 128, 128, 128, 127, 127, 127, 128, 128, 128, 127, 128,
  128, 128, 127, 127, 127, 128, 128, 128, 127, 127, 127, 127, 128, 128, 127, 127, 127, 128, 128, 127,
  128, 128, 128, 128, 127, 128, 127, 128, 127, 127, 128, 128, 128, 127, 127, 128, 128, 128, 127, 127,
  128, 128, 127, 126, 127, 128, 129, 128, 127, 127, 128, 129, 128, 126, 126, 128, 129, 128, 126, 126,
  127, 129, 129, 127, 126, 127, 127, 128, 128, 127, 127, 128, 128, 127, 127, 128, 127, 129, 126, 127,
  128, 127, 127, 127, 128, 128, 128, 128, 127, 127, 127, 128, 128, 126, 128, 126, 128, 127, 129, 129,
  126, 127, 128, 127, 128, 127, 128, 127, 127, 128, 128, 128, 127, 128, 127, 129, 128, 127, 125, 127,
  132, 129, 127, 127, 128, 128, 127, 127, 128, 128, 128, 127, 128, 127, 128, 126, 128, 127, 128, 127,
  126, 128, 127, 128, 129, 126, 128, 126, 129, 126, 127, 126, 127, 126, 126, 127, 130, 130, 125, 126,
  128, 128, 129, 126, 129, 129, 132, 132, 130, 127, 123, 125, 122, 123, 127, 129, 130, 128, 127, 127,
  130, 130, 130, 128, 128, 128, 127, 125, 125, 125, 126, 126, 127, 124, 128, 128, 127, 128, 129, 128,
  129, 126, 128, 127, 127, 126, 124, 130, 129, 127, 127, 126, 130, 129, 126, 125, 129, 134, 129, 124,
  124, 132, 133, 130, 123, 127, 131, 133, 127, 122, 123, 130, 136, 127, 119, 123, 133, 137, 127, 115,
  113, 126, 135, 132, 123, 117, 125, 132, 130, 128, 123, 126, 128, 128, 128, 125, 126, 129, 127, 130,
  128, 130, 130, 132, 130, 134, 129, 132, 128, 124, 122, 132, 128, 125, 123, 127, 134, 135, 129, 122,
  121, 131, 133, 132, 121, 121, 129, 131, 129, 124, 123, 124, 129, 131, 129, 130, 125, 125, 129, 132,
  127, 123, 122, 126, 131, 128, 125, 123, 130, 131, 133, 129, 127, 128, 132, 132, 132, 124, 125, 126,
  126, 129, 127, 120, 128, 126, 131, 132, 129, 126, 124, 126, 124, 122, 122, 121, 129, 125, 127, 131,
  130, 130, 130, 125, 129, 128, 129, 123, 123, 126, 132, 131, 131, 121, 125, 128, 139, 138, 132, 122,
  122, 127, 129, 125, 120, 121, 126, 129, 128, 125, 125, 129, 135, 138, 132, 122, 113, 119, 123, 128,
  124, 124, 124, 134, 138, 137, 132, 131, 128, 131, 132, 128, 125, 122, 126, 129, 132, 129, 128, 129,
  128, 129, 130, 130, 130, 124, 124, 126, 127, 130, 126, 123, 121, 125, 127, 129, 130, 122, 124, 127,
  135, 131, 127, 123, 124, 126, 132, 129, 131, 128, 129, 125, 131, 124, 128, 126, 127, 125, 129, 132,
  133, 129, 127, 126, 131, 131, 126, 122, 117, 120, 127, 129, 131, 125, 124, 125, 129, 131, 133, 128,
  128, 124, 127, 122, 122, 122, 125, 127, 126, 128, 125, 128, 132, 129, 126, 122, 126, 123, 124, 119,
  123, 124, 131, 134, 132, 131, 131, 133, 139, 138, 138, 134, 135, 135, 138, 132, 134, 136, 139, 136,
  144, 137, 133, 127, 126, 125, 129, 126, 126, 126, 119, 119, 115, 116, 118, 121, 114, 116, 110, 110,
  109, 109, 107, 107, 109, 113, 114, 115, 108, 112, 110, 112, 115, 117, 122, 129, 132, 137, 148, 157,
  167, 175, 163, 156, 160, 170, 182, 192, 172, 156, 136, 133, 140, 154, 148, 141, 120, 108, 111, 124,
  131, 123, 108, 93, 91, 106, 111, 105, 93, 84, 83, 94, 95, 87, 83, 87, 89, 102, 102, 94,
  90, 87, 90, 97, 114, 144, 174, 204, 209, 202, 182, 173, 159, 158, 156, 153, 154, 153, 151, 151,
  160, 163, 169, 164, 148, 135, 132, 123, 129, 129, 126, 124, 109, 102, 101, 108, 114, 119, 107, 95,
  89, 87, 91, 91, 87, 82, 80, 83, 88, 84, 81, 79, 80, 87, 99, 106, 161, 169, 214, 219,
  218, 180, 160, 140, 143, 164, 167, 164, 150, 135, 134, 155, 165, 176, 159, 139, 113, 118, 122, 147,
  153, 146, 120, 106, 99, 120, 137, 137, 128, 115, 106, 104, 103, 97, 96, 93, 90, 83, 72, 67,
  72, 69, 72, 69, 71, 83, 95, 107, 170, 179, 225, 228, 215, 175, 153, 129, 134, 158, 154, 153,
  142, 130, 137, 162, 169, 176, 158, 138, 121, 127, 126, 142, 141, 136, 127, 115, 116, 128, 136, 136,
  135, 123, 117, 114, 109, 101, 98, 87, 88, 83, 78, 73, 65, 57, 56, 61, 71, 81, 89, 110,
  174, 196, 240, 236, 203, 169, 149, 129, 145, 156, 149, 141, 128, 119, 134, 160, 172, 181, 161, 141,
  127, 129, 129, 139, 129, 128, 123, 122, 127, 136, 136, 136, 132, 125, 120, 120, 114, 107, 98, 88,
  85, 83, 78, 73, 63, 51, 53, 52, 62, 69, 84, 128, 193, 215, 251, 230, 197, 161, 148, 125,
  151, 146, 142, 123, 112, 104, 137, 160, 179, 181, 159, 138, 133, 132, 136, 146, 133, 126, 116, 115,
  127, 143, 145, 146, 135, 123, 120, 120, 120, 118, 106, 90, 80, 70, 67, 68, 64, 55, 54, 42,
  46, 63, 94, 167, 206, 239, 242, 211, 175, 157, 143, 143, 157, 140, 127, 108, 96, 104, 142, 160,
  183, 175, 156, 137, 137, 134, 150, 149, 140, 129, 116, 112, 122, 135, 141, 149, 138, 131, 124, 122,
  121, 122, 108, 95, 78, 63, 58, 57, 57, 57, 50, 42, 45, 63, 107, 184, 211, 252, 230, 204,
  164, 160, 135, 161, 152, 141, 111, 94, 75, 103, 131, 163, 181, 178, 156, 146, 142, 150, 162, 157,
  146, 128, 107, 102, 109, 126, 140, 150, 144, 139, 130, 126, 127, 127, 118, 106, 83, 63, 55, 49,
  47, 51, 44, 41, 44, 62, 121, 174, 219, 247, 233, 206, 180, 163, 148, 165, 148, 137, 106, 83,
  66, 93, 112, 152, 169, 174, 161, 160, 153, 167, 174, 173, 160, 134, 107, 95, 97, 110, 129, 139,
  141, 138, 132, 132, 135, 134, 131, 115, 93, 71, 55, 42, 40, 35, 31, 31, 40, 69, 133, 171,
  224, 231, 232, 206, 196, 171, 178, 170, 158, 133, 102, 68, 61, 71, 96, 128, 149, 158, 160, 160,
  165, 182, 191, 194, 179, 152, 123, 101, 92, 100, 112, 121, 126, 124, 121, 124, 126, 134, 136, 128,
  113, 94, 71, 54, 41, 31, 21, 25, 38, 78, 116, 166, 199, 213, 213, 210, 200, 198, 201, 193,
  178, 149, 113, 79, 67, 60, 79, 95, 114, 127, 139, 145, 160, 174, 191, 200, 199, 182, 161, 134,
  116, 105, 104, 104, 106, 104, 103, 104, 107, 113, 120, 123, 121, 111, 98, 84, 71, 55, 46, 42,
  50, 71, 95, 128, 151, 173, 188, 197, 196, 204, 205, 203, 195, 181, 156, 134, 111, 96, 87, 83,
  84, 92, 102, 113, 130, 148, 165, 180, 184, 182, 177, 167, 155, 144, 134, 123, 113, 102, 92, 86,
  87, 91, 98, 101, 103, 100, 96, 90, 84, 79, 72, 71, 78, 88, 100, 121, 138, 152, 165, 177,
  182, 190, 192, 192, 187, 179, 167, 158, 144, 131, 118, 107, 94, 91, 92, 99, 115, 134, 150, 162,
  163, 158, 153, 147, 143, 143, 144, 139, 130, 118, 104, 94, 90, 94, 102, 108, 111, 111, 106, 99,
  92, 84, 77, 75, 77, 84, 92, 106, 121, 133, 146, 158, 165, 174, 179, 180, 179, 177, 171, 167,
  164, 156, 149, 138, 126, 115, 110, 109, 118, 131, 143, 153, 155, 150, 143, 134, 127, 122, 121, 118,
  115, 109, 104, 100, 100, 102, 106, 111, 112, 112, 110, 108, 105, 102, 99, 94, 89, 88, 91, 93,
  105, 116, 128, 143, 157, 164, 172, 176, 173, 172, 170, 164, 163, 161, 155, 150, 144, 132, 127, 124,
  122, 129, 136, 143, 148, 150, 147, 143, 136, 127, 121, 115, 109, 106, 103, 101, 102, 104, 105, 108,
  108, 107, 106, 104, 102, 101, 98, 94, 88, 84, 87, 87, 94, 108, 117, 129, 145, 153, 161, 174,
  175, 178, 182, 178, 174, 173, 166, 160, 157, 148, 143, 140, 136, 135, 138, 140, 142, 142, 139, 135,
  129, 123, 117, 112, 108, 105, 101, 100, 99, 100, 101, 102, 103, 103, 103, 102, 101, 99, 96, 90,
  84, 85, 91, 92, 102, 112, 117, 129, 139, 146, 160, 172, 177, 186, 188, 184, 181, 175, 168, 164,
  159, 153, 150, 146, 143, 141, 141, 141, 139, 137, 133, 128, 122, 117, 110, 106, 101, 98, 95, 94,
  94, 94, 96, 98, 99, 100, 101, 100, 99, 95, 92, 88, 88, 96, 97, 107, 117, 123, 130, 142,
  149, 160, 175, 179, 186, 188, 184, 179, 175, 168, 163, 160, 155, 151, 147, 143, 139, 138, 137, 134,
  133, 129, 124, 119, 113, 108, 105, 101, 99, 96, 95, 94, 95, 96, 98, 100, 101, 101, 100, 99,
  97, 94, 90, 91, 98, 102, 109, 120, 127, 132, 145, 150, 159, 172, 177, 182, 186, 182, 176, 174,
  166, 163, 160, 156, 152, 148, 145, 141, 140, 138, 136, 132, 129, 123, 117, 113, 107, 104, 101, 98,
  96, 95, 94, 94, 95, 97, 99, 101, 101, 102, 100, 99, 97, 94, 92, 95, 104, 106, 117, 126,
  130, 139, 148, 154, 163, 174, 177, 182, 183, 178, 174, 170, 165, 161, 159, 154, 151, 147, 144, 141,
  140, 138, 135, 131, 126, 120, 115, 111, 106, 103, 101, 98, 97, 95, 95, 95, 97, 99, 101, 103,
  103, 103, 102, 101, 98, 96, 94, 96, 106, 107, 116, 125, 130, 137, 147, 152, 160, 171, 172, 177,
  178, 175, 171, 169, 165, 162, 160, 155, 152, 148, 146, 143, 142, 139, 136, 132, 127, 121, 115, 112,
  107, 105, 102, 101, 99, 98, 97, 98, 99, 102, 103, 105, 105, 105, 104, 103, 102, 100, 99, 98,
  99, 107, 110, 118, 126, 131, 138, 146, 151, 157, 166, 168, 172, 173, 170, 167, 165, 163, 160, 159,
  155, 151, 148, 146, 143, 142, 140, 136, 132, 127, 122, 118, 114, 110, 108, 105, 103, 102, 101, 101,
  102, 103, 104, 106, 107, 108, 108, 107, 106, 105, 104, 103, 102, 100, 103, 109, 111, 118, 125, 130,
  134, 142, 146, 151, 159, 161, 164, 166, 165, 162, 162, 160, 159, 158, 155, 152, 149, 148, 145, 143,
  142, 137, 133, 128, 124, 118, 116, 113, 110, 109, 107, 106, 105, 106, 106, 108, 109, 109, 110, 111,
  111, 110, 110, 109, 108, 107, 106, 106, 105, 107, 113, 115, 119, 125, 128, 131, 137, 140, 143, 149,
  152, 154, 156, 157, 155, 156, 156, 155, 155, 153, 152, 150, 148, 146, 144, 142, 138, 134, 130, 126,
  122, 119, 117, 115, 114, 112, 112, 111, 111, 112, 112, 114, 115, 115, 115, 115, 114, 114, 114, 113,
  113, 113, 112, 112, 112, 112, 113, 116, 118, 120, 123, 125, 126, 129, 133, 134, 138, 141, 142, 145,
  147, 147, 148, 149, 149, 151, 151, 149, 149, 148, 146, 144, 143, 141, 138, 135, 131, 127, 124, 122,
  120, 120, 118, 116, 115, 115, 115, 116, 117, 117, 118, 119, 119, 119, 119, 119, 118, 118, 117, 117,
  117, 117, 117, 118, 118, 117, 118, 118, 119, 120, 121, 122, 123, 124, 126, 127, 130, 132, 134, 137,
  139, 140, 141, 143, 145, 145, 147, 146, 146, 146, 145, 144, 144, 143, 141, 140, 137, 135, 133, 130,
  128, 126, 124, 122, 121, 118, 117, 116, 115, 116, 116, 116, 117, 117, 117, 117, 117, 117, 118, 118,
  118, 119, 118, 118, 118, 119, 120, 121, 123, 123, 124, 124, 124, 125, 126, 127, 128, 129, 129, 130,
  130, 131, 133, 135, 136, 138, 139, 140, 141, 141, 141, 143, 143, 143, 143, 141, 140, 139, 138, 136,
  135, 134, 132, 130, 128, 126, 125, 123, 122, 120, 119, 118, 117, 116, 116, 116, 116, 116, 116, 117,
  117, 118, 117, 118, 119, 119, 120, 121, 122, 123, 123, 124, 124, 125, 126, 127, 128, 128, 129, 129,
  130, 130, 131, 132, 133, 133, 134, 135, 135, 136, 136, 136, 136, 136, 136, 136, 136, 135, 135, 134,
  134, 133, 133, 132, 131, 130, 129, 128, 127, 127, 126, 125, 125, 124, 123, 123, 122, 122, 122, 121,
  121, 121, 121, 121, 121, 121, 121, 121, 122, 122, 122, 123, 123, 124, 124, 125, 125, 126, 126, 127,
  128, 128, 129, 129, 130, 130, 131, 131, 131, 132, 132, 132, 132, 132, 132, 133, 132, 132, 132, 132,
  132, 132, 131, 131, 130, 130, 130, 129, 129, 128, 128, 127, 127, 127, 127, 126, 126, 125, 125, 125,
  124, 124, 124, 124, 124, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 125, 125, 125, 126, 126,
  127, 127, 127, 128, 128, 129, 129, 129, 130, 130, 130, 131, 131, 131, 131, 131, 131, 131, 131, 131,
  131, 131, 131, 130, 130, 130, 130, 129, 129, 129, 128, 128, 128, 127, 127, 127, 126, 126, 126, 125,
  125, 125, 125, 125, 124, 124, 124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 126, 126, 126,
  127, 127, 127, 128, 128, 128, 129, 129, 129, 130, 130, 130, 130, 130, 130, 130, 131, 131, 131, 130,
  130, 130, 130, 130, 130, 130, 129, 129, 129, 129, 128, 128, 128, 127, 127, 127, 127, 126, 126, 126,
  126, 126, 126, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126,
  127, 127, 127, 127, 128, 128, 128, 128, 129, 129, 129, 129, 129, 130, 130, 130, 130, 130, 130, 130,
  130, 130, 130, 130, 130, 130, 129, 129, 129, 129, 128, 128, 128, 128, 127, 127, 127, 127, 127, 126,
  126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 128
};

#endif

#if defined(SO_DEM_INCLUDE_ALL) || defined(SO_DEM_ONLY_cham)
const uint8_t soDemData_cham_0[] PROGMEM = {
  128, 127, 128, 127, 127, 127, 128, 128, 127, 127, 127, 128, 128, 127, 128, 128, 127, 128, 127, 128,
  127, 128, 128, 128, 128, 128, 128, 128, 127, 128, 127, 127, 127, 127, 127, 128, 128, 127, 127, 128,
  128, 128, 128, 128, 128, 128, 127, 127, 127, 127, 127, 128, 128, 128, 128, 128, 128, 128, 127, 128,
  127, 128, 128, 128, 127, 128, 128, 128, 128, 128, 128, 127, 127, 127, 127, 128, 128, 127, 127, 128,
  128, 127, 127, 127, 127, 127, 127, 127, 127, 128, 128, 127, 127, 127, 127, 127, 128, 128, 127, 128,
  127, 127, 128, 129, 125, 127, 127, 128, 128, 126, 129, 127, 128, 127, 125, 127, 126, 129, 127, 128,
  128, 128, 127, 129, 129, 128, 131, 131, 129, 128, 126, 129, 127, 128, 128, 127, 126, 126, 125, 125,
  128, 127, 128, 125, 127, 130, 127, 127, 128, 128, 125, 127, 129, 129, 126, 125, 128, 128, 131, 129,
  124, 124, 134, 130, 128, 129, 125, 125, 127, 126, 128, 131, 129, 132, 131, 127, 129, 126, 123, 127,
  129, 131, 130, 127, 128, 128, 127, 127, 123, 127, 129, 127, 126, 130, 131, 132, 128, 131, 128, 127,
  130, 125, 123, 125, 126, 128, 128, 129, 128, 126, 127, 125, 130, 130, 125, 129, 124, 128, 124, 129,
  129, 128, 122, 132, 131, 125, 130, 129, 129, 125, 128, 131, 129, 125, 130, 127, 122, 130, 133, 123,
  127, 127, 125, 123, 124, 123, 122, 124, 124, 127, 131, 124, 124, 129, 129, 127, 127, 127, 130, 133,
  121, 129, 132, 128, 135, 123, 128, 127, 129, 128, 130, 128, 132, 127, 127, 128, 129, 126, 124, 131,
  124, 133, 125, 128, 128, 133, 128, 132, 131, 134, 133, 125, 127, 122, 126, 128, 120, 127, 127, 125,
  131, 129, 131, 126, 128, 124, 131, 126, 128, 127, 129, 123, 130, 131, 127, 125, 128, 132, 126, 131,
  128, 127, 134, 126, 127, 127, 122, 129, 128, 127, 128, 125, 130, 125, 127, 127, 126, 128, 122, 133,
  129, 130, 125, 132, 124, 132, 126, 132, 123, 131, 126, 125, 132, 128, 132, 129, 131, 130, 128, 131,
  127, 123, 119, 123, 118, 108, 108, 107, 111, 100, 114, 109, 129, 126, 144, 143, 157, 161, 172, 166,
  169, 162, 163, 151, 149, 140, 135, 127, 128, 119, 116, 115, 117, 114, 111, 111, 115, 107, 105, 99,
  94, 91, 84, 69, 70, 64, 106, 87, 105, 126, 147, 142, 163, 166, 185, 159, 175, 164, 160, 134,
  135, 124, 115, 99, 110, 109, 113, 125, 143, 158, 168, 183, 196, 190, 187, 190, 177, 162, 151, 141,
  127, 111, 102, 94, 85, 79, 82, 77, 74, 76, 69, 71, 64, 45, 55, 58, 128, 81, 123, 161,
  179, 157, 189, 177, 203, 158, 163, 165, 139, 105, 114, 99, 99, 82, 94, 117, 127, 132, 156, 171,
  193, 194, 193, 196, 183, 175, 163, 138, 135, 115, 112, 114, 111, 120, 127, 127, 132, 124, 119, 113,
  96, 82, 66, 51, 42, 17, 3, 9, 54, 133, 101, 177, 212, 240, 214, 216, 197, 197, 129, 110,
  98, 75, 52, 69, 80, 110, 121, 147, 188, 198, 188, 193, 188, 179, 150, 126, 109, 109, 101, 109,
  129, 158, 169, 181, 181, 178, 163, 148, 137, 126, 116, 96, 76, 67, 53, 44, 41, 47, 68, 67,
  55, 60, 89, 200, 161, 160, 197, 210, 176, 142, 100, 136, 109, 75, 89, 107, 125, 145, 141, 164,
  187, 165, 156, 150, 135, 128, 119, 111, 132, 144, 131, 139, 164, 166, 170, 154, 168, 179, 145, 133,
  137, 132, 128, 126, 125, 130, 116, 93, 88, 78, 64, 57, 49, 65, 68, 51, 38, 49, 127, 221,
  146, 187, 204, 216, 164, 116, 91, 130, 104, 85, 93, 133, 151, 171, 150, 169, 171, 146, 137, 131,
  109, 116, 118, 137, 149, 150, 143, 139, 158, 155, 150, 137, 170, 173, 150, 134, 130, 136, 137, 127,
  123, 124, 119, 103, 81, 74, 72, 73, 67, 65, 63, 60, 30, 26, 99, 241, 190, 198, 181, 215,
  176, 129, 47, 71, 102, 112, 101, 125, 157, 206, 193, 166, 138, 127, 123, 115, 86, 79, 113, 157,
  180, 166, 145, 155, 163, 153, 141, 123, 141, 177, 157, 139, 136, 135, 142, 143, 127, 126, 127, 117,
  97, 75, 64, 72, 74, 70, 59, 52, 51, 34, 61, 188, 239, 213, 183, 171, 144, 145, 86, 39,
  64, 114, 148, 162, 166, 166, 192, 187, 144, 98, 85, 96, 119, 111, 104, 124, 182, 202, 180, 140,
  132, 136, 149, 138, 124, 142, 164, 172, 153, 133, 126, 138, 143, 137, 122, 112, 107, 95, 83, 72,
  71, 74, 71, 60, 55, 51, 43, 73, 205, 231, 227, 181, 148, 116, 140, 96, 60, 69, 109, 155,
  193, 181, 157, 163, 165, 142, 108, 80, 83, 118, 128, 128, 139, 177, 189, 182, 148, 124, 116, 133,
  147, 147, 139, 146, 152, 152, 151, 133, 128, 137, 138, 132, 117, 97, 90, 93, 86, 80, 73, 65,
  65, 60, 45, 41, 76, 203, 230, 233, 177, 137, 105, 133, 103, 77, 71, 99, 144, 192, 188, 167,
  155, 150, 144, 127, 98, 83, 97, 114, 138, 161, 179, 175, 166, 151, 143, 134, 136, 139, 137, 139,
  147, 148, 151, 147, 138, 136, 136, 130, 125, 111, 97, 92, 88, 88, 90, 80, 73, 66, 59, 45,
  41, 98, 177, 205, 217, 179, 140, 125, 132, 108, 100, 80, 94, 126, 169, 173, 176, 154, 151, 145,
  140, 118, 109, 98, 110, 128, 156, 165, 168, 153, 146, 145, 154, 151, 148, 132, 130, 134, 146, 150,
  148, 137, 131, 128, 129, 126, 115, 104, 94, 90, 94, 95, 89, 84, 75, 58, 41, 38, 89, 137,
  179, 192, 182, 157, 150, 139, 127, 114, 101, 100, 115, 134, 144, 154, 152, 152, 150, 147, 140, 137,
  123, 119, 121, 135, 142, 148, 137, 139, 142, 155, 162, 158, 143, 134, 131, 139, 146, 144, 137, 131,
  127, 129, 130, 125, 117, 109, 103, 104, 105, 104, 105, 102, 93, 76, 59, 62, 81, 101, 125, 138,
  136, 136, 140, 139, 145, 146, 143, 140, 141, 134, 136, 135, 136, 136, 138, 134, 136, 136, 135, 136,
  138, 140, 142, 140, 136, 130, 126, 125, 131, 134, 136, 134, 133, 131, 134, 134, 135, 137, 135, 135,
  133, 131, 129, 127, 127, 126, 127, 126, 131, 132, 131, 125, 114, 104, 99, 101, 102, 102, 98, 93,
  92, 95, 101, 107, 114, 119, 124, 129, 134, 139, 141, 142, 141, 142, 143, 143, 143, 141, 140, 143,
  147, 150, 151, 147, 141, 137, 137, 137, 138, 134, 130, 129, 128, 129, 130, 129, 128, 129, 130, 131,
  130, 128, 127, 127, 132, 137, 138, 135, 129, 121, 110, 106, 109, 105, 106, 103, 97, 92, 96, 95,
  100, 106, 107, 112, 117, 120, 126, 132, 135, 139, 140, 139, 140, 140, 139, 141, 144, 149, 153, 153,
  151, 146, 144, 144, 144, 144, 143, 140, 136, 133, 131, 131, 130, 131, 131, 130, 130, 129, 131, 132,
  132, 132, 133, 134, 133, 129, 115, 106, 103, 104, 103, 103, 96, 86, 86, 84, 89, 99, 104, 109,
  112, 116, 118, 126, 132, 137, 140, 141, 142, 143, 143, 143, 146, 151, 155, 154, 154, 150, 149, 150,
  153, 151, 150, 147, 143, 141, 140, 139, 136, 134, 133, 132, 133, 133, 132, 130, 129, 128, 129, 125,
  117, 99, 89, 89, 89, 90, 91, 84, 76, 77, 78, 85, 103, 107, 116, 120, 123, 126, 134, 142,
  148, 153, 153, 154, 151, 151, 153, 158, 164, 165, 162, 159, 154, 153, 153, 152, 151, 147, 144, 140,
  137, 132, 130, 129, 129, 128, 126, 123, 120, 120, 118, 115, 110, 96, 85, 80, 86, 81, 85, 80,
  75, 77, 83, 90, 105, 117, 124, 129, 134, 136, 143, 150, 158, 163, 162, 159, 155, 155, 157, 161,
  166, 166, 163, 160, 154, 150, 149, 147, 148, 143, 138, 133, 127, 124, 124, 122, 122, 120, 116, 114,
  113, 110, 104, 96, 83, 79, 85, 84, 86, 85, 81, 79, 89, 94, 106, 123, 128, 136, 138, 140,
  142, 150, 158, 163, 166, 164, 161, 158, 159, 162, 166, 171, 168, 162, 158, 152, 148, 146, 143, 141,
  136, 128, 123, 117, 114, 111, 110, 109, 106, 104, 101, 96, 90, 78, 75, 80, 85, 85, 88, 86,
  85, 92, 100, 112, 130, 137, 144, 145, 149, 149, 158, 163, 171, 175, 173, 169, 162, 162, 162, 168,
  171, 169, 163, 155, 146, 141, 138, 136, 134, 127, 118, 114, 107, 104, 102, 100, 100, 98, 95, 90,
  84, 75, 74, 83, 83, 87, 89, 90, 89, 99, 105, 116, 133, 139, 148, 149, 155, 155, 163, 169,
  175, 179, 177, 174, 167, 169, 169, 171, 172, 167, 160, 154, 146, 138, 135, 129, 125, 120, 114, 107,
  101, 96, 92, 90, 89, 84, 80, 72, 71, 78, 79, 79, 84, 86, 89, 101, 106, 115, 129, 135,
  144, 149, 156, 158, 165, 170, 176, 180, 180, 178, 175, 177, 175, 173, 172, 168, 163, 155, 147, 138,
  132, 127, 122, 116, 109, 102, 96, 92, 89, 84, 80, 73, 70, 77, 76, 77, 80, 81, 83, 94,
  100, 109, 123, 129, 136, 142, 149, 151, 160, 167, 174, 178, 178, 176, 174, 176, 173, 175, 175, 171,
  165, 156, 148, 141, 136, 131, 127, 119, 111, 104, 97, 92, 87, 78, 74, 74, 78, 74, 77, 78,
  78, 84, 91, 96, 110, 120, 125, 132, 139, 142, 150, 156, 167, 173, 176, 176, 174, 174, 175, 176,
  176, 175, 169, 163, 154, 147, 142, 135, 129, 123, 116, 110, 102, 93, 85, 77, 74, 80, 73, 75,
  76, 73, 77, 82, 87, 98, 109, 115, 124, 129, 135, 141, 149, 161, 168, 175, 176, 176, 176, 178,
  179, 180, 181, 176, 171, 164, 156, 148, 141, 136, 129, 123, 116, 106, 97, 85, 77, 78, 77, 73,
  73, 71, 69, 74, 76, 82, 94, 101, 110, 117, 124, 128, 137, 148, 160, 168, 171, 174, 174, 179,
  180, 182, 184, 183, 179, 172, 166, 158, 151, 145, 138, 130, 124, 112, 103, 91, 82, 82, 82, 74,
  74, 73, 69, 74, 76, 81, 92, 99, 107, 114, 122, 125, 135, 146, 157, 165, 168, 169, 171, 177,
  177, 180, 180, 180, 176, 169, 162, 154, 147, 140, 135, 128, 118, 107, 94, 85, 85, 82, 76, 76,
  75, 71, 76, 77, 81, 93, 99, 109, 115, 122, 126, 135, 147, 158, 165, 168, 169, 172, 178, 180,
  181, 181, 179, 176, 169, 161, 155, 146, 141, 134, 125, 114, 101, 89, 85, 88, 76, 76, 74, 71,
  73, 76, 78, 85, 95, 100, 108, 115, 121, 129, 139, 153, 158, 162, 165, 169, 174, 177, 179, 179,
  179, 176, 170, 162, 157, 151, 143, 137, 128, 117, 106, 95, 89, 93, 83, 82, 80, 77, 80, 81,
  84, 92, 100, 106, 111, 118, 124, 132, 141, 152, 156, 161, 163, 165, 171, 173, 173, 173, 171, 167,
  161, 154, 148, 140, 134, 126, 117, 107, 96, 90, 93, 85, 83, 83, 80, 83, 86, 87, 94, 103,
  107, 113, 120, 126, 135, 143, 152, 157, 161, 164, 167, 171, 175, 173, 171, 171, 167, 159, 154, 147,
  139, 132, 123, 115, 107, 99, 93, 94, 86, 86, 86, 84, 87, 91, 92, 99, 106, 109, 115, 124,
  129, 135, 142, 149, 153, 156, 161, 162, 166, 167, 162, 164, 162, 156, 150, 145, 137, 131, 125, 116,
  110, 104, 99, 99, 95, 92, 94, 94, 95, 101, 101, 105, 114, 117, 123, 129, 136, 139, 145, 152,
  154, 158, 160, 160, 160, 163, 159, 156, 154, 148, 142, 136, 128, 121, 117, 110, 104, 98, 95, 95,
  92, 90, 93, 95, 97, 101, 104, 109, 118, 122, 126, 133, 140, 145, 150, 156, 157, 160, 162, 162,
  161, 161, 157, 152, 150, 145, 137, 132, 125, 118, 114, 109, 105, 99, 97, 98, 97, 96, 99, 100,
  101, 108, 111, 114, 122, 127, 131, 136, 144, 146, 149, 156, 156, 157, 157, 156, 154, 154, 152, 145,
  142, 136, 129, 123, 119, 113, 108, 105, 101, 97, 99, 100, 100, 100, 104, 105, 109, 115, 118, 121,
  129, 134, 138, 143, 146, 149, 154, 157, 156, 157, 155, 153, 152, 149, 146, 140, 134, 129, 125, 119,
  114, 110, 106, 104, 101, 99, 100, 102, 102, 107, 108, 111, 114, 118, 123, 128, 132, 135, 141, 144,
  147, 149, 151, 152, 153, 152, 150, 148, 144, 141, 138, 133, 130, 125, 119, 115, 113, 109, 106, 104,
  104, 104, 105, 106, 107, 111, 115, 118, 121, 125, 129, 134, 137, 140, 143, 146, 149, 150, 151, 151,
  150, 149, 147, 145, 140, 137, 133, 129, 125, 120, 116, 113, 110, 108, 106, 105, 104, 105, 107, 109,
  111, 113, 117, 121, 124, 127, 129, 133, 136, 141, 142, 144, 146, 146, 148, 148, 147, 145, 143, 140,
  137, 134, 130, 128, 125, 121, 117, 114, 113, 112, 111, 111, 110, 111, 113, 114, 117, 120, 122, 125,
  127, 130, 132, 134, 136, 138, 140, 141, 141, 141, 142, 141, 140, 138, 135, 133, 131, 129, 126, 123,
  120, 119, 117, 117, 116, 115, 115, 115, 117, 118, 119, 121, 123, 125, 127, 129, 130, 132, 133, 135,
  135, 136, 136, 136, 136, 136, 135, 133, 133, 132, 131, 129, 128, 126, 125, 124, 123, 122, 122, 122,
  122, 122, 122, 123, 123, 124, 125, 125, 126, 127, 127, 128, 129, 129, 130, 131, 131, 131, 131, 131,
  131, 131, 130, 130, 129, 128, 128, 127, 127, 127, 127, 127, 126, 126, 126, 126, 126, 126, 126, 126,
  126, 126, 126, 126, 126, 127, 128, 128, 128, 128, 128, 129, 129, 129, 129, 129, 129, 129, 128, 128,
  128, 128, 128, 128, 128, 127, 127, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 127, 128, 127, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 127, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128, 128, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
  127, 127, 127, 127, 127, 127, 127, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,
  128
};
#endif

#endif

#endif
