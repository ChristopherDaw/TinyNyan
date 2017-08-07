// Header File for TinyNyan
// Author: Chris Daw

#include <TinyScreen.h>

extern const uint16_t alpha;
extern const uint16_t red;
extern const uint16_t orange;
extern const uint16_t yellow;
extern const uint16_t green;
extern const uint16_t blue;
extern const uint16_t purple;

//16 bit color space BBBB BGGG GGGR RRRR

const uint16_t al = alpha;
const uint16_t bl = 0x0000;
const uint16_t wh = 0xFFFF;
const uint16_t dg = 0x6DAD;
const uint16_t ta = 0x6BFF;
const uint16_t pi = 0x79BF;
const uint16_t re = 0x001F;

// 4x20
const unsigned int rainbowBit[] = {
  alpha, alpha, alpha, alpha,
  red, red, red, red,
  red, red, red, red,
  red, red, red, red,
  orange, orange, orange, orange,
  orange, orange, orange, orange,
  orange, orange, orange, orange,
  yellow, yellow, yellow, yellow,
  yellow, yellow, yellow, yellow,
  yellow, yellow, yellow, yellow,
  green, green, green, green,
  green, green, green, green,
  green, green, green, green,
  blue, blue, blue, blue, 
  blue, blue, blue, blue, 
  blue, blue, blue, blue,
  purple, purple, purple, purple, 
  purple, purple, purple, purple, 
  purple, purple, purple, purple, 
  alpha, alpha, alpha, alpha,
};

// 33x20
const unsigned int nyanCat0[] = {
  al, al, al, al, al, al, al, al, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, bl, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, bl, al, al, al, al, al, al, al,
  al, al, al, al, al, al, bl, ta, ta, ta, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, ta, ta, bl, al, al, al, al, al, al,
  al, al, al, al, al, al, bl, ta, ta, pi, pi, pi, pi, pi, pi, re, pi, pi, re, pi, pi, pi, pi, pi, pi, ta, bl, al, al, al, al, al, al,
  al, al, al, al, al, al, bl, ta, pi, pi, re, pi, pi, pi, pi, pi, pi, pi, pi, bl, bl, pi, pi, pi, pi, ta, bl, al, al, bl, bl, al, al,
  al, al, al, al, al, al, bl, ta, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, bl, dg, dg, bl, re, pi, pi, ta, bl, al, bl, dg, dg, bl, al,
  al, al, al, al, al, al, bl, ta, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, bl, dg, dg, dg, bl, pi, pi, ta, bl, bl, dg, dg, dg, bl, al,
  al, bl, bl, al, al, al, bl, ta, pi, pi, pi, pi, pi, pi, re, pi, pi, pi, bl, dg, dg, dg, dg, bl, bl, bl, bl, dg, dg, dg, dg, bl, al,
  bl, dg, dg, bl, al, al, bl, ta, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, bl, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, bl, al,
  bl, dg, dg, bl, bl, bl, bl, ta, pi, pi, pi, re, pi, pi, pi, pi, pi, bl, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, bl,
  al, bl, dg, dg, dg, dg, bl, ta, pi, pi, pi, pi, pi, pi, pi, re, pi, bl, dg, dg, dg, wh, bl, dg, dg, dg, dg, dg, wh, bl, dg, dg, bl,
  al, al, bl, bl, dg, dg, bl, ta, pi, re, pi, pi, pi, pi, pi, pi, pi, bl, dg, dg, dg, bl, bl, dg, dg, dg, bl, dg, bl, bl, dg, dg, bl,
  al, al, al, al, bl, bl, bl, ta, pi, pi, pi, pi, pi, pi, pi, pi, pi, bl, dg, re, re, dg, dg, dg, dg, dg, dg, dg, dg, dg, re, re, bl,
  al, al, al, al, al, al, bl, ta, pi, pi, pi, pi, pi, re, pi, pi, pi, bl, dg, re, re, dg, bl, dg, dg, bl, dg, dg, bl, dg, re, re, bl,
  al, al, al, al, al, al, bl, ta, ta, pi, re, pi, pi, pi, pi, pi, pi, pi, bl, dg, dg, dg, bl, bl, bl, bl, bl, bl, bl, dg, dg, bl, al,
  al, al, al, al, al, al, bl, ta, ta, ta, pi, pi, pi, pi, pi, pi, pi, pi, pi, bl, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, bl, al, al,
  al, al, al, al, al, al, bl, bl, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, al, al, al,
  al, al, al, al, al, bl, dg, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, al, al, al, al, al,
  al, al, al, al, al, bl, dg, dg, bl, al, bl, dg, dg, bl, al, al, al, al, al, al, al, bl, dg, dg, bl, al, bl, dg, dg, bl, al, al, al,
  al, al, al, al, al, bl, bl, bl, al, al, al, bl, bl, bl, al, al, al, al, al, al, al, al, bl, bl, bl, al, al, bl, bl, bl, al, al, al,
};

// 33x20
const unsigned int nyanCat1[] = {
  al, al, al, al, al, al, al, al, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, bl, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, bl, al, al, al, al, al, al, al,
  al, al, al, al, al, al, bl, ta, ta, ta, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, ta, ta, bl, al, al, al, al, al, al,
  al, al, al, al, al, al, bl, ta, ta, pi, pi, pi, pi, pi, pi, re, pi, pi, re, pi, pi, pi, pi, pi, pi, ta, bl, al, al, al, al, al, al,
  al, al, al, al, al, al, bl, ta, pi, pi, re, pi, pi, pi, pi, pi, pi, pi, pi, bl, bl, pi, pi, pi, pi, ta, bl, al, al, bl, bl, al, al,
  al, al, al, al, al, al, bl, ta, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, bl, dg, dg, bl, re, pi, pi, ta, bl, al, bl, dg, dg, bl, al,
  al, al, al, al, al, al, bl, ta, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, bl, dg, dg, dg, bl, pi, pi, ta, bl, bl, dg, dg, dg, bl, al,
  al, al, al, al, al, al, bl, ta, pi, pi, pi, pi, pi, pi, re, pi, pi, pi, bl, dg, dg, dg, dg, bl, bl, bl, bl, dg, dg, dg, dg, bl, al,
  al, al, al, al, al, al, bl, ta, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, bl, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, bl, al,
  al, al, al, al, al, bl, bl, ta, pi, pi, pi, re, pi, pi, pi, pi, pi, bl, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, bl,
  al, al, bl, bl, bl, bl, bl, ta, pi, pi, pi, pi, pi, pi, pi, re, pi, bl, dg, dg, dg, wh, bl, dg, dg, dg, dg, dg, wh, bl, dg, dg, bl,
  bl, bl, dg, dg, dg, dg, bl, ta, pi, re, pi, pi, pi, pi, pi, pi, pi, bl, dg, dg, dg, bl, bl, dg, dg, dg, bl, dg, bl, bl, dg, dg, bl,
  bl, dg, dg, dg, bl, bl, bl, ta, pi, pi, pi, pi, pi, pi, pi, pi, pi, bl, dg, re, re, dg, dg, dg, dg, dg, dg, dg, dg, dg, re, re, bl,
  al, bl, bl, bl, bl, al, bl, ta, pi, pi, pi, pi, pi, re, pi, pi, pi, bl, dg, re, re, dg, bl, dg, dg, bl, dg, dg, bl, dg, re, re, bl,
  al, al, al, al, al, al, bl, ta, ta, pi, re, pi, pi, pi, pi, pi, pi, pi, bl, dg, dg, dg, bl, bl, bl, bl, bl, bl, bl, dg, dg, bl, al,
  al, al, al, al, al, al, bl, ta, ta, ta, pi, pi, pi, pi, pi, pi, pi, pi, pi, bl, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, bl, al, al,
  al, al, al, al, al, al, bl, bl, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, al, al, al,
  al, al, al, al, al, al, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, al, al, al, al, al,
  al, al, al, al, al, al, bl, dg, dg, bl, al, bl, dg, dg, bl, al, al, al, al, al, al, al, bl, dg, dg, bl, al, bl, dg, dg, bl, al, al,
  al, al, al, al, al, al, bl, bl, bl, al, al, al, bl, bl, bl, al, al, al, al, al, al, al, al, bl, bl, bl, al, al, bl, bl, bl, al, al,
};

// 33x20
const unsigned int nyanCat2[] = {
  al, al, al, al, al, al, al, al, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, bl, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, bl, al, al, al, al, al, al, al,
  al, al, al, al, al, al, bl, ta, ta, ta, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, ta, ta, bl, al, al, al, al, al, al,
  al, al, al, al, al, al, bl, ta, ta, pi, pi, pi, pi, pi, pi, re, pi, pi, re, pi, pi, pi, pi, pi, pi, ta, bl, al, al, al, al, al, al,
  al, al, al, al, al, al, bl, ta, pi, pi, re, pi, pi, pi, pi, pi, pi, pi, pi, bl, bl, pi, pi, pi, pi, ta, bl, al, al, bl, bl, al, al,
  al, al, al, al, al, al, bl, ta, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, bl, dg, dg, bl, re, pi, pi, ta, bl, al, bl, dg, dg, bl, al,
  al, al, al, al, al, al, bl, ta, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, bl, dg, dg, dg, bl, pi, pi, ta, bl, bl, dg, dg, dg, bl, al,
  al, al, al, al, al, al, bl, ta, pi, pi, pi, pi, pi, pi, re, pi, pi, pi, bl, dg, dg, dg, dg, bl, bl, bl, bl, dg, dg, dg, dg, bl, al,
  al, al, al, al, al, al, bl, ta, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, bl, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, bl, al,
  al, al, al, al, bl, bl, bl, ta, pi, pi, pi, re, pi, pi, pi, pi, pi, bl, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, bl,
  al, al, bl, bl, dg, dg, bl, ta, pi, pi, pi, pi, pi, pi, pi, re, pi, bl, dg, dg, dg, wh, bl, dg, dg, dg, dg, dg, wh, bl, dg, dg, bl,
  al, bl, dg, dg, dg, dg, bl, ta, pi, re, pi, pi, pi, pi, pi, pi, pi, bl, dg, dg, dg, bl, bl, dg, dg, dg, bl, dg, bl, bl, dg, dg, bl,
  bl, dg, dg, bl, bl, bl, bl, ta, pi, pi, pi, pi, pi, pi, pi, pi, pi, bl, dg, re, re, dg, dg, dg, dg, dg, dg, dg, dg, dg, re, re, bl,
  bl, dg, dg, bl, al, al, bl, ta, pi, pi, pi, pi, pi, re, pi, pi, pi, bl, dg, re, re, dg, bl, dg, dg, bl, dg, dg, bl, dg, re, re, bl,
  al, bl, bl, al, al, al, bl, ta, ta, pi, re, pi, pi, pi, pi, pi, pi, pi, bl, dg, dg, dg, bl, bl, bl, bl, bl, bl, bl, dg, dg, bl, al,
  al, al, al, al, al, bl, bl, ta, ta, ta, pi, pi, pi, pi, pi, pi, pi, pi, pi, bl, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, bl, al, al,
  al, al, al, al, bl, dg, bl, bl, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, al, al, al,
  al, al, al, al, al, bl, dg, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, al, al, al, al, al,
  al, al, al, al, al, bl, dg, dg, bl, al, bl, dg, dg, bl, al, al, al, al, al, al, al, bl, dg, dg, bl, al, bl, dg, dg, bl, al, al, al,
  al, al, al, al, al, bl, bl, bl, al, al, al, bl, bl, bl, al, al, al, al, al, al, al, al, bl, bl, bl, al, al, bl, bl, bl, al, al, al,
};

// 33x20
const unsigned int nyanCat3[] = {
  al, al, al, al, al, al, al, al, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, bl, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, bl, al, al, al, al, al, al, al,
  al, al, al, al, al, al, bl, ta, ta, ta, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, ta, ta, ta, bl, al, al, al, al, al, al,
  al, al, al, al, al, al, bl, ta, ta, pi, pi, pi, pi, pi, pi, re, pi, pi, re, pi, pi, pi, pi, pi, ta, ta, bl, al, al, al, al, al, al,
  al, al, al, al, al, al, bl, ta, pi, pi, re, pi, pi, pi, pi, pi, pi, pi, bl, bl, pi, pi, pi, pi, pi, ta, bl, al, bl, bl, al, al, al,
  al, al, al, al, al, al, bl, ta, pi, pi, pi, pi, pi, pi, pi, pi, pi, bl, dg, dg, bl, pi, re, pi, pi, ta, bl, bl, dg, dg, bl, al, al,
  al, al, al, al, al, al, bl, ta, pi, pi, pi, pi, pi, pi, pi, pi, pi, bl, dg, dg, dg, bl, pi, pi, pi, ta, bl, dg, dg, dg, bl, al, al,
  al, al, al, al, al, al, bl, ta, pi, pi, pi, pi, pi, pi, re, pi, pi, bl, dg, dg, dg, dg, bl, bl, bl, bl, dg, dg, dg, dg, bl, al, al,
  al, bl, bl, bl, al, al, bl, ta, pi, pi, pi, pi, pi, pi, pi, pi, pi, bl, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, bl, al, al,
  bl, dg, dg, bl, bl, bl, bl, ta, pi, pi, pi, re, pi, pi, pi, pi, bl, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, bl, al,
  bl, bl, dg, dg, dg, bl, bl, ta, pi, pi, pi, pi, pi, pi, pi, re, bl, dg, dg, dg, wh, bl, dg, dg, dg, dg, dg, wh, bl, dg, dg, bl, al,
  al, al, bl, bl, bl, dg, bl, ta, pi, re, pi, pi, pi, pi, pi, pi, bl, dg, dg, dg, bl, bl, dg, dg, dg, bl, dg, bl, bl, dg, dg, bl, al,
  al, al, al, al, al, bl, bl, ta, pi, pi, pi, pi, pi, pi, pi, pi, bl, dg, re, re, dg, dg, dg, dg, dg, dg, dg, dg, dg, re, re, bl, al,
  al, al, al, al, al, al, bl, ta, pi, pi, pi, pi, pi, re, pi, pi, bl, dg, re, re, dg, bl, dg, dg, bl, dg, dg, bl, dg, re, re, bl, al,
  al, al, al, al, al, al, bl, ta, ta, pi, re, pi, pi, pi, pi, pi, pi, bl, dg, dg, dg, bl, bl, bl, bl, bl, bl, bl, dg, dg, bl, al, al,
  al, al, al, al, al, bl, bl, ta, ta, ta, pi, pi, pi, pi, pi, pi, pi, pi, bl, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, bl, al, al, al,
  al, al, al, al, bl, bl, bl, bl, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, al, al, al, al,
  al, al, al, bl, dg, dg, dg, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, al, al, al, al, al, al,
  al, al, al, bl, dg, dg, bl, bl, al, bl, dg, dg, bl, al, al, al, al, al, al, bl, dg, dg, bl, al, bl, dg, dg, bl, al, al, al, al, al,
  al, al, al, bl, bl, bl, bl, al, al, al, bl, bl, bl, al, al, al, al, al, al, al, bl, bl, bl, al, al, bl, bl, bl, al, al, al, al, al,
};

// 33x20
const unsigned int nyanCat4[] = {
  al, al, al, al, al, al, al, al, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, bl, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, bl, al, al, al, al, al, al, al,
  al, al, al, al, al, al, bl, ta, ta, ta, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, ta, ta, ta, bl, al, al, al, al, al, al,
  al, al, al, al, al, al, bl, ta, ta, pi, pi, pi, pi, pi, pi, re, pi, pi, bl, bl, pi, pi, pi, pi, pi, ta, bl, al, bl, bl, al, al, al,
  al, al, al, al, al, al, bl, ta, pi, pi, re, pi, pi, pi, pi, pi, pi, bl, dg, dg, bl, pi, pi, pi, pi, ta, bl, bl, dg, dg, bl, al, al,
  al, al, al, al, al, al, bl, ta, pi, pi, pi, pi, pi, pi, pi, pi, pi, bl, dg, dg, dg, bl, re, pi, pi, ta, bl, dg, dg, dg, bl, al, al,
  al, al, al, al, al, al, bl, ta, pi, pi, pi, pi, pi, pi, pi, pi, pi, bl, dg, dg, dg, dg, bl, bl, bl, bl, dg, dg, dg, dg, bl, al, al,
  al, bl, bl, al, al, al, bl, ta, pi, pi, pi, pi, pi, pi, re, pi, pi, bl, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, bl, al, al,
  bl, dg, dg, bl, al, al, bl, ta, pi, pi, pi, pi, pi, pi, pi, pi, bl, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, bl, al,
  bl, dg, dg, bl, bl, bl, bl, ta, pi, pi, pi, re, pi, pi, pi, pi, bl, dg, dg, dg, wh, bl, dg, dg, dg, dg, dg, wh, bl, dg, dg, bl, al,
  al, bl, dg, dg, dg, dg, bl, ta, pi, pi, pi, pi, pi, pi, pi, re, bl, dg, dg, dg, bl, bl, dg, dg, dg, bl, dg, bl, bl, dg, dg, bl, al,
  al, al, bl, bl, dg, dg, bl, ta, pi, re, pi, pi, pi, pi, pi, pi, bl, dg, re, re, dg, dg, dg, dg, dg, dg, dg, dg, dg, re, re, bl, al,
  al, al, al, al, bl, bl, bl, ta, pi, pi, pi, pi, pi, pi, pi, pi, bl, dg, re, re, dg, bl, dg, dg, bl, dg, dg, bl, dg, re, re, bl, al,
  al, al, al, al, al, al, bl, ta, pi, pi, pi, pi, pi, re, pi, pi, pi, bl, dg, dg, dg, bl, bl, bl, bl, bl, bl, bl, dg, dg, bl, al, al,
  al, al, al, al, al, al, bl, ta, ta, pi, re, pi, pi, pi, pi, pi, pi, pi, bl, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, bl, al, al, al,
  al, al, al, al, al, bl, bl, ta, ta, ta, pi, pi, pi, pi, pi, pi, pi, pi, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, al, al, al,
  al, al, al, al, bl, dg, bl, bl, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, al, al, al, al,
  al, al, al, bl, dg, dg, dg, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, dg, dg, al, al, al, al, al, al,
  al, al, al, bl, dg, dg, bl, bl, al, bl, dg, dg, bl, al, al, al, al, al, al, bl, dg, dg, bl, al, bl, dg, dg, bl, al, al, al, al, al,
  al, al, al, bl, bl, bl, bl, al, al, bl, bl, bl, al, al, al, al, al, al, al, bl, bl, bl, al, al, al, bl, bl, bl, al, al, al, al, al,
};


// 33x20
const unsigned int nyanCat5[] = {
  al, al, al, al, al, al, al, al, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, bl, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, bl, al, al, al, al, al, al, al,
  al, al, al, al, al, al, bl, ta, ta, ta, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, pi, ta, ta, ta, bl, al, al, al, al, al, al,
  al, al, al, al, al, al, bl, ta, ta, pi, pi, pi, pi, pi, pi, re, pi, pi, re, pi, pi, pi, pi, pi, ta, ta, bl, al, al, al, al, al, al,
  al, al, al, al, al, al, bl, ta, pi, pi, re, pi, pi, pi, pi, pi, pi, pi, bl, bl, pi, pi, pi, pi, pi, ta, bl, al, bl, bl, al, al, al,
  al, al, al, al, al, al, bl, ta, pi, pi, pi, pi, pi, pi, pi, pi, pi, bl, dg, dg, bl, pi, re, pi, pi, ta, bl, bl, dg, dg, bl, al, al,
  al, al, al, al, al, al, bl, ta, pi, pi, pi, pi, pi, pi, pi, pi, pi, bl, dg, dg, dg, bl, pi, pi, pi, ta, bl, dg, dg, dg, bl, al, al,
  al, bl, bl, al, al, al, bl, ta, pi, pi, pi, pi, pi, pi, re, pi, pi, bl, dg, dg, dg, dg, bl, bl, bl, bl, dg, dg, dg, dg, bl, al, al,
  bl, dg, dg, bl, al, al, bl, ta, pi, pi, pi, pi, pi, pi, pi, pi, pi, bl, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, bl, al, al,
  bl, dg, dg, bl, bl, bl, bl, ta, pi, pi, pi, re, pi, pi, pi, pi, bl, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, bl, al,
  al, bl, dg, dg, dg, dg, bl, ta, pi, pi, pi, pi, pi, pi, pi, re, bl, dg, dg, dg, wh, bl, dg, dg, dg, dg, dg, wh, bl, dg, dg, bl, al,
  al, al, bl, bl, dg, dg, bl, ta, pi, re, pi, pi, pi, pi, pi, pi, bl, dg, dg, dg, bl, bl, dg, dg, dg, bl, dg, bl, bl, dg, dg, bl, al,
  al, al, al, al, bl, bl, bl, ta, pi, pi, pi, pi, pi, pi, pi, pi, bl, dg, re, re, dg, dg, dg, dg, dg, dg, dg, dg, dg, re, re, bl, al,
  al, al, al, al, al, al, bl, ta, pi, pi, pi, pi, pi, re, pi, pi, bl, dg, re, re, dg, bl, dg, dg, bl, dg, dg, bl, dg, re, re, bl, al,
  al, al, al, al, al, al, bl, ta, ta, pi, re, pi, pi, pi, pi, pi, pi, bl, dg, dg, dg, bl, bl, bl, bl, bl, bl, bl, dg, dg, bl, al, al,
  al, al, al, al, al, al, bl, ta, ta, ta, pi, pi, pi, pi, pi, pi, pi, pi, bl, dg, dg, dg, dg, dg, dg, dg, dg, dg, dg, bl, al, al, al,
  al, al, al, al, al, bl, bl, bl, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, ta, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, al, al, al, al,
  al, al, al, al, bl, dg, dg, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, al, al, al, al, al, al,
  al, al, al, al, bl, dg, dg, dg, bl, al, bl, dg, dg, bl, al, al, al, al, al, al, bl, dg, dg, bl, al, bl, dg, dg, bl, al, al, al, al,
  al, al, al, al, bl, bl, bl, bl, al, al, bl, bl, bl, al, al, al, al, al, al, al, al, bl, bl, bl, al, al, bl, bl, al, al, al, al, al,
};

// 16x16
const unsigned int star0[] = {
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, wh, wh, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, wh, wh, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
};

// 16x16
const unsigned int star1[] = {
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, wh, wh, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, wh, wh, al, al, al, al, al, al, al,
  al, al, al, al, al, wh, wh, al, al, wh, wh, al, al, al, al, al,
  al, al, al, al, al, wh, wh, al, al, wh, wh, al, al, al, al, al,
  al, al, al, al, al, al, al, wh, wh, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, wh, wh, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
};

// 16x16
const unsigned int star2[] = {
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, wh, wh, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, wh, wh, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, wh, wh, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, wh, wh, al, al, al, al, al, al, al,
  al, al, al, wh, wh, wh, wh, al, al, wh, wh, wh, wh, al, al, al,
  al, al, al, wh, wh, wh, wh, al, al, wh, wh, wh, wh, al, al, al,
  al, al, al, al, al, al, al, wh, wh, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, wh, wh, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, wh, wh, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, wh, wh, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
};

// 16x16
const unsigned int star3[] = {
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, wh, wh, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, wh, wh, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, wh, wh, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, wh, wh, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, wh, wh, wh, wh, al, al, wh, wh, al, al, wh, wh, wh, wh, al,
  al, wh, wh, wh, wh, al, al, wh, wh, al, al, wh, wh, wh, wh, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, wh, wh, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, wh, wh, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, wh, wh, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, wh, wh, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
};

// 16x16
const unsigned int star4[] = {
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, wh, wh, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, wh, wh, al, al, al, al, al, al, al,
  al, al, al, wh, wh, al, al, al, al, al, al, wh, wh, al, al, al,
  al, al, al, wh, wh, al, al, al, al, al, al, wh, wh, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, wh, wh, al, al, al, al, al, al, al, al, al, al, wh, wh, al,
  al, wh, wh, al, al, al, al, al, al, al, al, al, al, wh, wh, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, wh, wh, al, al, al, al, al, al, wh, wh, al, al, al,
  al, al, al, wh, wh, al, al, al, al, al, al, wh, wh, al, al, al,
  al, al, al, al, al, al, al, wh, wh, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, wh, wh, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
};

// 16x16
const unsigned int star5[] = {
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, wh, wh, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, wh, wh, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, wh, wh, al, al, al, al, al, al, al, al, al, al, wh, wh, al,
  al, wh, wh, al, al, al, al, al, al, al, al, al, al, wh, wh, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, wh, wh, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, wh, wh, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al,
};



























