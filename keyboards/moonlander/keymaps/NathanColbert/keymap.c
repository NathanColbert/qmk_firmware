#include QMK_KEYBOARD_H
#include "g/keymap_combo.h"

#define KC_MAC_UNDO RGUI(KC_Z)
#define KC_MAC_CUT RGUI(KC_X)
#define KC_MAC_COPY RGUI(KC_C)
#define KC_MAC_PASTE RGUI(KC_V)
#define KC_MAC_ALL RGUI(KC_A)
#define VS_GO_TO_FILE LGUI(KC_P)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  PARENS,
  QUOTES,
  UNDERDASH,
  COLON_SEMI,
  CMD_P_0,
  DEF_TO_SIDE,
  CLOSE,
  TERMINAL_0,
  EDITOR_LEFT,
  EDITOR_RIGHT,
  FIND_REP_0,
  QUICK_FIX_0,
  OCCURENCES_0,
  ZEN_0,
  SIDEBAR_0,
  COMMAQ,
  DOTX,
  SLASHES,
  ONELESS,
  TWOMORE,
  ABSPACE_0,
  PIPET,
  G_0,
  B_0,
  V_0,
  M_0,
  K_0,
  J_0,
  Q_0,
  Z_0,
};


// TODO:
// add `,~  and |
// capsword
// screenshot
// command up
// command down
// slack commands
// path to 0 in layer 1
// path to 0 in layer 2
// path to 1 with out osl?
// COMBO esc
// shift and command numbers one shot
// swap out V?
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_NO,  KC_NO, KC_NO,             KC_NO,                  KC_NO,              KC_NO,                  KC_NO,      KC_NO, KC_NO,              KC_NO,                  KC_NO,        KC_NO, KC_NO, KC_NO,
    // Start used rows
    KC_NO,           KC_NO,           KC_L,                   KC_U,               KC_Y,                   KC_NO,      KC_NO, KC_NO,   KC_NO, KC_W,               KC_F,                   KC_P,                KC_NO,  KC_NO,        
    KC_NO,           KC_NO,           MT(MOD_RGUI, KC_N),     MT(MOD_RALT, KC_E), MT(MOD_RCTL, KC_I),     KC_NO,      KC_NO, KC_NO,   KC_NO, MT(MOD_LCTL, KC_R), MT(MOD_LALT, KC_S),     MT(MOD_LGUI, KC_T),  KC_NO,  KC_NO,        
    OSM(MOD_RSFT),   MEH_T(KC_SPACE), KC_H,                   COMMAQ,             DOTX,                   KC_O,                       KC_A,  KC_X,               KC_C,                   KC_D,                OSL(1), OSM(MOD_LSFT),        
    // Thumb cluster
    KC_NO,           KC_NO,           KC_NO,                  KC_NO,              KC_NO,                  KC_NO,                      KC_NO, KC_NO,              KC_NO,                  KC_NO,               KC_NO,  KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO        
  ),
  [1] = LAYOUT_moonlander(
    KC_NO, KC_NO, KC_NO,  KC_NO, KC_NO, KC_NO,KC_NO, KC_NO,KC_NO,KC_NO,KC_NO, KC_NO, KC_NO, KC_NO,
    // Start used rows
    KC_NO,       KC_NO,          LSFT(KC_3), LSFT(KC_2),  PIPET,      KC_NO,      KC_NO,  KC_NO,  KC_NO,      SLASHES,    PARENS,     QUOTES,      KC_NO,   KC_NO, 
    KC_NO,       KC_NO,          M_0,         KC_BSPACE,  J_0,        KC_NO,      KC_NO,  KC_NO,  KC_NO,      V_0,        B_0,        G_0,         KC_NO,   KC_NO, 
    KC_NO,       KC_NO,          KC_LEFT,     KC_RIGHT,   Z_0,        Q_0,                        K_0,       KC_EQUAL,    UNDERDASH,  COLON_SEMI,  TO(0),   KC_ESC, 
    // Thumb cluster
    KC_NO,       KC_NO,          KC_NO,         KC_NO,         KC_NO,    KC_NO,                      KC_NO,      KC_NO,      KC_NO,      KC_NO,       KC_NO,   KC_NO,
    KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO
  ),
  [2] = LAYOUT_moonlander(
    KC_NO, KC_NO, KC_NO,      KC_NO,      KC_NO,  KC_NO,                        KC_NO, KC_NO, KC_NO,    KC_NO,  KC_NO, KC_NO,  KC_NO,  KC_NO,
    // Start used rows
    KC_NO,          KC_NO,          KC_1,   KC_2,   KC_3,   KC_NO,  KC_NO,  KC_NO,  KC_NO,      KC_NO,        DEF_TO_SIDE,  CMD_P_0,    KC_NO,          KC_NO, 
    KC_NO,          KC_NO,          KC_4,   KC_5,   KC_6,   KC_NO,  KC_NO,  KC_NO,  KC_NO,      KC_NO,        KC_NO,        TERMINAL_0, KC_NO,          KC_NO, 
    OSM(MOD_RGUI),  OSM(MOD_RSFT),  KC_7,   KC_8,   KC_9,   KC_0,                   ZEN_0,      OCCURENCES_0, KC_NO,        FIND_REP_0, KC_NO,          KC_NO, 
    // Thumb cluster
    KC_NO,          KC_NO,          KC_NO,  KC_NO,  KC_NO,  KC_NO,                  KC_NO,      KC_NO,        KC_NO,        KC_NO,      KC_NO,          KC_NO,
    KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO
  ),
  [3] = LAYOUT_moonlander(
    KC_NO, KC_NO, KC_NO,  KC_NO, KC_NO, KC_NO,KC_NO, KC_NO,KC_NO,KC_NO,KC_NO, KC_NO, KC_NO, KC_NO,
    // Start used rows
    KC_NO,          KC_NO,         KC_MAC_PASTE,  KC_UP,    KC_MAC_COPY,  KC_NO,    KC_NO,  KC_NO,  KC_NO,      KC_NO,    KC_NO,      KC_NO,       KC_NO,   KC_NO, 
    KC_NO,          KC_NO,         KC_LEFT,       KC_DOWN,  KC_RIGHT,     KC_NO,    KC_NO,  KC_NO,  KC_NO,      KC_LCTL,    KC_LALT,  KC_LSFT,     KC_NO,    KC_NO, 
    OSM(MOD_RGUI),  KC_BSPACE,     RSFT(KC_TAB),  KC_BTN1,  KC_TAB,        KC_NO,                    KC_NO,      KC_NO,    KC_NO,      KC_NO,      OSM(MOD_LALT),   KC_NO, 
    // Thumb cluster
    KC_NO,       KC_NO,          KC_NO,         KC_NO,         KC_NO,    KC_NO,                      KC_NO,      KC_NO,      KC_NO,      KC_NO,    KC_NO,   KC_NO,
    KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO
  ),
};


extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },
    [1] = { {0,150,125}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },
    [2] = { {255,100,70}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },
    [3] = { {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  const uint8_t mods = get_mods();
  const uint8_t oneshot_mods = get_oneshot_mods();

  switch (keycode) {
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(2);
      }
      return false;
    case PIPET:
      if (record->event.pressed) {
        if ((mods | oneshot_mods) & MOD_MASK_SHIFT) {  // Is shift held?
          del_mods(MOD_MASK_SHIFT);  // Temporarily delete shift.
          del_oneshot_mods(MOD_MASK_SHIFT);
          SEND_STRING("|");
          layer_clear();
          set_mods(mods);            // Restore mods.
        } else {
          SEND_STRING("~");
          layer_clear();
        }
        return false;
      }
    case UNDERDASH:
      if (record->event.pressed) {
        if ((mods | oneshot_mods) & MOD_MASK_SHIFT) {  // Is shift held?
          del_mods(MOD_MASK_SHIFT);  // Temporarily delete shift.
          del_oneshot_mods(MOD_MASK_SHIFT);
          SEND_STRING("-");
          layer_clear();
          set_mods(mods);            // Restore mods.
        } else {
          SEND_STRING("_");
          layer_clear();
        }
        return false;
      }
    case COLON_SEMI:
      if (record->event.pressed) {
        if ((mods | oneshot_mods) & MOD_MASK_SHIFT) {  // Is shift held?
          del_mods(MOD_MASK_SHIFT);  // Temporarily delete shift.
          del_oneshot_mods(MOD_MASK_SHIFT);
          SEND_STRING(";");
          layer_clear();
          set_mods(mods);            // Restore mods.
        } else {
          SEND_STRING(":");
          layer_clear();
        }
        return false;
      }
    case COMMAQ:
      if (record->event.pressed) {
        if ((mods | oneshot_mods) & MOD_MASK_SHIFT) {  // Is shift held?
          del_mods(MOD_MASK_SHIFT);  // Temporarily delete shift.
          del_oneshot_mods(MOD_MASK_SHIFT);
          SEND_STRING("!");
          layer_clear();
          set_mods(mods);            // Restore mods.
        } else {
          SEND_STRING(SS_TAP(X_COMMA));
          layer_clear();
        }
        return false;
      }
    case DOTX:
      if (record->event.pressed) {
        if ((mods | oneshot_mods) & MOD_MASK_SHIFT) {  // Is shift held?
          del_mods(MOD_MASK_SHIFT);  // Temporarily delete shift.
          del_oneshot_mods(MOD_MASK_SHIFT);
          SEND_STRING("?");
          layer_clear();
          set_mods(mods);            // Restore mods.
        } else {
          SEND_STRING(SS_TAP(X_DOT));
          layer_clear();
        }
        return false;
      }
    case SLASHES:
      if (record->event.pressed) {
        if ((mods | oneshot_mods) & MOD_MASK_SHIFT) {  // Is shift held?
          del_mods(MOD_MASK_SHIFT);  // Temporarily delete shift.
          del_oneshot_mods(MOD_MASK_SHIFT);
          SEND_STRING("\\");
          layer_clear();
          set_mods(mods);            // Restore mods.
        } else {
          SEND_STRING("/");
          layer_clear();
        }
        return false;
      }
    case ONELESS:
      if (record->event.pressed) {
        if ((mods | oneshot_mods) & MOD_MASK_SHIFT) {  // Is shift held?
          del_mods(MOD_MASK_SHIFT);  // Temporarily delete shift.
          del_oneshot_mods(MOD_MASK_SHIFT);
          SEND_STRING("<");
          layer_clear();
          set_mods(mods);            // Restore mods.
        } else {
          SEND_STRING("1");
          layer_clear();
        }
        return false;
      }
    case TWOMORE:
      if (record->event.pressed) {
        if ((mods | oneshot_mods) & MOD_MASK_SHIFT) {  // Is shift held?
          del_mods(MOD_MASK_SHIFT);  // Temporarily delete shift.
          del_oneshot_mods(MOD_MASK_SHIFT);
          SEND_STRING(">");
          layer_clear();
          set_mods(mods);            // Restore mods.
        } else {
          SEND_STRING("2");
          layer_clear();
        }
        return false;
      }
    case PARENS:
      if (record->event.pressed) {
        if ((mods | oneshot_mods) & MOD_MASK_SHIFT) {  // Is shift held?
          del_mods(MOD_MASK_SHIFT);  // Temporarily delete shift.
          del_oneshot_mods(MOD_MASK_SHIFT);
          SEND_STRING("[]" SS_TAP(X_LEFT));
          layer_clear();
          set_mods(mods);            // Restore mods.
        } else if ((mods | oneshot_mods) & MOD_MASK_ALT) {  // Is ALT held?
          del_mods(MOD_MASK_ALT);  // Temporarily delete ALT.
          del_oneshot_mods(MOD_MASK_ALT);
          SEND_STRING("{}" SS_TAP(X_LEFT));
          layer_clear();
          set_mods(mods);            // Restore mods.
        } else {
          SEND_STRING("()" SS_TAP(X_LEFT));
          layer_clear();
        }
        return false;
      }
    case QUOTES:
      if (record->event.pressed) {
        if ((mods | oneshot_mods) & MOD_MASK_SHIFT) {  // Is shift held?
          del_mods(MOD_MASK_SHIFT);  // Temporarily delete shift.
          del_oneshot_mods(MOD_MASK_SHIFT);
          SEND_STRING("`");
          layer_clear();
          set_mods(mods);            // Restore mods.
        } else {
          SEND_STRING("\'");
          layer_clear();
        }
        return false;
      }
    case G_0:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_G));
        layer_clear();
      }
      return false;
    case B_0:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_B));
        layer_clear();
      }
      return false;
    case V_0:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_V));
        layer_clear();
      }
      return false;
    case M_0:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_M));
        layer_clear();
      }
      return false;
    case K_0:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_K));
        layer_clear();
      }
      return false;
    case J_0:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_J));
        layer_clear();
      }
      return false;
    case Q_0:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_Q));
        layer_clear();
      }
      return false;
    case Z_0:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_Z));
        layer_clear();
      }
      return false;
    case CMD_P_0:
      if (record->event.pressed) {
        SEND_STRING(SS_LGUI(SS_LSFT(SS_TAP(X_P))));
        layer_clear();
      }
      return false;
    case DEF_TO_SIDE:
      if (record->event.pressed) {
        SEND_STRING(SS_LGUI(SS_TAP(X_K)) SS_TAP(X_F12));
      }
      return false;
    case EDITOR_LEFT:
      if (record->event.pressed) {
        SEND_STRING(SS_LGUI(SS_TAP(X_K)) SS_LGUI(SS_TAP(X_LEFT)));
      }
      return false;
    case EDITOR_RIGHT:
      if (record->event.pressed) {
        SEND_STRING(SS_LGUI(SS_TAP(X_K)) SS_LGUI(SS_TAP(X_RIGHT)));
      }
      return false;
    case CLOSE:
      if (record->event.pressed) {
        SEND_STRING(SS_LGUI(SS_TAP(X_W)));
      }
      return false;
    case TERMINAL_0:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTL(SS_TAP(X_GRAVE)));
        layer_clear();
      }
      return false;
    case FIND_REP_0:
      if (record->event.pressed) {
        SEND_STRING(SS_LALT(SS_LGUI(SS_TAP(X_F))));
        layer_clear();
      }
      return false;
    case QUICK_FIX_0:
      if (record->event.pressed) {
        SEND_STRING(SS_LGUI(SS_TAP(X_DOT)));
        layer_clear();
      }
      return false;
    case OCCURENCES_0:
      if (record->event.pressed) {
        SEND_STRING(SS_LGUI(SS_LSFT(SS_TAP(X_L))));
        layer_clear();
      }
      return false;
    case ZEN_0:
      if (record->event.pressed) {
        SEND_STRING(SS_LGUI(SS_TAP(X_K)) SS_TAP(X_Z));
        layer_clear();
      }
      return false;
    case SIDEBAR_0:
      if (record->event.pressed) {
        SEND_STRING(SS_LGUI(SS_TAP(X_B)));
        layer_clear();
      }
      return false;
    case ABSPACE_0:
      if (record->event.pressed) {
        SEND_STRING(SS_RALT(SS_TAP(X_BSPACE)));
        layer_clear();
      }
      return false;
  }
  return true;

}