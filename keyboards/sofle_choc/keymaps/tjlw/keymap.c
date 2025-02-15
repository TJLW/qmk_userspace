#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// Build with:
// qmk compile -kb sofle_choc -km tjlw

// [0] = LAYOUT(        
//     KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,                               KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS, 
//     KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,                               KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_BSPC, 
//     KC_GRV,     KC_A,       KC_S,       KC_D,       KC_F,       KC_G,                               KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT, 
//     KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_MUTE,    KC_MPLY,    KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_ENT, 
//                             KC_LCTL,    KC_LALT,    KC_LGUI,    MO(1),      KC_SPC,     KC_SPC,     MO(1),      KC_NO,      KC_NO,      KC_NO
// ),

// [1] = LAYOUT(
//     KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,                              KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_EQL, 
//     KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,                              KC_NO,      KC_NO,      KC_UP,      KC_NO,      KC_NO,      KC_DEL,
//     KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,                              KC_NO,      KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_NO,      KC_NO, 
//     KC_NO,      KC_UNDO,    KC_CUT,     KC_COPY,    KC_PSTE,    KC_NO,      KC_NO,      KC_NO,      KC_LBRC,    KC_RBRC,    KC_BSLS,    KC_NO,      KC_NO,      KC_NO, 
//                             KC_NO,      KC_NO,      KC_NO,      KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_NO,      KC_NO,      KC_NO
// )
[0] = LAYOUT(
    KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,                               KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS, 
    KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,                               KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_BSPC, 
    KC_GRV,     KC_A,       KC_S,       KC_D,       KC_F,       KC_G,                               KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT, 
    KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_MUTE,    KC_MPLY,    KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_ENT, 
                            KC_LCTL,    KC_LALT,    KC_LGUI,    MO(1),      KC_SPC,     KC_SPC,     MO(1),      KC_EXEC,    KC_NO,      KC_NO
),
[1] = LAYOUT(
    KC_TILD,    KC_EXLM,    KC_AT,      KC_HASH,    KC_DLR,     KC_PERC,                            KC_CIRC,    KC_AMPR,    KC_ASTR,    KC_LPRN,    KC_RPRN,    KC_UNDS, 
    RGB_TOG,    RGB_VAI,    KC_NO,      KC_NO,      KC_NO,      KC_NO,                              KC_NO,      KC_NO,      KC_UP,      KC_LBRC,    KC_RBRC,    KC_DEL, 
    KC_NO,      RGB_VAD,    KC_NO,      KC_NO,      KC_FIND,    KC_NO,                              KC_NO,      KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_COLN,    KC_DQUO, 
    KC_TRNS,    KC_UNDO,    KC_CUT,     KC_COPY,    KC_PSTE,    KC_NO,      KC_NO,      KC_NO,      KC_EQL,     KC_PLUS,    KC_LT,      KC_GT,      KC_QUES,    KC_PIPE,  
                            KC_NO,      KC_NO,      KC_NO,      KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_NO,      KC_NO,      KC_NO
)
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_PGUP, KC_PGDN) },
    [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_PGUP, KC_PGDN) },
};
#endif

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    // if (!is_keyboard_master()) {
        return OLED_ROTATION_270;  // flips the display 180 degrees if offhand
    // }

    // return rotation;
}

bool oled_task_user(void) {

    oled_write_P(PSTR("TJLW\n"), false);
    oled_write_P(PSTR("\n"), false);
    oled_write_P(PSTR("\n"), false);
    oled_write_P(PSTR("\n"), false);


    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer\n"), false);

    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_P(PSTR("  0\n"), false);
            break;
        case 1:
            oled_write_P(PSTR("  1\n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Err"), false);
    }

    // Host Keyboard LED Status
    // led_t led_state = host_keyboard_led_state();
    // oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    // oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("NOCAP"), false);
    // oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
    
    return false;
}
#endif