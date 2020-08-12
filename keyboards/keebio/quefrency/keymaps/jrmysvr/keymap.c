#include QMK_KEYBOARD_H
#include "quantum/keymap_extras/keymap_german_ch.h"


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BASE 0
#define _FN1 1
#define _FN2 2

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_65_with_macro(
    KC_GESC, KC_PSCREEN,    KC_TILD, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  _______, KC_BSPC, KC_DEL, \
    _______, _______,       KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, _______, \
    KC_MUTE, _______,       KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,  KC_PGUP, \
    KC_VOLU, KC_BRIU,       KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,   KC_PGDN, \
    KC_VOLD, KC_BRID,       KC_LCTL, MO(_FN1),KC_LGUI, KC_LALT, KC_SPC,           KC_SPC,  KC_SPC,  KC_RALT, MO(_FN2),KC_RCTL,          KC_LEFT, KC_DOWN, KC_RGHT
  ),

  [_FN1] = LAYOUT_65_with_macro(
    KC_GESC, _______,      _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, KC_BSPC, KC_DEL, \
    _______, TG(_FN1),     _______, _______, KC_UP,   _______, _______, _______, KC_7,    KC_8,    KC_9,    _______, _______, _______, _______, _______, _______, \
    KC_MUTE, _______,      _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, KC_4,    KC_5,    KC_6,    _______, _______, _______,          _______, KC_HOME, \
    KC_F2,   KC_F11,       _______, _______, _______, _______, _______, _______, KC_1,    KC_2,    KC_3,    _______, _______, _______,          _______, KC_END, \
    KC_F3,   KC_F12,       _______, _______, _______, _______, _______,          KC_0,    KC_0,    KC_DOT,  KC_PLUS, KC_MINS,          _______, _______, _______
  ),

  [_FN2] = LAYOUT_65_with_macro(
    KC_GESC, _______,      _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, KC_BSPC, KC_DEL, \
    _______, TG(_FN1),     _______, _______, _______, _______, _______, _______, _______, CH_UDIA, _______, CH_ODIA, _______, _______, _______, _______, _______, \
    KC_MUTE, _______,      _______, CH_ADIA, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, KC_HOME, \
    KC_F2,   KC_F11,       _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, KC_END, \
    KC_F3,   KC_F12,       _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______,          _______, _______, _______
  )
};

