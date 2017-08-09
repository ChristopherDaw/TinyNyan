// Header File for TinyNyan
// Author: Chris Daw

//rainbow colors
extern const uint16_t alpha;
extern const uint16_t red;
extern const uint16_t orange;
extern const uint16_t yellow;
extern const uint16_t green;
extern const uint16_t blue;
extern const uint16_t purple;

//16 bit color space BBBB BGGG GGGR RRRR

const uint16_t al = alpha;

//nyancat colors
const uint16_t bl = 0x0000;
const uint16_t wh = 0xFFFF;
const uint16_t dg = 0x6DAD;
const uint16_t ta = 0x6BFF;
const uint16_t pi = 0x79BF;
const uint16_t re = 0x001F;

//donut colors
const uint16_t bu = 0xF800;
const uint16_t db = 0xF800;
const uint16_t lb = 0x14D9;
const uint16_t dp = 0x9BBF;
const uint16_t dw = 0xFFFF;
const uint16_t dr = re;
const uint16_t dv = 0xFB30;

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

// 22x20
const unsigned int donut0[] = {
  al, al, al, al, al, al, al, al, al, al, bl, bl, bl, bl, bl, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, bl, bl, bl, dp, dp, dp, dp, dp, bl, bl, bl, al, al, al, al,
  al, al, al, al, al, bl, bl, dp, dp, dp, dp, dp, re, dp, dp, dp, dp, dp, bl, al, al, al,
  al, al, al, al, bl, dp, dp, dp, dp, dp, dp, dp, re, re, dp, dp, dp, dp, dv, bl, al, al,
  al, al, al, bl, dp, dp, bu, dp, dp, dp, dp, dp, dv, dp, dp, dp, dp, bu, dv, lb, bl, al,
  al, al, bl, dp, dp, dp, bu, dp, dp, dv, dv, lb, bl, dp, dp, dp, dp, bu, dv, lb, bl, al,
  al, al, bl, dp, dp, re, dp, dp, dv, lb, lb, lb, bl, dp, dp, bu, dp, dp, dv, lb, lb, bl,
  al, bl, dp, dp, dp, re, dp, dv, lb, lb, lb, lb, bl, dp, dp, bu, dp, dv, dv, lb, lb, bl,
  al, bl, dp, dp, dp, re, dv, lb, lb, lb, lb, bl, bl, dp, dp, dp, dp, dv, lb, lb, lb, bl,
  bl, dv, dp, dp, dp, dp, dv, lb, lb, lb, bl, bl, dp, dp, dp, dp, dv, dv, lb, lb, lb, bl,
  bl, dv, dp, re, dp, dv, lb, lb, lb, bl, bl, dp, dp, dp, dp, dp, dv, lb, lb, lb, lb, bl,
  bl, dv, dp, re, dp, dp, bl, bl, bl, bl, dp, dp, dp, re, dp, dv, dv, lb, lb, lb, lb, bl,
  bl, dv, dv, dp, dp, dp, dp, dp, dp, dp, dp, dp, re, dp, dv, dv, lb, lb, lb, lb, bl, al,
  bl, dv, dv, dp, dp, dp, dp, dp, re, re, dp, dp, dp, dv, dv, lb, lb, lb, lb, lb, bl, al,
  al, bl, dv, dv, dv, dp, dp, dp, dv, dv, dv, dv, dv, dv, lb, lb, lb, lb, lb, bl, al, al,
  al, bl, dv, dv, dv, dv, dv, dv, dv, dv, dv, dv, lb, lb, lb, lb, lb, lb, bl, al, al, al,
  al, al, bl, dv, dv, dv, dv, dv, dv, lb, lb, lb, lb, lb, lb, lb, lb, bl, al, al, al, al,
  al, al, al, bl, lb, lb, lb, lb, lb, lb, lb, lb, lb, lb, lb, bl, bl, al, al, al, al, al,
  al, al, al, al, bl, bl, bl, lb, lb, lb, lb, lb, bl, bl, bl, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, bl, bl, bl, bl, bl, al, al, al, al, al, al, al, al, al, al,
};

// 22x20
const unsigned int donut1[] = {
  al, al, al, al, al, al, al, al, al, al, bl, bl, bl, bl, bl, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, bl, bl, bl, dw, dw, dw, dw, dw, bl, bl, bl, al, al, al, al,
  al, al, al, al, al, bl, bl, dw, dw, dw, dw, dw, re, dw, dw, dw, dw, dw, bl, al, al, al,
  al, al, al, al, bl, dw, dw, dw, dw, dw, dw, dw, re, re, dw, dw, dw, dw, dw, bl, al, al,
  al, al, al, bl, dw, dw, bu, dw, dw, dw, dw, dw, dw, dw, dw, dw, dw, bu, dw, lb, bl, al,
  al, al, bl, dw, dw, dw, bu, dw, dw, dw, dw, lb, bl, dw, dw, dw, dw, bu, dw, lb, bl, al,
  al, al, bl, dw, dw, re, dw, dw, dw, lb, lb, lb, bl, dw, dw, bu, dw, dw, dw, lb, lb, bl,
  al, bl, dw, dw, dw, re, dw, dw, lb, lb, lb, lb, bl, dw, dw, bu, dw, dw, dw, lb, lb, bl,
  al, bl, dw, dw, dw, re, dw, lb, lb, lb, lb, bl, bl, dw, dw, dw, dw, dw, lb, lb, lb, bl,
  bl, dw, dw, dw, dw, dw, dw, lb, lb, lb, bl, bl, dw, dw, dw, dw, dw, dw, lb, lb, lb, bl,
  bl, dw, dw, re, dw, dw, lb, lb, lb, bl, bl, dw, dw, dw, dw, dw, dw, lb, lb, lb, lb, bl,
  bl, dw, dw, re, dw, dw, bl, bl, bl, bl, dw, dw, dw, re, dw, dw, dw, lb, lb, lb, lb, bl,
  bl, dw, dw, dw, dw, dw, dw, dw, dw, dw, dw, dw, re, dw, dw, dw, lb, lb, lb, lb, bl, al,
  bl, dw, dw, dw, dw, dw, dw, dw, re, re, dw, dw, dw, dw, dw, lb, lb, lb, lb, lb, bl, al,
  al, bl, dw, dw, dw, dw, dw, dw, dw, dw, dw, dw, dw, dw, lb, lb, lb, lb, lb, bl, al, al,
  al, bl, dw, dw, dw, dw, dw, dw, dw, dw, dw, dw, lb, lb, lb, lb, lb, lb, bl, al, al, al,
  al, al, bl, dw, dw, dw, dw, dw, dw, lb, lb, lb, lb, lb, lb, lb, lb, bl, al, al, al, al,
  al, al, al, bl, lb, lb, lb, lb, lb, lb, lb, lb, lb, lb, lb, bl, bl, al, al, al, al, al,
  al, al, al, al, bl, bl, bl, lb, lb, lb, lb, lb, bl, bl, bl, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, bl, bl, bl, bl, bl, al, al, al, al, al, al, al, al, al, al,
};

// 22x20
const unsigned int donut2[] = {
  al, al, al, al, al, al, al, al, al, al, bl, bl, bl, bl, bl, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, bl, bl, bl, dr, dr, dr, dr, dr, bl, bl, bl, al, al, al, al,
  al, al, al, al, al, bl, bl, dr, dr, dr, dr, dr, dw, dr, dr, dr, dr, dr, bl, al, al, al,
  al, al, al, al, bl, dr, dr, dr, dr, dr, dr, dr, dw, dw, dr, dr, dr, dr, dr, bl, al, al,
  al, al, al, bl, dr, dr, bu, dr, dr, dr, dr, dr, dr, dr, dr, dr, dr, bu, dr, lb, bl, al,
  al, al, bl, dr, dr, dr, bu, dr, dr, dr, dr, lb, bl, dr, dr, dr, dr, bu, dr, lb, bl, al,
  al, al, bl, dr, dr, dw, dr, dr, dr, lb, lb, lb, bl, dr, dr, bu, dr, dr, dr, lb, lb, bl,
  al, bl, dr, dr, dr, dw, dr, dr, lb, lb, lb, lb, bl, dr, dr, bu, dr, dr, dr, lb, lb, bl,
  al, bl, dr, dr, dr, dw, dr, lb, lb, lb, lb, bl, bl, dr, dr, dr, dr, dr, lb, lb, lb, bl,
  bl, dr, dr, dr, dr, dr, dr, lb, lb, lb, bl, bl, dr, dr, dr, dr, dr, dr, lb, lb, lb, bl,
  bl, dr, dr, dw, dr, dr, lb, lb, lb, bl, bl, dr, dr, dr, dr, dr, dr, lb, lb, lb, lb, bl,
  bl, dr, dr, dw, dr, dr, bl, bl, bl, bl, dr, dr, dr, dw, dr, dr, dr, lb, lb, lb, lb, bl,
  bl, dr, dr, dr, dr, dr, dr, dr, dr, dr, dr, dr, dw, dr, dr, dr, lb, lb, lb, lb, bl, al,
  bl, dr, dr, dr, dr, dr, dr, dr, dw, dw, dr, dr, dr, dr, dr, lb, lb, lb, lb, lb, bl, al,
  al, bl, dr, dr, dr, dr, dr, dr, dr, dr, dr, dr, dr, dr, lb, lb, lb, lb, lb, bl, al, al,
  al, bl, dr, dr, dr, dr, dr, dr, dr, dr, dr, dr, lb, lb, lb, lb, lb, lb, bl, al, al, al,
  al, al, bl, dr, dr, dr, dr, dr, dr, lb, lb, lb, lb, lb, lb, lb, lb, bl, al, al, al, al,
  al, al, al, bl, lb, lb, lb, lb, lb, lb, lb, lb, lb, lb, lb, bl, bl, al, al, al, al, al,
  al, al, al, al, bl, bl, bl, lb, lb, lb, lb, lb, bl, bl, bl, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, bl, bl, bl, bl, bl, al, al, al, al, al, al, al, al, al, al,
};

// 22x20
const unsigned int donut3[] = {
  al, al, al, al, al, al, al, al, al, al, bl, bl, bl, bl, bl, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, bl, bl, bl, db, db, db, db, db, bl, bl, bl, al, al, al, al,
  al, al, al, al, al, bl, bl, db, db, db, db, db, dw, db, db, db, db, db, bl, al, al, al,
  al, al, al, al, bl, db, db, db, db, db, db, db, dw, dw, db, db, db, db, db, bl, al, al,
  al, al, al, bl, db, db, re, db, db, db, db, db, db, db, db, db, db, re, db, lb, bl, al,
  al, al, bl, db, db, db, re, db, db, db, db, lb, bl, db, db, db, db, re, db, lb, bl, al,
  al, al, bl, db, db, dw, db, db, db, lb, lb, lb, bl, db, db, re, db, db, db, lb, lb, bl,
  al, bl, db, db, db, dw, db, db, lb, lb, lb, lb, bl, db, db, re, db, db, db, lb, lb, bl,
  al, bl, db, db, db, dw, db, lb, lb, lb, lb, bl, bl, db, db, db, db, db, lb, lb, lb, bl,
  bl, db, db, db, db, db, db, lb, lb, lb, bl, bl, db, db, db, db, db, db, lb, lb, lb, bl,
  bl, db, db, re, db, db, lb, lb, lb, bl, bl, db, db, db, db, db, db, lb, lb, lb, lb, bl,
  bl, db, db, re, db, db, bl, bl, bl, bl, db, db, db, dw, db, db, db, lb, lb, lb, lb, bl,
  bl, db, db, db, db, db, db, db, db, db, db, db, dw, db, db, db, lb, lb, lb, lb, bl, al,
  bl, db, db, db, db, db, db, db, dw, dw, db, db, db, db, db, lb, lb, lb, lb, lb, bl, al,
  al, bl, db, db, db, db, db, db, db, db, db, db, db, db, lb, lb, lb, lb, lb, bl, al, al,
  al, bl, db, db, db, db, db, db, db, db, db, db, lb, lb, lb, lb, lb, lb, bl, al, al, al,
  al, al, bl, db, db, db, db, db, db, lb, lb, lb, lb, lb, lb, lb, lb, bl, al, al, al, al,
  al, al, al, bl, lb, lb, lb, lb, lb, lb, lb, lb, lb, lb, lb, bl, bl, al, al, al, al, al,
  al, al, al, al, bl, bl, bl, lb, lb, lb, lb, lb, bl, bl, bl, al, al, al, al, al, al, al,
  al, al, al, al, al, al, al, bl, bl, bl, bl, bl, al, al, al, al, al, al, al, al, al, al,
};
