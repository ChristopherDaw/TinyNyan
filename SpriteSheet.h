// Header File for TinyNyan
// Author: Chris Daw

#include <TinyScreen.h>

extern const uint16_t alpha;

//16 bit color space BBBB BGGG GGGR RRRR

const uint16_t al = alpha;
const uint16_t bl = 0x0000;
const uint16_t wh = 0xFFFF;
const uint16_t dg = 0x6DAD;
const uint16_t ta = 0x6BFF;
const uint16_t pi = 0x79BF;
const uint16_t re = 0x001F;

const unsigned int rainbowBit[] = {
  alpha,
  red,
  red,
  red,
  orange,
  orange,
  yellow,
  yellow,
  yellow,
  green,
  green,
  green,
  blue,
  blue,
  blue,
  purple,
  purple,
  purple,
  alpha,
}

// 32x20
const unsigned int nyanCat[] = {
  al, al, al, al, al, al, al, al, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, bl, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, bl, al, al, al, al, al, al,
  al, al, al, al, al, al, bl, ta, ta, ta, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, ta, ta, ta, bl, al, al, al, al, al,
  al, al, al, al, al, al, bl, ta, ta, pi, pi, pi, pi, pi, pi, re, pi, pi, re, pi, pi, pi, pi, pi, ta, ta, bl, al, al, al, al, al,
  al, al, al, al, al, al, bl, ta, pi, pi, re, pi, pi, pi, pi, pi, pi, pi, bl, bl, pi, pi, pi, pi, pi, ta, bl, al, bl, bl, al, al,
  al, al, al, al, al, al, bl, ta, pi, pi, pi, pi, pi, pi, pi, pi, pi, bl, dg, dg, bl, pi, re, pi, pi, ta, bl, bl, dg, dg, bl, al,
  al, al, al, al, al, al, bl, ta, pi, pi, pi, pi, pi, pi, pi, pi, pi, bl, dg, dg, dg, bl, pi, pi, pi, ta, bl, dg, dg, dg, bl, al,
  al, bl, bl, al, al, al, bl, ta, pi, pi, pi, pi, pi, pi, re, pi, pi, bl, dg, dg, dg, dg, bl, bl, bl, bl, dg, dg, dg, dg, bl, al,
  bl, dg, dg, bl, al, al, bl, ta, pi, pi, pi, pi, pi, pi, pi, pi, pi, bl, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, bl, al,
  bl, dg, dg, bl, bl, bl, bl, ta, pi, pi, pi, re, pi, pi, pi, pi, bl, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, bl,
  al, bl, dg, dg, dg, dg, bl, ta, pi, pi, pi, pi, pi, pi, pi, re, bl, dg, dg, dg, wh, bl, dg, dg, dg, dg, dg, wh, bl, dg, dg, bl,
  al, al, bl, bl, dg, dg, bl, ta, pi, re, pi, pi, pi, pi, pi, pi, bl, dg, dg, dg, bl, bl, dg, dg, dg, bl, dg, bl, bl, dg, dg, bl,
  al, al, al, al, bl, bl, bl, ta, pi, pi, pi, pi, pi, pi, pi, pi, bl, dg, re, re, dg, dg, dg, dg, dg, dg, dg, dg, dg, re, re, bl,
  al, al, al, al, al, al, bl, ta, pi, pi, pi, pi, pi, re, pi, pi, bl, dg, re, re, dg, bl, dg, dg, bl, dg, dg, bl, dg, re, re, bl,
  al, al, al, al, al, al, bl, ta, ta, pi, re, pi, pi, pi, pi, pi, pi, bl, dg, dg, dg, bl, bl, bl, bl, bl, bl, bl, dg, dg, bl, al,
  al, al, al, al, al, bl, bl, ta, ta, ta, pi, pi, pi, pi, pi, pi, pi, pi, bl, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, bl, al, al,
  al, al, al, al, bl, dg, bl, bl, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, al, al, al,
  al, al, al, bl, dg, dg, dg, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, dg, bl, al, al, al, al, al,
  al, al, al, bl, dg, dg, bl, al, bl, dg, dg, bl, al, al, al, al, al, bl, dg, dg, bl, al, bl, bl, dg, dg, bl, al, al, al, al, al,
  al, al, al, bl, bl, bl, al, al, bl, bl, bl, al, al, al, al, al, al, bl, bl, bl, al, al, al, bl, bl, bl, bl, al, al, al, al, al,
};



























