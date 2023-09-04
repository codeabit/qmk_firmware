#include QMK_KEYBOARD_H

/* 
 * This file was originally converted using qmk json2c from my qmk configurator json file and then modified by codeabit
 */

// Tap Dance declarations
enum {
  TD_3_DOT,
};

// Tap Dance definitions
tap_dance_action_t tap_dance_actions[] = {
  [TD_3_DOT] = ACTION_TAP_DANCE_DOUBLE(KC_3, KC_DOT), // Tap once for 3, twice for dot 
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x5_2(
    KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,               KC_Y,         KC_U,         KC_I,         KC_O,         KC_P, 
    LSFT_T(KC_A), LCTL_T(KC_S), LALT_T(KC_D), LGUI_T(KC_F), KC_G,               KC_H,         RGUI_T(KC_J), RALT_T(KC_K), RCTL_T(KC_L), RSFT_T(KC_SCLN), 
    KC_Z,         KC_X,         KC_C,         KC_V,         KC_B,               KC_N,         KC_M,         KC_COMM,      KC_DOT,       KC_SLSH,
                                              LT(1,KC_BSPC), LT(2,KC_TAB),      LT(3,KC_ENT), LT(4,KC_SPC)),

  [1] = LAYOUT_split_3x5_2(
    KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,               KC_LBRC,      KC_7,         KC_8,         KC_9,         KC_RBRC, 
    KC_LSFT,       KC_LCTL,       KC_LALT,       KC_LGUI,       KC_NO,               KC_QUOTE,     KC_4,         KC_5,         KC_6,         KC_EQL, 
    KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,               KC_GRV,       KC_1,         KC_2,         KC_3,         KC_BSLS, 
                                                 KC_NO,         KC_NO,               KC_MINS,      KC_0),

  [2] = LAYOUT_split_3x5_2(
    KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,               KC_CAPS,      KC_COPY,      KC_CUT,        KC_PSTE,       KC_UNDO, 
    KC_LSFT,       KC_LCTL,       KC_LALT,       KC_LGUI,       KC_NO,               KC_ESC,       KC_LEFT,      KC_UP,         KC_DOWN,       KC_RGHT, 
    KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,               KC_INS,       KC_HOME,      KC_PGUP,       KC_PGDN,       KC_END, 
                                                 KC_NO,         KC_NO,               KC_NO,        KC_DEL),

  [3] = LAYOUT_split_3x5_2(
    KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,               KC_NO,        KC_F7,         KC_F8,         KC_F9,         KC_F12, 
    KC_LSFT,       KC_LCTL,       KC_LALT,       KC_LGUI,       KC_NO,               KC_ESC,       KC_F4,         KC_F5,         KC_F6,         KC_F11, 
    KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,               KC_NO,        KC_F1,         KC_F2,         KC_F3,         KC_F10, 
                                                 KC_NO,         KC_NO,               KC_NO,        KC_NO),

  [4] = LAYOUT_split_3x5_2(
    KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,               KC_MPLY,      KC_MPRV,       KC_VOLD,       KC_VOLU,       KC_MNXT, 
    KC_LSFT,       KC_LCTL,       KC_LALT,       KC_LGUI,       KC_NO,               KC_ESC,       KC_MS_L,       KC_MS_U,       KC_MS_D,       KC_MS_R, 
    KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,               KC_MUTE,      KC_WH_L,       KC_WH_U,       KC_WH_D,       KC_WH_R, 
                                                 KC_BTN1,       KC_BTN2,             KC_BTN3,      KC_NO)
};


enum myCombos {
  LFT_ESC,
  RGT_ESC,
  LFT_BOOT,
  RGT_BOOT,
  COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH;
const uint16_t PROGMEM escape_combo1[] = {KC_W, KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM escape_combo2[] = {KC_U, KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM left_bootloader_combo[] = {KC_Q, KC_T, KC_B, KC_Z, COMBO_END};
const uint16_t PROGMEM right_bootloader_combo[] = {KC_Y, KC_P, KC_N, KC_SLASH, COMBO_END};
combo_t key_combos[] = {
  COMBO(escape_combo1, KC_ESC),
  COMBO(escape_combo2, KC_ESC),
  COMBO(left_bootloader_combo, QK_BOOT),
  COMBO(right_bootloader_combo, QK_BOOT),
};
