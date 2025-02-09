/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#define IGNORE_MOD_TAP_INTERRUPT
#define USB_SUSPEND_WAKEUP_DELAY 0
#define FIRMWARE_VERSION u8"KZoDp/Gj53g"
#define RAW_USAGE_PAGE 0xFF60
#define RAW_USAGE_ID 0x61
#define RGB_MATRIX_STARTUP_SPD 60
#define TAPPING_TERM 500
#define LEADER_TIMEOUT 300
#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD