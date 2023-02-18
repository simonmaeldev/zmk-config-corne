/* Copyright 2020
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

// https://github.com/qmk/qmk_firmware/blob/master/quantum/keymap_extras/keymap_us_international_linux.h
// https://github.com/zmkfirmware/zmk/issues/177#issuecomment-1306247821
// https://github.com/bzgec/zmk-config


#pragma once

#include <behaviors.dtsi>
#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

// clang-format off

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │  \  │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ´ │        │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
 * │        │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │          │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define US_DGRAVE GRAVE  // ` (dead)
#define US_1    N1    // 1
#define US_2    N2    // 2
#define US_3    N3    // 3
#define US_4    N4    // 4
#define US_5    N5    // 5
#define US_6    N6    // 6
#define US_7    N7    // 7
#define US_8    N8    // 8
#define US_9    N9    // 9
#define US_0    N0    // 0
#define US_MINUS MINUS // -
#define US_EQUAL  EQUAL  // =
// Row 2
#define US_Q    Q    // Q
#define US_W    W    // W
#define US_E    E    // E
#define US_R    R    // R
#define US_T    T    // T
#define US_Y    Y    // Y
#define US_U    U    // U
#define US_I    I    // I
#define US_O    O    // O
#define US_P    P    // P
#define US_LBKC LBKC // [
#define US_RBKC RBKC // ]
#define US_BSLH BSLH // (backslash)
// Row 3
#define US_A    A    // A
#define US_S    S    // S
#define US_D    D    // D
#define US_F    F    // F
#define US_G    G    // G
#define US_H    H    // H
#define US_J    J    // J
#define US_K    K    // K
#define US_L    L    // L
#define US_SEMI SEMI // ;
#define US_DSQT SQT  // ´ (dead)
// Row 4
#define US_Z    Z    // Z
#define US_X    X    // X
#define US_C    C    // C
#define US_V    V    // V
#define US_B    B    // B
#define US_N    N    // N
#define US_M    M    // M
#define US_COMMA COMMA // ,
#define US_DOT  DOT  // .
#define US_FSLH FSLH // /

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ~ │ ! │ @ │ # │ $ │ % │ ^ │ & │ * │ ( │ ) │ _ │ + │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ { │ } │  |  │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │      │   │   │   │   │   │   │   │   │   │ : │ ¨ │        │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
 * │        │   │   │   │   │   │   │   │ < │ > │ ? │          │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define US_DTILDE S(US_DGRAVE) // ~ (dead)
#define US_EXCL S(US_1)    // !
#define US_AT   S(US_2)    // @
#define US_HASH S(US_3)    // #
#define US_DLLR  S(US_4)    // $
#define US_PERCENT S(US_5)    // %
#define US_DCARET S(US_6)    // ^ (dead)
#define US_AMPS S(US_7)    // &
#define US_STAR S(US_8)    // *
#define US_LPAR S(US_9)    // (
#define US_RPAR S(US_0)    // )
#define US_UNDER S(US_MINUS) // _
#define US_PLUS S(US_EQUAL)  // +
// Row 2
#define US_LBRC S(US_LBKC) // {
#define US_RBRC S(US_RBKC) // }
#define US_PIPE2 S(US_BSLH) // |
// Row 3
#define US_COLON S(US_SEMI) // :
#define US_DDQT S(US_DSQT) // ¨ (dead)
// Row 4
#define US_LT S(US_COMMA) // <
#define US_GT S(US_DOT)  // >
#define US_QMARK S(US_FSLH) // ?

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ` │ ¡ │ ² │ ³ │ ¤ │ € │ ¼ │ ½ │ ¾ │ ‘ │ ’ │ ¥ │ × │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Ä │ Å │ É │ ® │ Þ │ Ü │ Ú │ Í │ Ó │ Ö │ « │ » │  ¬  │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │      │ Á │ ß │ Ð │   │   │   │   │ Œ │ Ø │ ¶ │ ' │        │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
 * │        │ Æ │   │ © │   │   │ Ñ │ µ │ Ç │ ˙ │ ¿ │          │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

// Row 1
#define US_GRAVE  ALGR(US_DGRAVE) // `
#define US_IEXL ALGR(US_1)    // ¡
#define US_SUP2 ALGR(US_2)    // ²
#define US_SUP3 ALGR(US_3)    // ³
#define US_CURR ALGR(US_4)    // ¤
#define US_EURO ALGR(US_5)    // €
#define US_QRTR ALGR(US_6)    // ¼
#define US_HALF ALGR(US_7)    // ½
#define US_TQTR ALGR(US_8)    // ¾
#define US_LSQU ALGR(US_9)    // ‘
#define US_RSQU ALGR(US_0)    // ’
#define US_YEN  ALGR(US_MINUS) // ¥
#define US_MUL  ALGR(US_EQUAL)  // ×
// Row 2
#define US_ADIA ALGR(US_Q)    // Ä
#define US_ARNG ALGR(US_W)    // Å
#define US_EACU ALGR(US_E)    // É
#define US_REGD ALGR(US_R)    // ®
#define US_THRN ALGR(US_T)    // Þ
#define US_UDIA ALGR(US_Y)    // Ü
#define US_UACU ALGR(US_U)    // Ú
#define US_IACU ALGR(US_I)    // Í
#define US_OACU ALGR(US_O)    // Ó
#define US_ODIA ALGR(US_P)    // Ö
#define US_LDAQ ALGR(US_LBKC) // «
#define US_RDAQ ALGR(US_RBKC) // »
#define US_NOT  ALGR(US_BSLH) // ¬
// Row 3
#define US_AACU ALGR(US_A)    // Á
#define US_SS   ALGR(US_S)    // ß
#define US_ETH  ALGR(US_D)    // Ð
#define US_OE   ALGR(US_K)    // Œ
#define US_OSTR ALGR(US_L)    // Ø
#define US_PILC ALGR(US_SEMI) // ¶
#define US_SQT  ALGR(US_DSQT) // '
// Row 4
#define US_AE   ALGR(US_Z)    // Æ
#define US_COPY ALGR(US_C)    // ©
#define US_NTIL ALGR(US_N)    // Ñ
#define US_MICR ALGR(US_M)    // µ
#define US_CCED ALGR(US_COMMA) // Ç
#define US_DOTA ALGR(US_DOT)  // ˙ (dead)
#define US_IQUE ALGR(US_FSLH) // ¿

/* Shift+AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ~ │ ¹ │ ˝ │ ¯ │ £ │ ¸ │ ^ │ ̛  │ ˛ │ ˘ │ ° │ ̣  │ ÷ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ “ │ ” │  ¦  │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │      │   │ § │   │   │   │   │   │   │   │ ° │ " │        │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
 * │        │   │   │ ¢ │   │   │   │   │   │ ˇ │ ̉  │          │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define US_TILDE S(ALGR(US_DGRAVE)) // ~
#define US_SUP1 S(ALGR(US_1))    // ¹
#define US_DACU S(ALGR(US_2))    // ˝ (dead)
#define US_MACR S(ALGR(US_3))    // ¯ (dead)
#define US_PND  S(ALGR(US_4))    // £
#define US_CEDL S(ALGR(US_5))    // ¸ (dead)
#define US_CARET S(ALGR(US_6))    // ^
#define US_HORN S(ALGR(US_7))    // ̛  (dead)
#define US_OGON S(ALGR(US_8))    // ˛ (dead)
#define US_BREV S(ALGR(US_9))    // ˘ (dead)
#define US_RNGA S(ALGR(US_0))    // ° (dead)
#define US_DOTB S(ALGR(US_MINUS)) // ̣  (dead)
#define US_DIV  S(ALGR(US_EQUAL))  // ÷
// Row 2
#define US_LDQU S(ALGR(US_LBKC)) // “
#define US_RDQU S(ALGR(US_RBKC)) // ”
#define US_BRKP S(ALGR(US_BSLH)) // ¦
// Row 3
#define US_SECT S(ALGR(US_S))    // §
#define US_DEG  S(ALGR(US_SEMI)) // °
#define US_DQT S(ALGR(US_DSQT)) // "
// Row 4
#define US_CENT S(ALGR(US_C))    // ¢
#define US_CARN S(ALGR(US_DOT))  // ˇ (dead)
#define US_HOKA S(ALGR(US_FSLH)) // ̉  (dead)
