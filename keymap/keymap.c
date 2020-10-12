/* An odd layout for the Dactyl Manuform 5x6 Keyboard */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_5x6(
             KC_GRV,  KC_1, KC_2,    KC_3,    KC_4, KC_5,      KC_6, KC_7, KC_8,    KC_9,   KC_0,    KC_RBRC,
             KC_TAB,  KC_Q, KC_W,    KC_E,    KC_R, KC_T,      KC_Y, KC_U, KC_I,    KC_O,   KC_P,    KC_LBRC,
             KC_BSLS, KC_A, KC_S,    KC_D,    KC_F, KC_G,      KC_H, KC_J, KC_K,    KC_L,   KC_SCLN, KC_QUOT,
             KC_LSFT, KC_Z, KC_X,    KC_C,    KC_V, KC_B,      KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
                            KC_UNDS, KC_PLUS,                              KC_MINS, KC_EQL,
                                         KC_ESC,  KC_SPC,      KC_ENT,  KC_BSPC,
                                        KC_LALT,   MO(1),      MO(1),   KC_RALT,
                                 LCTL_T(KC_ESC), KC_LGUI,      KC_RGUI, RCTL_T(KC_ESC)),

  [1] = LAYOUT_5x6(
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,        KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10, KC_F11,
    KC_VOLU, KC_PMNS, KC_UNDS, KC_UP,   KC_PSLS, KC_PAST,      KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_INS, KC_F12,
    KC_VOLD, KC_PLUS, KC_LEFT, KC_DOWN, KC_RGHT, KC_PEQL,      KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_DEL, KC_PAUS,
    KC_TRNS, KC_LT,   KC_QUOT, KC_LCBR, KC_LBRC, KC_LPRN,      KC_RPRN, KC_RBRC, KC_RCBR, KC_QUOT, KC_GT,  KC_TRNS,
                      KC_MUTE, KC_PSCR,                                          KC_APP,  MO(2),
                                        KC_TRNS, KC_TRNS,      KC_TRNS, KC_DEL,
                                        KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS,
                                        KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS),

  [2] = LAYOUT_5x6(
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,
    KC_BTN5, KC_BTN4, KC_BTN3, KC_MS_U, KC_BTN2, KC_WH_U,      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,
    KC_NO,   KC_NO,   KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D,      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,        KC_ACL0, KC_ACL1, KC_ACL2, KC_NO,   KC_NO, KC_NO,
                      KC_NO,   KC_NO,                                            KC_BTN1, KC_TRNS,
                                        KC_TRNS, KC_TRNS,      KC_TRNS, KC_DEL,
                                        KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS,
                                        KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS)
};
