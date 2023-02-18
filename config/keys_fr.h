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
#define US_DTILDE LS(US_DGRAVE) // ~ (dead)
#define US_EXCL LS(US_1)    // !
#define US_AT   LS(US_2)    // @
#define US_HASH LS(US_3)    // #
#define US_DLLR  LS(US_4)    // $
#define US_PERCENT LS(US_5)    // %
#define US_DCARET LS(US_6)    // ^ (dead)
#define US_AMPS LS(US_7)    // &
#define US_STAR LS(US_8)    // *
#define US_LPAR LS(US_9)    // (
#define US_RPAR LS(US_0)    // )
#define US_UNDER LS(US_MINUS) // _
#define US_PLUS LS(US_EQUAL)  // +
// Row 2
#define US_LBRC LS(US_LBKC) // {
#define US_RBRC LS(US_RBKC) // }
#define US_PIPE2 LS(US_BSLH) // |
// Row 3
#define US_COLON LS(US_SEMI) // :
#define US_DDQT LS(US_DSQT) // ¨ (dead)
// Row 4
#define US_LT LS(US_COMMA) // <
#define US_GT LS(US_DOT)  // >
#define US_QMARK LS(US_FSLH) // ?

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
#define US_GRAVE  RA(US_DGRAVE) // `
#define US_IEXL RA(US_1)    // ¡
#define US_SUP2 RA(US_2)    // ²
#define US_SUP3 RA(US_3)    // ³
#define US_CURR RA(US_4)    // ¤
#define US_EURO RA(US_5)    // €
#define US_QRTR RA(US_6)    // ¼
#define US_HALF RA(US_7)    // ½
#define US_TQTR RA(US_8)    // ¾
#define US_LSQU RA(US_9)    // ‘
#define US_RSQU RA(US_0)    // ’
#define US_YEN  RA(US_MINUS) // ¥
#define US_MUL  RA(US_EQUAL)  // ×
// Row 2
#define US_ADIA RA(US_Q)    // Ä
#define US_ARNG RA(US_W)    // Å
#define US_EACU RA(US_E)    // É
#define US_REGD RA(US_R)    // ®
#define US_THRN RA(US_T)    // Þ
#define US_UDIA RA(US_Y)    // Ü
#define US_UACU RA(US_U)    // Ú
#define US_IACU RA(US_I)    // Í
#define US_OACU RA(US_O)    // Ó
#define US_ODIA RA(US_P)    // Ö
#define US_LDAQ RA(US_LBKC) // «
#define US_RDAQ RA(US_RBKC) // »
#define US_NOT  RA(US_BSLH) // ¬
// Row 3
#define US_AACU RA(US_A)    // Á
#define US_SS   RA(US_S)    // ß
#define US_ETH  RA(US_D)    // Ð
#define US_OE   RA(US_K)    // Œ
#define US_OSTR RA(US_L)    // Ø
#define US_PILC RA(US_SEMI) // ¶
#define US_SQT  RA(US_DSQT) // '
// Row 4
#define US_AE   RA(US_Z)    // Æ
#define US_COPY RA(US_C)    // ©
#define US_NTIL RA(US_N)    // Ñ
#define US_MICR RA(US_M)    // µ
#define US_CCED RA(US_COMMA) // Ç
#define US_DOTA RA(US_DOT)  // ˙ (dead)
#define US_IQUE RA(US_FSLH) // ¿

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
#define US_TILDE LS(RA(US_DGRAVE)) // ~
#define US_SUP1 LS(RA(US_1))    // ¹
#define US_DACU LS(RA(US_2))    // ˝ (dead)
#define US_MACR LS(RA(US_3))    // ¯ (dead)
#define US_PND  LS(RA(US_4))    // £
#define US_CEDL LS(RA(US_5))    // ¸ (dead)
#define US_CARET LS(RA(US_6))    // ^
#define US_HORN LS(RA(US_7))    // ̛  (dead)
#define US_OGON LS(RA(US_8))    // ˛ (dead)
#define US_BREV LS(RA(US_9))    // ˘ (dead)
#define US_RNGA LS(RA(US_0))    // ° (dead)
#define US_DOTB LS(RA(US_MINUS)) // ̣  (dead)
#define US_DIV  LS(RA(US_EQUAL))  // ÷
// Row 2
#define US_LDQU LS(RA(US_LBKC)) // “
#define US_RDQU LS(RA(US_RBKC)) // ”
#define US_BRKP LS(RA(US_BSLH)) // ¦
// Row 3
#define US_SECT LS(RA(US_S))    // §
#define US_DEG  LS(RA(US_SEMI)) // °
#define US_DQT LS(RA(US_DSQT)) // "
// Row 4
#define US_CENT LS(RA(US_C))    // ¢
#define US_CARN LS(RA(US_DOT))  // ˇ (dead)
#define US_HOKA LS(RA(US_FSLH)) // ̉  (dead)
