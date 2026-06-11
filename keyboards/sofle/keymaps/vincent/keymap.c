// Copyright 2026 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

enum sofle_layers {
    _QWERTY = 0,
    _LOWER  = 1,
    _RAISE  = 2,
    _ADJUST = 3,
};

enum custom_keycodes { KC_PRVWD = QK_USER, KC_NXTWD, KC_LSTRT, KC_LEND };

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * QWERTY (Layer 0)
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  ESC |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  TAB |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |   \  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |   `  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |   '  |
 * |------+------+------+------+------+------|  MUTE |    |  PLAY |------+------+------+------+------+------|
 * | LSFT |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  | Entr |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | CTRL | MOD4 | LALT |LOWER | / Space /       \ Space\  |RAISE |   -  |  [   |   ]  |
 *            `----------------------------------'           '------''---------------------------'
 */
[_QWERTY] = LAYOUT(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
    KC_GRV,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                       KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_MUTE,  KC_MPLY, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
                      KC_LCTL, KC_LGUI, KC_LALT, TL_LOWR, KC_SPC, KC_SPC,  TL_UPPR, KC_MINS, KC_LBRC, KC_RBRC
),

/*
 * LOWER (Layer 1)
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |______|______|______|______|______|______|                    |______|______|______|______|______|______|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | CAPS |______|______|______|______|______|                    |______| PRVWD|______| NXTWD| PSCR |______|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | NUMS |______|______|______|______|______|-------.    ,-------| LEFT | DOWN |  UP  | RIGHT|______|______|
 * |------+------+------+------+------+------|______ |    | ______|------+------+------+------+------+------|
 * |______| UNDO |  CUT | COPY | PASTE|______|-------|    |-------| HOME | PGDN | PGUP |  END |______|______|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |______|______|______|______| / Bspc /        \ Bspc \  |______|   =  |LSTRT | LEND |
 *            `----------------------------------'           '------''---------------------------'
 */
[_LOWER] = LAYOUT(
    _______,  _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______,
    KC_CAPS, _______, _______, _______, _______, _______,                    _______, KC_PRVWD, _______, KC_NXTWD, KC_PSCR, _______,
    KC_NUM, _______, _______, _______, _______, _______,                    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
    _______, KC_UNDO, KC_CUT,  KC_COPY, KC_PASTE, _______, _______,  _______,  KC_HOME, KC_PGDN, KC_PGUP, KC_END, _______, _______,
                      _______, _______, _______, _______, KC_BSPC,  KC_BSPC, _______, KC_EQL, KC_LSTRT, KC_LEND
),

/*
 * RAISE (Layer 2)
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  F13 |  F14 |  F15 |  F16 |  F17 |  F18 |                    |  F19 |  F20 |  F21 |  F22 |  F23 |  F24 |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |______|______|______|______|______|______|-------.    ,-------| LEFT | DOWN |  UP  | RIGHT|______|______|
 * |------+------+------+------+------+------| ______|    | ______|------+------+------+------+------+------|
 * |______| UNDO |  CUT | COPY | PASTE|______|-------|    |-------| HOME | PGDN | PGUP |  END |______|______|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |______|______|______|______| / Bspc /        \ Bspc \  |______|   =  |LSTRT | LEND |
 *            `----------------------------------'           '------''---------------------------'
 */
[_RAISE] = LAYOUT(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                      KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
    KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,                     KC_F19,  KC_F20,  KC_F21,  KC_F22,  KC_F23,  KC_F24,
    _______, _______, _______, _______, _______, _______,                    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_LBRC, KC_RBRC,
    _______, KC_UNDO, KC_CUT,  KC_COPY, KC_PASTE, _______, _______,  _______,  KC_HOME, KC_PGDN, KC_PGUP, KC_END, _______, _______,
                      _______, _______, _______, _______, KC_BSPC,  KC_BSPC, _______, KC_EQL, KC_LSTRT, KC_LEND
),

/*
 * ADJUST (Layer 3)
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |______| CGTGL| RGTGL| RPREV| RNEXT|______|                    |______|______|______|______|______|______|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |______|______|______|______|______|______|                    |______|______|______|______|______|______|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |______|______|______|______|______|______|-------.    ,-------|______| RVAL-| RVAL+|______|______|______|
 * |------+------+------+------+------+------| ______|    | ______|------+------+------+------+------+------|
 * |______|______|______|______|______|______|-------|    |-------|______|______|______|______|______|______|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |______|______|______|______| /______ /       \______\  |______|______|______|______|
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_ADJUST] = LAYOUT(
    _______, CG_TOGG, UG_TOGG, UG_PREV, UG_NEXT, _______,                    _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                    _______, UG_VALD, UG_VALU, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______,
                      _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______
)
};
// clang-format on

// --- Rotary Encoder Handling Logic ---
// Return false to stop encoder_update_kb (sofle.c) from also running its defaults.
#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    uint8_t layer = get_highest_layer(layer_state);

    // encoder_update_user runs on master. Index 0 = master-side encoder, 1 = slave-side.
    // With EE_HANDS, is_keyboard_left() is stable regardless of which USB port is active.
    bool is_left_enc = is_keyboard_left() ? (index == 0) : (index == 1);

    if (is_left_enc) {
        switch (layer) {
            case _LOWER:
            case _RAISE:
                tap_code(clockwise ?  KC_UP : KC_DOWN);
                break;
            case _ADJUST:
                if (clockwise) {
                    rgblight_decrease_hue();
                } else {
                    rgblight_increase_hue();
                }
                break;
            default: // QWERTY
                tap_code(clockwise ?  KC_VOLU : KC_VOLD);
                break;
        }
    } else {
        switch (layer) {
            case _LOWER:
            case _RAISE:
                tap_code(clockwise ? MS_WHLU : MS_WHLD);
                break;
            case _ADJUST:
                if (clockwise) {
                    rgblight_decrease_sat();
                } else {
                    rgblight_increase_sat();
                }
                break;
            default: // QWERTY
                tap_code(clockwise ? KC_MNXT : KC_MPRV);
                break;
        }
    }
    return false;
}
#endif

// --- OLED Screen UI Handling Logic ---
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    (void)rotation;
    return is_keyboard_left() ? OLED_ROTATION_270 : OLED_ROTATION_0;
}

static uint8_t pixel_font_row(char ch, uint8_t row) {
    static const uint8_t PROGMEM alpha_uc[][7] = {
        {0x0e, 0x11, 0x11, 0x1f, 0x11, 0x11, 0x11}, // A
        {0x1e, 0x11, 0x11, 0x1e, 0x11, 0x11, 0x1e}, // B
        {0x0e, 0x11, 0x10, 0x10, 0x10, 0x11, 0x0e}, // C
        {0x1e, 0x11, 0x11, 0x11, 0x11, 0x11, 0x1e}, // D
        {0x1f, 0x10, 0x10, 0x1e, 0x10, 0x10, 0x1f}, // E
        {0x1f, 0x10, 0x10, 0x1e, 0x10, 0x10, 0x10}, // F
        {0x0e, 0x11, 0x10, 0x17, 0x11, 0x11, 0x0f}, // G
        {0x11, 0x11, 0x11, 0x1f, 0x11, 0x11, 0x11}, // H
        {0x1f, 0x04, 0x04, 0x04, 0x04, 0x04, 0x1f}, // I
        {0x01, 0x01, 0x01, 0x01, 0x11, 0x11, 0x0e}, // J
        {0x11, 0x12, 0x14, 0x18, 0x14, 0x12, 0x11}, // K
        {0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f}, // L
        {0x11, 0x1b, 0x15, 0x15, 0x11, 0x11, 0x11}, // M
        {0x11, 0x19, 0x15, 0x13, 0x11, 0x11, 0x11}, // N
        {0x0e, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0e}, // O
        {0x1e, 0x11, 0x11, 0x1e, 0x10, 0x10, 0x10}, // P
        {0x0e, 0x11, 0x11, 0x11, 0x15, 0x12, 0x0d}, // Q
        {0x1e, 0x11, 0x11, 0x1e, 0x14, 0x12, 0x11}, // R
        {0x0f, 0x10, 0x10, 0x0e, 0x01, 0x01, 0x1e}, // S
        {0x1f, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04}, // T
        {0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0e}, // U
        {0x11, 0x11, 0x11, 0x11, 0x11, 0x0a, 0x04}, // V
        {0x11, 0x11, 0x11, 0x15, 0x15, 0x1b, 0x11}, // W
        {0x11, 0x11, 0x0a, 0x04, 0x0a, 0x11, 0x11}, // X
        {0x11, 0x11, 0x0a, 0x04, 0x04, 0x04, 0x04}, // Y
        {0x1f, 0x01, 0x02, 0x04, 0x08, 0x10, 0x1f}, // Z
    };

    static const uint8_t PROGMEM alpha_lc[][7] = {
        {0x00, 0x00, 0x0e, 0x01, 0x0f, 0x11, 0x0f}, // a
        {0x10, 0x10, 0x1e, 0x11, 0x11, 0x11, 0x1e}, // b
        {0x00, 0x00, 0x0e, 0x10, 0x10, 0x10, 0x0e}, // c
        {0x01, 0x01, 0x0f, 0x11, 0x11, 0x11, 0x0f}, // d
        {0x00, 0x00, 0x0e, 0x11, 0x1f, 0x10, 0x0e}, // e
        {0x0c, 0x08, 0x0e, 0x08, 0x08, 0x08, 0x08}, // f
        {0x00, 0x0e, 0x11, 0x11, 0x0f, 0x01, 0x0e}, // g
        {0x10, 0x10, 0x1e, 0x11, 0x11, 0x11, 0x11}, // h
        {0x04, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04}, // i
        {0x00, 0x02, 0x00, 0x02, 0x02, 0x02, 0x0c}, // j
        {0x10, 0x10, 0x12, 0x14, 0x18, 0x14, 0x12}, // k
        {0x0c, 0x04, 0x04, 0x04, 0x04, 0x04, 0x0e}, // l
        {0x00, 0x00, 0x1e, 0x15, 0x15, 0x15, 0x11}, // m
        {0x00, 0x00, 0x1e, 0x11, 0x11, 0x11, 0x11}, // n
        {0x00, 0x00, 0x0e, 0x11, 0x11, 0x11, 0x0e}, // o
        {0x00, 0x1e, 0x11, 0x11, 0x1e, 0x10, 0x10}, // p
        {0x00, 0x0f, 0x11, 0x11, 0x0f, 0x01, 0x01}, // q
        {0x00, 0x00, 0x1e, 0x10, 0x10, 0x10, 0x10}, // r
        {0x00, 0x00, 0x0e, 0x10, 0x0e, 0x01, 0x0e}, // s
        {0x04, 0x04, 0x0e, 0x04, 0x04, 0x04, 0x04}, // t
        {0x00, 0x00, 0x11, 0x11, 0x11, 0x11, 0x0f}, // u
        {0x00, 0x00, 0x11, 0x11, 0x11, 0x0a, 0x04}, // v
        {0x00, 0x00, 0x11, 0x11, 0x15, 0x15, 0x0a}, // w
        {0x00, 0x00, 0x11, 0x0a, 0x04, 0x0a, 0x11}, // x
        {0x00, 0x00, 0x11, 0x11, 0x0f, 0x01, 0x0e}, // y
        {0x00, 0x00, 0x1f, 0x02, 0x04, 0x08, 0x1f}, // z
    };

    if (ch >= 'a' && ch <= 'z') {
        return pgm_read_byte(&alpha_lc[ch - 'a'][row]);
    }
    if (ch >= 'A' && ch <= 'Z') {
        return pgm_read_byte(&alpha_uc[ch - 'A'][row]);
    }
    if (ch == ':') {
        static const uint8_t PROGMEM colon[] = {0x00, 0x04, 0x04, 0x00, 0x04, 0x04, 0x00};
        return pgm_read_byte(&colon[row]);
    }
    if (ch == '?') {
        static const uint8_t PROGMEM question[] = {0x0e, 0x11, 0x01, 0x02, 0x04, 0x00, 0x04};
        return pgm_read_byte(&question[row]);
    }
    return 0x00;
}

static void render_pixel_text_P(uint8_t x, uint8_t y, const char *text, bool invert) {
    enum {
        PIXEL_FONT_WIDTH   = 5,
        PIXEL_FONT_HEIGHT  = 7,
        PIXEL_FONT_ADVANCE = 6,
    };

    for (uint8_t i = 0; i < 5; i++) {
        char ch = pgm_read_byte(text + i);
        if (ch == '\0') {
            ch = ' ';
        }

        for (uint8_t row = 0; row < PIXEL_FONT_HEIGHT; row++) {
            uint8_t bits = pixel_font_row(ch, row);

            for (uint8_t col = 0; col < PIXEL_FONT_ADVANCE; col++) {
                bool on = col < PIXEL_FONT_WIDTH && (bits & (1 << (PIXEL_FONT_WIDTH - 1 - col)));
                oled_write_pixel(x + (i * PIXEL_FONT_ADVANCE) + col, y + row, invert ? !on : on);
            }
        }
    }
}

static void render_pixel_line_P(uint8_t line, const char *text, bool invert) {
    render_pixel_text_P(1, line * 8, text, invert);
}

static void render_layer_name(uint8_t layer) {
    switch (layer) {
        case _QWERTY:
            render_pixel_line_P(1, PSTR("qwrty"), false);
            break;
        case _LOWER:
            render_pixel_line_P(1, PSTR("nav  "), false);
            break;
        case _RAISE:
            render_pixel_line_P(1, PSTR("func "), false);
            break;
        case _ADJUST:
            render_pixel_line_P(1, PSTR("adjst"), false);
            break;
        default:
            render_pixel_line_P(1, PSTR("unknw"), false);
            break;
    }
}

static void render_layer_block(uint8_t layer) {
    render_pixel_line_P(0, PSTR("LAYER"), false);
    render_layer_name(layer);
    render_pixel_line_P(2, PSTR("     "), false);
}

static void render_left_oled(void) {
    // -- Layer (lines 0-2) --
    render_layer_block(get_highest_layer(layer_state));

    // -- OS mode (lines 3-5) --
    render_pixel_line_P(3, PSTR(" OS  "), false);
    render_pixel_line_P(4, keymap_config.swap_lctl_lgui ? PSTR(" mac ") : PSTR("linux"), false);
    render_pixel_line_P(5, PSTR("     "), false);

    // -- Modifier keys (lines 6-11): inverted text = key is held --
    uint8_t mods = get_mods();
    render_pixel_line_P(6, PSTR("MODS "), false);
    render_pixel_line_P(7, PSTR(" sft "), (mods & MOD_MASK_SHIFT) != 0);
    render_pixel_line_P(8, PSTR(" ctl "), (mods & MOD_MASK_CTRL) != 0);
    render_pixel_line_P(9, PSTR(" atl "), (mods & MOD_MASK_ALT) != 0);
    render_pixel_line_P(10, PSTR(" mod "), (mods & MOD_MASK_GUI) != 0);
    render_pixel_line_P(11, PSTR("     "), false);

    // -- Locks (lines 12-13): inverted text = lock is on --
    led_t led_state = host_keyboard_led_state();
    render_pixel_line_P(12, PSTR("LOCKS"), false);
    render_pixel_line_P(13, PSTR(" cap "), led_state.caps_lock);
    render_pixel_line_P(14, PSTR(" num  "), led_state.num_lock);
}

static void render_right_oled(void) {
    // clang-format off
    static const unsigned char PROGMEM raw_logo[] = {
        0,  0,  0,  0,  0,  0,  0,240,240,240,240,240,240, 48, 48, 48, 48,240,240,240,240,240,240,240,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,128,128,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,  0,  0,  0,  0,  0,  0,224,240,240,120, 56, 56, 56, 56,248,240,240,192,  0,224,240,240,120, 56, 56, 56,120,248,240,224,248, 56,255,255,255,255, 56, 56, 56, 48,  0,112, 56, 56, 56, 56, 56,120,240,240,224,128,255,255,255,255, 56, 56, 56, 56,120,240,240,248,248,248,248,224,128,  0,  0,128,224,248,248,120, 56, 56, 56,255,255,255, 56, 56, 56, 56,224,240,240,120, 56, 56, 56,120,248,240,224,192,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,255,255,255,255, 31, 31, 31,223,223,223,223,223,159, 31, 31, 31, 31,  0,  0,  0,  0,  0,  0,255,255,255,224,224,224,224,224,248,127,127, 31,  7, 63,127,127,247,231,231,231,231,231,231,119,  7,  0, 31,127,127,255,224,224,224,124,126,127,255,247,227,227,227,243,255,127, 63, 15, 31,127,127,255,224,224,224,224,240,127,127, 63, 15,  1, 15, 63,255,252,254,255, 63,  7,  1,  0,  0,  0,  0,127,127,255,224,224,224,231, 63,127,127,247,231,231,231,231,231,231,119,  7,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,127,127,127,127,  0,  0,  0, 31, 31, 31, 31, 31, 31,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 15, 15, 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 14, 14, 14, 15, 15,  7,  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    };
    // clang-format on
    oled_write_raw_P((const char *)raw_logo, sizeof(raw_logo));
}

bool oled_task_user(void) {
    if (is_keyboard_left()) {
        render_left_oled();
    } else {
        render_right_oled();
    }
    return false;
}

#endif

// --- Smart OS Word & Line Navigation Processing ---
enum {
    NAV_KEY_COUNT = KC_LEND - KC_PRVWD + 1,
};

static uint16_t active_nav_chords[NAV_KEY_COUNT];

static uint8_t nav_key_index(uint16_t keycode) {
    return (uint8_t)(keycode - KC_PRVWD);
}

static uint16_t nav_chord_for_keycode(uint16_t keycode) {
    bool is_mac = keymap_config.swap_lctl_lgui;

    switch (keycode) {
        case KC_PRVWD:
            return is_mac ? A(KC_LEFT) : C(KC_LEFT);
        case KC_NXTWD:
            return is_mac ? A(KC_RIGHT) : C(KC_RIGHT);
        case KC_LSTRT:
            return is_mac ? C(KC_LEFT) : KC_HOME;
        case KC_LEND:
            return is_mac ? C(KC_RIGHT) : KC_END;
        default:
            return KC_NO;
    }
}

static void process_nav_key(uint16_t keycode, keyrecord_t *record) {
    uint8_t index = nav_key_index(keycode);

    if (record->event.pressed) {
        active_nav_chords[index] = nav_chord_for_keycode(keycode);
        register_code16(active_nav_chords[index]);
        return;
    }

    if (active_nav_chords[index] != KC_NO) {
        unregister_code16(active_nav_chords[index]);
        active_nav_chords[index] = KC_NO;
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_PRVWD:
        case KC_NXTWD:
        case KC_LSTRT:
        case KC_LEND:
            process_nav_key(keycode, record);
            return false;
        default:
            return true;
    }
}
