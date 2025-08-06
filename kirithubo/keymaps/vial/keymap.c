#include QMK_KEYBOARD_H
#include "quantum.h"
#include "gpio.h"

static inline uint8_t scale(uint8_t c) {
    return (uint16_t)c * rgb_matrix_config.hsv.v / 255;
}


RGB current_rgb = {255, 128, 192};
/* RGB current_rgb_lower = {255, 128, 192}; */
/* RGB current_rgb_raise = {255, 128, 192}; */
/* RGB current_rgb = {255, 128, 192}; */


#define SW1_PIN GP0
#define SW2_PIN GP1

void keyboard_pre_init_user(void) {

	setPinInputLow(SW1_PIN);
	setPinInputLow(SW2_PIN);
}

enum layer_number {
	_default = 0,
	_lower,
	_raise,
	_upper,
	_df_m
};


enum custom_keycodes {
 LED_PINK = QK_KB_0,
 LED_GREEN,
 LED_BLUE,
 LED_WHITE,
 LED_PURPLE,
 LED_RED,
 LED_YELLOW,
 LED_ORANGE,
 LED_CYAN,
 LED_MAGENTA,
 LED_GRAY

};

#define KC_PINK LED_PINK
#define KC_GREE LED_GREEN
#define KC_BLUE LED_BLUE
#define KC_WHIT LED_WHITE
#define KC_PURP LED_PURPLE
#define KC_RED  LED_RED
#define KC_YELL LED_YELLOW
#define KC_ORAN LED_ORANGE
#define KC_CYAN LED_CYAN
#define KC_MAGE LED_MAGENTA
#define KC_GRAY LED_GRAY









const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │
     * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
     */
    [_default] = LAYOUT(
       KC_Q,          KC_W,      KC_E,        KC_R,           KC_T,          KC_Y,            KC_U,            KC_I,      KC_O,    KC_P,
       KC_A,          KC_S,      KC_D,        KC_F,           KC_G,          KC_H,            KC_J,            KC_K,      KC_L,    LCTL_T(KC_SCLN),
       LSFT_T(KC_Z),  KC_X,      KC_C,         KC_V,           KC_B,          KC_N,            KC_M,            KC_COMM,   KC_DOT,  LSFT_T(KC_SLSH),
                                 KC_ESC,      LALT_T(KC_ESC), LT(1,KC_SPC),  LT(2,KC_ENT),    LCTL_T(KC_TAB),  KC_LGUI,   KC_MUTE
    ),

    [_lower] = LAYOUT(
       KC_1,          KC_2,      KC_3,        KC_4,           KC_5,          KC_6,            KC_7,            KC_8,      KC_9,     KC_0,
       KC_CIRC,       KC_AMPR,   KC_ASTR,     KC_LPRN,        KC_RPRN,       KC_LEFT,         KC_DOWN,         KC_UP,     KC_RGHT,  KC_BSPC,
       KC_EXLM,       KC_AT,     KC_HASH,     KC_DLR,         KC_PERC,       KC_BSLS,         KC_GRV,          KC_QUOT,   KC_PGDN,  KC_PGUP,
                                 KC_ESC,      LALT_T(KC_ESC), LT(1,KC_SPC),  KC_MINS,         LCTL_T(KC_TAB),  KC_LGUI,   KC_MUTE
    ),

    [_raise] = LAYOUT(
       KC_F1,         KC_F2,     KC_F3,       KC_F4,          KC_F5,         KC_F6,           KC_F7,           KC_F8,     KC_F9,    KC_F10,
       KC_EXLM,       KC_AT,     KC_HASH,     KC_DLR,         KC_PERC,       KC_MINS,         KC_EQL,          KC_ASTR,   KC_SLSH,  KC_F11,
       KC_CIRC,       KC_AMPR,   KC_ASTR,     KC_LPRN,        KC_RPRN,       KC_BSLS,         KC_GRV,          KC_QUOT,   KC_LBRC,  KC_RBRC,
                                 KC_DEL,      LALT_T(KC_ESC), KC_MINS,       LT(2,KC_ENT),    LCTL_T(KC_TAB),  KC_LGUI,   KC_MUTE
    ),

    [_upper] = LAYOUT(
       KC_NO,       KC_NO,    KC_NO,         KC_NO,          KC_NO,         KC_NO,           KC_NO,     KC_NO,     KC_NO,   KC_NO,
       KC_NO,       KC_NO,    KC_NO,         KC_NO,          KC_NO,         KC_NO,           KC_NO,     KC_NO,     KC_NO,   KC_NO,
       KC_NO,       KC_NO,    KC_NO,         KC_NO,          KC_NO,         KC_NO,           KC_NO,     KC_NO,     KC_NO,   KC_NO,
                    KC_NO,    KC_NO,         KC_NO,          KC_NO,         KC_NO,           KC_NO,     TO(4)

    ),


    [_df_m] = LAYOUT(
       KC_PINK,       KC_GREE, KC_BLUE,        KC_WHIT,        KC_PURP,       KC_RED,          KC_YELL,   KC_ORAN,   KC_CYAN, KC_MAGE,
       KC_GRAY,       KC_NO,    KC_NO,         KC_NO,          KC_NO,         KC_NO,           KC_NO,     KC_NO,     KC_NO,   KC_NO,
       KC_NO,         KC_NO,    KC_NO,         KC_NO,          KC_NO,         KC_NO,           KC_NO,     KC_NO,     KC_NO,   KC_NO,
                      KC_NO,    KC_NO,         KC_NO,          KC_NO,         KC_NO,           KC_NO,     RGB_TOG
    )


    };

#if defined(ENCODER_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [1] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [2] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [3] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [4] = {ENCODER_CCW_CW(RGB_RMOD, RGB_MOD)}
};
#endif


/* 8layers */
     /* uint8_t get_layer_state(void) { */
     /* uint8_t sw1 = gpio_read_pin(SW1_PIN) ? 0 : 1; */
     /* uint8_t sw2 = gpio_read_pin(SW2_PIN) ? 0 : 1; */
     /* uint8_t sw3 = gpio_read_pin(SW3_PIN) ? 0 : 1; */
     /* uint8_t sw4 = gpio_read_pin(SW4_PIN) ? 0 : 1; */

/* 4layers */
uint8_t get_layer_state(void) {
     uint8_t sw1 = gpio_read_pin(SW1_PIN) ? 1 : 0;
     uint8_t sw2 = gpio_read_pin(SW2_PIN) ? 1 : 0;

 if      (sw1 && sw2) return 0; // 000 → Layer 0
     else if ( !sw1 && sw2) return 1; // 10 → Layer 1
     else if ( !sw1 &&  !sw2) return 3; // 11 → Layer 2
     else if ( sw1 &&  !sw2) return 2; // 10 → Layer 3
     else return 0; // それ以外はデフォルト（Layer 0）
     /* return layer; */
 }
      /* // ONになっているスイッチの数をカウント */
     /* uint8_t base_layer = sw1 + sw2;  // 0〜3 */

     /* // SW4がONなら +4 してカラーバリエーションのレイヤーにする */
     /* return base_layer; */


void matrix_scan_user(void) {
	static uint8_t current_layer = 255;
	uint8_t new_layer = get_layer_state();

	if (new_layer != current_layer) {
		current_layer = new_layer;
		layer_move(new_layer);
	}

}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if(record->event.pressed) {
        switch (keycode) {
            case LED_PINK:
                current_rgb = (RGB){255, 128, 192};

                eeconfig_update_kb((current_rgb.r << 16) | (current_rgb.g << 8) | current_rgb.b);

                return false;

            case LED_GREEN:
                current_rgb = (RGB){0, 255, 0};

                eeconfig_update_kb((current_rgb.r << 16) | (current_rgb.g << 8) | current_rgb.b);

                return false;

            case LED_BLUE:
                current_rgb = (RGB){0, 0, 255};

                eeconfig_update_kb((current_rgb.r << 16) | (current_rgb.g << 8) | current_rgb.b);

                return false;

            case LED_WHITE:
                current_rgb = (RGB){255, 255, 255};

                eeconfig_update_kb((current_rgb.r << 16) | (current_rgb.g << 8) | current_rgb.b);

                return false;

            case LED_PURPLE:
                current_rgb = (RGB){128, 0, 128};

                eeconfig_update_kb((current_rgb.r << 16) | (current_rgb.g << 8) | current_rgb.b);

                return false;

            case LED_RED:
                current_rgb = (RGB){255, 0, 0};

                eeconfig_update_kb((current_rgb.r << 16) | (current_rgb.g << 8) | current_rgb.b);

                return false;

            case LED_YELLOW:
                current_rgb = (RGB){255, 255, 0};

                eeconfig_update_kb((current_rgb.r << 16) | (current_rgb.g << 8) | current_rgb.b);

                return false;

            case LED_ORANGE:
                current_rgb = (RGB){255, 128, 0};

                eeconfig_update_kb((current_rgb.r << 16) | (current_rgb.g << 8) | current_rgb.b);

                return false;

            case LED_CYAN:
                current_rgb = (RGB){0, 255, 255};

                eeconfig_update_kb((current_rgb.r << 16) | (current_rgb.g << 8) | current_rgb.b);

                return false;

            case LED_MAGENTA:
                current_rgb = (RGB){255, 0, 255};

                eeconfig_update_kb((current_rgb.r << 16) | (current_rgb.g << 8) | current_rgb.b);

                return false;

            case LED_GRAY:
                current_rgb = (RGB){128, 128, 128};

                eeconfig_update_kb((current_rgb.r << 16) | (current_rgb.g << 8) | current_rgb.b);

                return false;



        }
    }
    return true;
}








bool rgb_matrix_indicators_user(void) {
	switch (get_highest_layer(layer_state)) {

		case _lower:
 		for (int i = 0; i <= 9; i++) {
			rgb_matrix_set_color(i,scale(current_rgb.r), scale(current_rgb.g), scale(current_rgb.b));
			/* rgb_matrix_set_color(12,RGB_BLACK); */
			/* rgb_matrix_set_color(13,RGB_BLACK); */
		}

			break;

		case _raise:

 		for (int i = 10; i <= 19; i++) {
			rgb_matrix_set_color(i,scale(current_rgb.r), scale(current_rgb.g), scale(current_rgb.b));
			/* rgb_matrix_set_color(11,RGB_BLACK); */
			/* rgb_matrix_set_color(12,RGB_BLACK); */
			/* rgb_matrix_set_color(13,RGB_BLACK); */

		}

			break;

		case _upper:

 		for (int i = 20; i <= 29; i++) {
			/* rgb_matrix_set_color(i,scale(current_rgb.r), scale(current_rgb.g), scale(current_rgb.b)); */
			rgb_matrix_set_color(i,RGB_PURPLE);
			/* rgb_matrix_set_color(11,RGB_BLACK); */
			/* rgb_matrix_set_color(11,RGB_BLACK); */
			/* rgb_matrix_set_color(12,RGB_BLACK); */
			/* rgb_matrix_set_color(13,RGB_BLACK); */

		}

			break;

	}

	return false;

}


 void keyboard_post_init_user(void) {
     if (!eeconfig_is_enabled()) {
        eeconfig_init();
     }
     uint32_t packed = eeconfig_read_kb();
     current_rgb .r = (packed >> 16) & 0xFF;
     current_rgb .g = (packed >> 8) & 0xFF;
     current_rgb .b = packed & 0xFF;
 }





