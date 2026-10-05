/*
 * UK (English) ISO keyboard layout aliases for ZMK.
 *
 * Use these UK_* macros in keymaps to produce the intended character when the
 * target PC is configured with the English (UK) keyboard layout.
 */

#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

// clang-format off

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │ # │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ \ │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │          │
 * └────┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴──────────┘
 */

// Letters
#define UK_A A
#define UK_B B
#define UK_C C
#define UK_D D
#define UK_E E
#define UK_F F
#define UK_G G
#define UK_H H
#define UK_I I
#define UK_J J
#define UK_K K
#define UK_L L
#define UK_M M
#define UK_N N
#define UK_O O
#define UK_P P
#define UK_Q Q
#define UK_R R
#define UK_S S
#define UK_T T
#define UK_U U
#define UK_V V
#define UK_W W
#define UK_X X
#define UK_Y Y
#define UK_Z Z

// Digits
#define UK_1 N1
#define UK_2 N2
#define UK_3 N3
#define UK_4 N4
#define UK_5 N5
#define UK_6 N6
#define UK_7 N7
#define UK_8 N8
#define UK_9 N9
#define UK_0 N0

// Unshifted punctuation
#define UK_GRV  GRAVE        // `
#define UK_MINS MINUS        // -
#define UK_EQL  EQUAL        // =
#define UK_LBRC LEFT_BRACKET  // [
#define UK_RBRC RIGHT_BRACKET // ]
#define UK_SCLN SEMICOLON    // ;
#define UK_QUOT APOSTROPHE   // '
#define UK_HASH NON_US_HASH  // # (ISO key right of ')
#define UK_BSLS NON_US_BACKSLASH // \ (ISO key left of Z)
#define UK_COMM COMMA        // ,
#define UK_DOT  PERIOD       // .
#define UK_SLSH SLASH        // /

// Shifted symbols
#define UK_NOT   LS(UK_GRV)  // ¬
#define UK_EXLM  LS(UK_1)    // !
#define UK_DQUO  LS(UK_2)    // "
#define UK_POUND LS(UK_3)    // £
#define UK_DLR   LS(UK_4)    // $
#define UK_PERC  LS(UK_5)    // %
#define UK_CIRC  LS(UK_6)    // ^
#define UK_AMPR  LS(UK_7)    // &
#define UK_ASTR  LS(UK_8)    // *
#define UK_LPRN  LS(UK_9)    // (
#define UK_RPRN  LS(UK_0)    // )
#define UK_UNDS  LS(UK_MINS) // _
#define UK_PLUS  LS(UK_EQL)  // +
#define UK_LCBR  LS(UK_LBRC) // {
#define UK_RCBR  LS(UK_RBRC) // }
#define UK_COLN  LS(UK_SCLN) // :
#define UK_AT    LS(UK_QUOT) // @  (UK-specific: Shift+')
#define UK_TILD  LS(UK_HASH) // ~
#define UK_PIPE  LS(UK_BSLS) // |
#define UK_LABK  LS(UK_COMM) // <
#define UK_RABK  LS(UK_DOT)  // >
#define UK_QUES  LS(UK_SLSH) // ?

// macOS British layout exceptions
#define MAC_UK_AT   LS(UK_2)    // @
#define MAC_UK_DQUO LS(UK_QUOT) // "

// AltGr symbols
#define UK_EURO  RA(UK_4)    // €
