#include QMK_KEYBOARD_H
#include "keymap_jp.h"

#define BASE 0
#define META 1
#define SYMB 2
#define GAME 3

// // Row 1
    // #define JP_ZKHK KC_GRV  // Zenkaku ↔︎ Hankaku ↔ Kanji (半角 ↔ 全角 ↔ 漢字)
    // #define JP_1    KC_1    // 1
    // #define JP_2    KC_2    // 2
    // #define JP_3    KC_3    // 3
    // #define JP_4    KC_4    // 4
    // #define JP_5    KC_5    // 5
    // #define JP_6    KC_6    // 6
    // #define JP_7    KC_7    // 7
    // #define JP_8    KC_8    // 8
    // #define JP_9    KC_9    // 9
    // #define JP_0    KC_0    // 0
    // #define JP_MINS KC_MINS // -
    // #define JP_CIRC KC_EQL  // ^
// #define JP_YEN  KC_INT3 // ¥
// // Row 2
    // #define JP_Q    KC_Q    // Q
    // #define JP_W    KC_W    // W
    // #define JP_E    KC_E    // E
    // #define JP_R    KC_R    // R
    // #define JP_T    KC_T    // T
    // #define JP_Y    KC_Y    // Y
    // #define JP_U    KC_U    // U
    // #define JP_I    KC_I    // I
    // #define JP_O    KC_O    // O
    // #define JP_P    KC_P    // P
    // #define JP_AT   KC_LBRC // @
    // #define JP_LBRC KC_RBRC // [
// // Row 3
// #define JP_EISU KC_CAPS // Eisū (英数)
    // #define JP_A    KC_A    // A
    // #define JP_S    KC_S    // S
    // #define JP_D    KC_D    // D
    // #define JP_F    KC_F    // F
    // #define JP_G    KC_G    // G
    // #define JP_H    KC_H    // H
    // #define JP_J    KC_J    // J
    // #define JP_K    KC_K    // K
    // #define JP_L    KC_L    // L
    // #define JP_SCLN KC_SCLN // ;
    // #define JP_COLN KC_QUOT // :
    // #define JP_RBRC KC_NUHS // ]
    // // Row 4
    // #define JP_Z    KC_Z    // Z
    // #define JP_X    KC_X    // X
    // #define JP_C    KC_C    // C
    // #define JP_V    KC_V    // V
    // #define JP_B    KC_B    // B
    // #define JP_N    KC_N    // N
    // #define JP_M    KC_M    // M
    // #define JP_COMM KC_COMM // ,
    // #define JP_DOT  KC_DOT  // .
    // #define JP_SLSH KC_SLSH // /
    // #define JP_BSLS KC_INT1 // (backslash)
// // Row 5
// #define JP_MHEN KC_INT5 // Muhenkan (無変換)
// #define JP_HENK KC_INT4 // Henkan (変換)
// #defiKANA KC_INT2 // Katakana ↔ Hiragana ↔ Rōmaji (カタカナ ↔ ひらがな ↔ ローマ字)

// // Row 1
    // #define JP_EXLM S(JP_1)    // !
    // #define JP_DQUO S(JP_2)    // "
    // #define JP_HASH S(JP_3)    // #
    // #define JP_DLR  S(JP_4)    // $
    // #define JP_PERC S(JP_5)    // %
    // #define JP_AMPR S(JP_6)    // &
    // #define JP_QUOT S(JP_7)    // '
    // #define JP_LPRN S(JP_8)    // (
    // #define JP_RPRN S(JP_9)    // )
    // #define JP_EQL  S(JP_MINS) // =
    // #define JP_TILD S(JP_CIRC) // ~
    // #define JP_PIPE S(JP_YEN)  // |
// // Row 2
    // #define JP_GRV  S(JP_AT)   // `
    // #define JP_LCBR S(JP_LBRC) // {
// // Row 3
// #define JP_CAPS S(JP_EISU) // Caps Lock
    // #define JP_PLUS S(JP_SCLN) // +
    // #define JP_ASTR S(JP_COLN) // *
    // #define JP_RCBR S(JP_RBRC) // }
// // Row 4
    // #define JP_LABK S(JP_COMM) // <
    // #define JP_RABK S(JP_DOT)  // >
    // #define JP_QUES S(JP_SLSH) // ?
    // #define JP_UNDS S(JP_BSLS) // _


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* BASE
   * ,------------------------------------------------.   ,------------------------------------------------.
   * |MICOFF| Tab  |   Q  |   W  |   E  |   R  |  T   |   |  Y   |   U  |   I  |   O  |   P  |   @  |   [  |
   * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
   * | VOLU | RCtrl|   A  |   S  |   D  |   F  |  G   |   |  H   |   J  |   K  |   L  |  ;   |  :   |   ]  |
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * | VOLD | LSft |   Z  |   X  |   C  |   V  |  B   |   |  N   |   M  |   ,  |  .   |   /  |   \  |      |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * | MUTE |      | LGUI | LAlt | ESC  | META |Enter |   |Space | SYMB | ZKHK |      | PRTSC| INS  |      |
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [BASE] = LAYOUT( \
    RCS(JP_M),  KC_TAB,  JP_Q,   JP_W,    JP_E,    JP_R,     JP_T,             JP_Y,   JP_U,    JP_I,    JP_O,    JP_P,      JP_AT,     JP_LBRC, \
    KC_VOLU,    KC_RCTL, JP_A,   JP_S,    JP_D,    JP_F,     JP_G,              JP_H,   JP_J,    JP_K,    JP_L,    JP_SCLN,   JP_COLN,   JP_RBRC,   \
    KC_VOLD,    KC_LSFT, JP_Z,   JP_X,    JP_C,    JP_V,     JP_B,              JP_N,   JP_M,    JP_COMM, JP_DOT,  JP_SLSH,   JP_BSLS,   XXXXXXX,  \
    KC_MUTE,    XXXXXXX, KC_LGUI,KC_LALT, KC_ESC,  MO(META), KC_ENT,            KC_SPC, MO(SYMB),JP_ZKHK, XXXXXXX, KC_PSCREEN,KC_INSERT, XXXXXXX    \
  ),

  /* META
   * ,---------------------------------------------------.   ,------------------------------------------------.
   * |      | Tab  |  F1  |  F2   |  F3   |  F4   |  F5  |   | HOME | PGUP |  UP  | PGDN |   7  |  8   |  9   |
   * |------+------+------+-------+-------+-------+------|   |------+------+------+------+------+------+------|
   * |      | RCtrl|  F6  |L_CLICK|M_CLICK|R_CLICK|  F7  |   | END  | LEFT | DOWN | RIGHT|   4  |  5   |  6   |
   * |------+------+------+-------+-------+-------+------|   |------+------+------+------+------+------+------|
   * |      | LSft |  F8  |  F9   |  F10  |  F11  | F12  |   |      | Bksp | Del  |      |   1  |  2   |  3   |
   * |------+------+------+-------+-------+-------+------|   |------+------+------+------+------+------+------|
   * |      |      | LGUI |  LAlt |  ESC  | META  |Enter |   |Space | SYMB | ZKHK |      |   0  |      |Reset |
   * `---------------------------------------------------'   `------------------------------------------------'
   */
  [META] = LAYOUT( \
    XXXXXXX, _______,   KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,           KC_HOME,    KC_PGUP,  KC_UP,   KC_PGDN,    JP_7,  JP_8,    JP_9,  \
    XXXXXXX, _______,   KC_F6,    KC_BTN1, KC_BTN3, KC_BTN2, KC_F7,           KC_END,     KC_LEFT,  KC_DOWN, KC_RGHT,    JP_4,  JP_5,    JP_6, \
    XXXXXXX, _______,   KC_F8,    KC_F9,   KC_F10,  KC_F11,  KC_F12,          XXXXXXX,    KC_BSPC,  KC_DEL,  XXXXXXX,    JP_1,  JP_2,    JP_3, \
    XXXXXXX, XXXXXXX,   _______,  _______, _______, _______, _______,         _______,    _______,  _______, XXXXXXX,    JP_0,  XXXXXXX, RESET  \
  ),

  /* SYMB
   * ,------------------------------------------------.   ,------------------------------------------------.
   * |      | Tab  |  !   |   "  |  #   |   $  |  %   |   |   &  |   '  |   (  |   )  |  =   |  ~   |  |   |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * |      | RCtrl|      |      |      |      |      |   |      |      |      |      |  -   |  ^   |  \   |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * |      | LSft |      |      |      |      |      |   |      |      |      |      |      |      |      |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * |      |      | LGUI | LAlt | ESC  | META |Enter |   |Space | SYMB | ZKHK |      |      |      |      |
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [SYMB] = LAYOUT( \
    XXXXXXX, _______, JP_EXLM, JP_DQUO, JP_HASH, JP_DLR,  JP_PERC,          JP_AMPR,    JP_QUOT, JP_LPRN, JP_RPRN, JP_EQL,  JP_TILD, JP_PIPE, \
    XXXXXXX, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, JP_MINS, JP_CIRC, JP_YEN,  \
    XXXXXXX, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  \
    XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______,          _______,    _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX   \
  )
};