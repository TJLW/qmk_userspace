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


// Don't touch these, they work
// [0] = LAYOUT(
//     KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,                               KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS, 
//     KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,                               KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_BSPC, 
//     KC_GRV,     KC_A,       KC_S,       KC_D,       KC_F,       KC_G,                               KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT, 
//     KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_MUTE,    KC_MPLY,    KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_ENT, 
//                             KC_LCTL,    KC_LALT,    KC_LGUI,    MO(1),      KC_SPC,     KC_SPC,     MO(1),      KC_EXEC,    KC_NO,      KC_NO
// ),
// [1] = LAYOUT(
//     KC_GRV,     KC_EXLM,    KC_AT,      KC_HASH,    KC_DLR,     KC_PERC,                            KC_CIRC,    KC_AMPR,    KC_ASTR,    KC_LPRN,    KC_RPRN,    KC_UNDS, 
//     KC_TILD,    RGB_TOG,    RGB_MOD,    RGB_RMOD,   RGB_HUD,    RGB_HUI,                            KC_NO,      KC_NO,      KC_UP,      KC_LBRC,    KC_RBRC,    KC_DEL, 
//     RGB_VAD,    RGB_VAI,    RGB_SAD,    RGB_SAI,    KC_FIND,    KC_NO,                              KC_NO,      KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_COLN,    KC_DQUO, 
//     KC_TRNS,    KC_UNDO,    KC_CUT,     KC_COPY,    KC_PSTE,    KC_NO,      KC_NO,      KC_NO,      KC_EQL,     KC_PLUS,    KC_LT,      KC_GT,      KC_QUES,    KC_PIPE,  
//                             KC_NO,      KC_NO,      KC_NO,      KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_NO,      KC_NO,      KC_NO
// )

// Layer templates
// [X] = LAYOUT(
//     KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,                              KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO, 
//     KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,                              KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO, 
//     KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,                              KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO, 
//     KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO, 
//                             KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO
// ),
// [X] = LAYOUT(
//     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,                            KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, 
//     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,                            KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, 
//     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,                            KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, 
//     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, 
//                             KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS
// ),


// Maintenance layer
[0] = LAYOUT(
    RGB_TOG,    TO(1),      TO(2),      KC_NO,      KC_NO,      KC_NO,                              KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO, 
    RGB_MOD,    RGB_VAI,    RGB_SAI,    RGB_HUI,    KC_NO,      KC_NO,                              KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO, 
    RGB_RMOD,   RGB_VAD,    RGB_SAD,    RGB_HUD,    KC_NO,      KC_NO,                              KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO, 
    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO, 
                            KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO
),

// Linux layer
[1] = LAYOUT(
    KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,                               KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS, 
    KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,                               KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_BSPC, 
    KC_NO,      KC_A,       KC_S,       KC_D,       KC_F,       KC_G,                               KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT, 
    KC_NO,      KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_MUTE,    KC_MPLY,    KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_ENT, 
                            KC_LCTL,    KC_LSFT,    KC_LCTL,    MO(3),      KC_SPC,     KC_SPC,     MO(3),      KC_EXEC,    KC_NO,      TO(0)
),

// Mac layer
[2] = LAYOUT(
    KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,                               KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS, 
    KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,                               KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_BSPC, 
    KC_NO,      KC_A,       KC_S,       KC_D,       KC_F,       KC_G,                               KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT, 
    KC_NO,      KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_MUTE,    KC_MPLY,    KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_ENT, 
                            KC_LCTL,    KC_LSFT,    KC_LGUI,    MO(3),      KC_SPC,     KC_SPC,     MO(3),      KC_EXEC,    KC_NO,      TO(0)
),

// Common modifers
[3] = LAYOUT(
    KC_GRV,     KC_EXLM,    KC_AT,      KC_HASH,    KC_DLR,     KC_PERC,                            KC_CIRC,    KC_AMPR,    KC_ASTR,    KC_LPRN,    KC_RPRN,    KC_UNDS, 
    KC_TILD,    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,                              KC_NO,      KC_NO,      KC_UP,      KC_LBRC,    KC_RBRC,    KC_DEL, 
    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_FIND,    KC_NO,                              KC_NO,      KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_COLN,    KC_DQUO, 
    KC_TRNS,    KC_UNDO,    KC_CUT,     KC_COPY,    KC_PSTE,    KC_NO,      KC_NO,      KC_NO,      KC_EQL,     KC_PLUS,    KC_LT,      KC_GT,      KC_QUES,    KC_PIPE,  
                            KC_NO,      KC_LALT,    KC_NO,      KC_TRNS,    KC_NO,      KC_NO,      KC_TRNS,    KC_NO,      KC_NO,      KC_NO
),

// // Linux modifiers
// [4] = LAYOUT(
//     KC_NO,          LCTL(KC_1), LCTL(KC_2), LCTL(KC_3), LCTL(KC_4), LCTL(KC_5),                             LCTL(KC_6), LCTL(KC_7), LCTL(KC_8),     LCTL(KC_9),     LCTL(KC_0),     KC_NO, 
//     LCTL(KC_TAB),   LCTL(KC_Q), LCTL(KC_W), LCTL(KC_E), LCTL(KC_R), LCTL(KC_T),                             LCTL(KC_Y), LCTL(KC_U), LCTL(KC_I),     LCTL(KC_O),     LCTL(KC_P),     KC_NO, 
//     KC_NO,          LCTL(KC_A), LCTL(KC_S), LCTL(KC_D), LCTL(KC_F), LCTL(KC_G),                             LCTL(KC_H), LCTL(KC_J), LCTL(KC_K),     LCTL(KC_L),     LCTL(KC_SCLN),  KC_NO, 
//     KC_TRNS,        LCTL(KC_Z), KC_CUT,     KC_COPY,    KC_PSTE,    LCTL(KC_B), KC_NO,        KC_NO,        LCTL(KC_N), LCTL(KC_M), LCTL(KC_COMM),  LCTL(KC_DOT),   LCTL(KC_SLSH),  KC_NO, 
//                                 KC_NO,      KC_TRNS,    KC_TRNS,    KC_NO,      LCTL(KC_SPC), LCTL(KC_SPC), KC_NO,      LCA(KC_T),  LCA(KC_V),      KC_NO
// ),

// // Mac modifers
// [5] = LAYOUT(
//     // KC_NO,          LGUI(KC_1), LGUI(KC_2), LGUI(KC_3), LGUI(KC_4), LGUI(KC_5),                             LGUI(KC_6), LGUI(KC_7), LGUI(KC_8),     LGUI(KC_9),     LGUI(KC_0),     KC_NO, 
//     // LGUI(KC_TAB),   LGUI(KC_Q), LGUI(KC_W), LGUI(KC_E), LGUI(KC_R), LGUI(KC_T),                             LGUI(KC_Y), LGUI(KC_U), LGUI(KC_I),     LGUI(KC_O),     LGUI(KC_P),     KC_NO, 
//     // KC_NO,          LGUI(KC_A), LGUI(KC_S), LGUI(KC_D), LGUI(KC_F), LGUI(KC_G),                             LGUI(KC_H), LGUI(KC_J), LGUI(KC_K),     LGUI(KC_L),     LGUI(KC_SCLN),  KC_NO, 
//     // KC_TRNS,        LGUI(KC_Z), KC_CUT,     KC_COPY,    KC_PSTE,    LGUI(KC_B), KC_NO,        KC_NO,        LGUI(KC_N), LGUI(KC_M), LGUI(KC_COMM),  LGUI(KC_DOT),   LGUI(KC_SLSH),  KC_NO, 
//     //                             KC_NO,      KC_TRNS,    KC_TRNS,    KC_NO,      LGUI(KC_SPC), LGUI(KC_SPC), KC_NO,      KC_EXEC,    LAG(KC_V),      KC_NO
// ),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_PGUP, KC_PGDN) },
    [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_PGUP, KC_PGDN) },
    [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_PGUP, KC_PGDN) },
    [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_PGUP, KC_PGDN) },
    // [4] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_PGUP, KC_PGDN) },
    // [5] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_PGUP, KC_PGDN) },
};
#endif

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    // if (!is_keyboard_master()) {
        return OLED_ROTATION_270;  // flips the display 180 degrees if offhand
    // }

    // return rotation;
}



void render_rgb_status(void) {
    oled_write_ln("RGB:", false);
    static char temp[20] = {0};
    snprintf(temp, sizeof(temp) + 1, "M:%3dH:%3dS:%3dV:%3d", rgb_matrix_config.mode, rgb_matrix_config.hsv.h, rgb_matrix_config.hsv.s, rgb_matrix_config.hsv.v);
    oled_write(temp, false);
}


bool oled_task_user(void) {

    oled_clear();

    oled_write_P(PSTR("TJLW\n"), false);
    oled_write_P(PSTR("\n"), false);
    oled_write_P(PSTR("\n"), false);

    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_P(PSTR("1\n"), false);
            oled_write_P(PSTR("Linux\n"), false);
            oled_write_P(PSTR("\n"), false);
            oled_write_P(PSTR("2\n"), false);
            oled_write_P(PSTR("Mac\n"), false);
            break;
        case 1:
            oled_write_P(PSTR("1\n"), false);
            oled_write_P(PSTR("Linux\n"), false);
            break;
        case 2:
            oled_write_P(PSTR("2\n"), false);
            oled_write_P(PSTR("Mac\n"), false);
            break;
        case 3:
            oled_write_P(PSTR("3\n"), false);
            oled_write_P(PSTR("Std.\n"), false);
            oled_write_P(PSTR("Mods\n"), false);
            break;
        case 4:
            oled_write_P(PSTR("4\n"), false);
            oled_write_P(PSTR("Linux\n"), false);
            oled_write_P(PSTR("Mods\n"), false);
            break;
        case 5:
            oled_write_P(PSTR("5\n"), false);
            oled_write_P(PSTR("Mac\n"), false);
            oled_write_P(PSTR("Mods\n"), false);

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
    
// #    if defined(RGB_MATRIX_ENABLE)
//     /* Show RGB Options */
//     oled_write_P(PSTR("\n"), false);
//     oled_write_P(PSTR("\n"), false);
//     render_rgb_status();
// #    endif

    return false;
}
#endif