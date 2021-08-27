/* An odd layout for the Dactyl Manuform 5x6 Keyboard */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_5x6(
                 KC_GRV,  KC_1, KC_2, KC_3, KC_4, KC_5,      KC_6, KC_7, KC_8,    KC_9,   KC_0,    KC_RBRC,
                 KC_TAB,  KC_Q, KC_W, KC_E, KC_R, KC_T,      KC_Y, KC_U, KC_I,    KC_O,   KC_P,    KC_LBRC,
                 KC_BSLS, KC_A, KC_S, KC_D, KC_F, KC_G,      KC_H, KC_J, KC_K,    KC_L,   KC_SCLN, KC_QUOT,
                 KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B,      KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
                    OSM(MOD_LCTL), OSM(MOD_LALT),                  KC_MINS, KC_EQL,
                                        KC_ESC, KC_SPC,      KC_ENT, KC_BSPC,
                                        KC_LALT, MO(1),      MO(1), KC_RALT,
                                     KC_LCTRL, KC_LGUI,      KC_RGUI, KC_RCTRL),

  [1] = LAYOUT_5x6(
    KC_MUTE, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,      KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10, KC_F11,
    KC_VOLU, KC_NO,   KC_NO,   KC_UP,   KC_NO,   KC_NO,      KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_INS, KC_F12,
    KC_VOLD, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_CAPS,      KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_DEL, KC_PAUS,
    KC_LSFT, KC_NO,   KC_LT, KC_LCBR, KC_LBRC, KC_LPRN,      KC_RPRN, KC_RBRC, KC_RCBR, KC_GT,   KC_NO,  KC_RSFT,
                              KC_F13, KC_PSCR,                        KC_APP,  KC_SYSREQ,
                          OSM(MOD_LALT), OSM(MOD_LCTL),      MO(2), KC_DEL,
                                      KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS,
                                KC_TRNS, OSM(MOD_LGUI),      OSM(MOD_RGUI), KC_TRNS),

  [2] = LAYOUT_5x6(
      KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,
      KC_NO, KC_NO,   KC_NO, KC_MS_U,   KC_NO, KC_WH_U,      KC_WH_U, KC_ACL2, KC_ACL0, KC_ACL1, KC_NO, KC_NO,
      KC_NO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D,      KC_WH_D, KC_BTN1, KC_BTN2, KC_BTN3, KC_NO, KC_NO,
    KC_LSFT, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,
                               KC_NO,   KC_NO,                        KC_NO,   KC_NO,
                                        KC_ESC, KC_SPC,      KC_NO, KC_NO,
                                        KC_LALT, KC_NO,      KC_NO, KC_NO,
                                       KC_LCTRL, KC_NO,      KC_NO, KC_NO)
};
