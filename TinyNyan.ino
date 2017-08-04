//***************************
// Author: Chris Daw
// Started: August 1st, 2017
//***************************

const uint16_t alpha = 0x1111;

#include <TinyScreen.h>
#include <Wire.h>
#include <SPI.h>
#include "TinyArcade.h"
#include "SpriteSheet.h"

TinyScreen display = TinyScreen(TinyScreenPlus);

void setup() {
  arcadeInit();
  display.begin();
  display.setBitDepth(TSBitDepth16);
  display.setBrightness(15);
  display.setFlip(false);

  USBDevice.init();
  USBDevice.attach();
  SerialUSB.begin(9600);
}

const int WIDTH = 96;
const int HEIGHT = 64;
unsigned int frame = 0;

typedef struct {
  int x;
  int y;
  int width;
  int height;
  int oscillation; //animation metadata
  bool upDown; //animation direction
  const unsigned int *bitmap;
} ts_sprite;

// Cat sprite
ts_sprite nyan = {WIDTH/2 - 10, HEIGHT/2 - 5, 32, 20, 1, false, nyanCat};

int amtRainbows = 19;
// Rainbow sprites

ts_sprite rBit0  = {-28, nyan.y + 1, 4, 20, 0, false, rainbowBit};
ts_sprite rBit1  = {-24, nyan.y + 2, 4, 20, 1, true,  rainbowBit};
ts_sprite rBit2  = {-20, nyan.y + 1, 4, 20, 0, false, rainbowBit};
ts_sprite rBit3  = {-16, nyan.y + 0, 4, 20, 1, false, rainbowBit};
ts_sprite rBit4  = {-12, nyan.y - 1, 4, 20, 2, false, rainbowBit};
ts_sprite rBit5  = {-8,  nyan.y + 0, 4, 20, 1, false, rainbowBit};
ts_sprite rBit6  = {-4,  nyan.y + 1, 4, 20, 0, false, rainbowBit};
ts_sprite rBit7  = {0,   nyan.y + 2, 4, 20, 1, true,  rainbowBit};
ts_sprite rBit8  = {4,   nyan.y + 1, 4, 20, 0, true,  rainbowBit};
ts_sprite rBit9  = {8,   nyan.y + 0, 4, 20, 1, false, rainbowBit};
ts_sprite rBit10 = {12,  nyan.y - 1, 4, 20, 2, false, rainbowBit};
ts_sprite rBit11 = {16,  nyan.y + 0, 4, 20, 1, false, rainbowBit};
ts_sprite rBit12 = {20,  nyan.y + 1, 4, 20, 0, false, rainbowBit};
ts_sprite rBit13 = {24,  nyan.y + 2, 4, 20, 1, true,  rainbowBit};
ts_sprite rBit14 = {28,  nyan.y + 1, 4, 20, 0, true,  rainbowBit};
ts_sprite rBit15 = {32,  nyan.y + 0, 4, 20, 1, false, rainbowBit};
ts_sprite rBit16 = {36,  nyan.y - 1, 4, 20, 2, false, rainbowBit};
ts_sprite rBit17 = {40,  nyan.y + 0, 4, 20, 1, false, rainbowBit};
ts_sprite rBit18 = {44,  nyan.y + 1, 4, 20, 0, true,  rainbowBit};


int amtStars = 6;
// Exploding star sprite
ts_sprite xStar0 = {56, -5, 16, 16, 1, true, star1};
ts_sprite xStar1 = {83, 10, 16, 16, 3, true, star3};
ts_sprite xStar2 = {-5, 23, 16, 16, 1, true, star1};
ts_sprite xStar3 = {15, 36, 16, 16, 5, true, star5};
ts_sprite xStar4 = {89, 43, 16, 16, 1, false, star1};
ts_sprite xStar5 = {50, 50, 16, 16, 2, true, star2}; 


int amtSprites = 26;
ts_sprite * spriteList[] = {&rBit0, &rBit1, &rBit2, &rBit3, &rBit4, &rBit5, &rBit6, &rBit7, &rBit8, &rBit9, 
                            &rBit10, &rBit11, &rBit12, &rBit13, &rBit14, &rBit15, &rBit16, &rBit17, &rBit18,
                            &xStar0, &xStar1, &xStar2, &xStar3, &xStar4, &xStar5, &nyan};

//RGB565 color space BBBB BGGG GGGR RRRR
const uint16_t black = 0x0000;
const uint16_t red = 0x001F;
const uint16_t orange = 0x01BF;
const uint16_t yellow = 0x07FF;
const uint16_t green = 0x07E0;
const uint16_t blue = 0xF800;
const uint16_t purple = 0xF853;

uint16_t rainbow[] = {red, orange, yellow, green, blue, purple};

int bOffset = 0;
int colorIndex = 0;

void drawBuffer() {
  uint8_t lineBuffer[WIDTH * HEIGHT * 2];
  display.startData();
  for (int y = 0; y < HEIGHT; y++) {

    // background for loop
    for (int b = 0; b < WIDTH; b++) {
      if ((b + bOffset) % 16 == 0){
        colorIndex = (b + bOffset) / 16; 
      }

      //lineBuffer[b * 2] = rainbow[colorIndex % 6] >> 8;
      //lineBuffer[b * 2 + 1] = rainbow[colorIndex % 6];

      lineBuffer[b * 2] = 0x2000 >> 8;
      lineBuffer[b * 2 + 1] = 0x2000;
    }
    
    for (int spriteIndex = 0; spriteIndex < amtSprites; spriteIndex++) {
      ts_sprite *cs = spriteList[spriteIndex];
      if (y >= cs->y && y < cs->y + cs->height) {
        int endX = cs->x + cs->width;
        if (endX > nyan.x + 6 && spriteIndex < amtRainbows){
          endX = nyan.x + 6;
        }
        if (cs->x < WIDTH && endX > 0) {
          int xBitmapOffset = 0;
          int xStart = 0;
          if (cs->x < 0) xBitmapOffset -= cs->x;
          if (cs->x > 0) xStart = cs->x;
          int yBitmapOffset = (y - cs->y) * cs->width;
          for (int x = xStart; x < endX; x++) {
            unsigned int color = cs->bitmap[xBitmapOffset + yBitmapOffset++];
            if (color != alpha) {
              lineBuffer[(x) * 2] = color >> 8;
              lineBuffer[(x) * 2 + 1] = color;
            }
          }
        }
      }
    }
    display.writeBuffer(lineBuffer, WIDTH * 2);
  }
  display.endTransfer();
}

void animate(){
  // Update rainbow sprites
  if (frame % 16 == 0){
    for(int i = 0; i < amtRainbows; i++){
      ts_sprite *rb = spriteList[i];
      if (rb->upDown){
        rb->y -= 2 * rb->oscillation;
        rb->upDown = !rb->upDown;
      }else{
        rb->y += 2 * rb->oscillation;
        rb->upDown = !rb->upDown;
      }
    }
  }
  
  const unsigned int* starList[] = {star0, star1, star2, star3, star4, star5};
  // Update star sprites
  if (frame % 8 == 0){
    for(int i = amtRainbows; i < amtStars + amtRainbows; i++){
      ts_sprite *star = spriteList[i];
      int starState = star->oscillation;

      // movement
      star->x -= 8;
      if (star->x <= -17){
        star->x = 112;
      }

      // animation
      // forward
      if (star->upDown){
        if (starState >= 5){
          starState = 0;
        }else{
          starState += 1;
        }
      }else{
        if (starState <= 0){
          starState = 5;        
        }else{
          starState -= 1;
        }
      }

      star->oscillation = starState;
      star->bitmap = starList[starState];
    }
  }
}

void readInputs(){
  if (checkJoystick(TAJoystickUp)){
    if(nyan.y > 0){
      for(int i = 0; i < amtRainbows; i++){
        ts_sprite *sprite = spriteList[i];
        sprite->y -= 1;
      }
      nyan.y -= 1;
    }
  }

  if (checkJoystick(TAJoystickDown)){
    if(nyan.y + nyan.height < HEIGHT){
      for(int i = 0; i < amtRainbows; i++){
        ts_sprite *sprite = spriteList[i];
        sprite->y += 1;
      }
      nyan.y += 1;
    }
  }

  if (checkJoystick(TAJoystickLeft)){
    if(nyan.x > 0){
      for(int i = 0; i < amtRainbows; i++){
        ts_sprite *sprite = spriteList[i];
        sprite->x -= 1;
      }
      nyan.x -= 1;
    }
  }

  if (checkJoystick(TAJoystickRight)){
    if(nyan.x + nyan.width < WIDTH){
      for(int i = 0; i < amtRainbows; i++){
        ts_sprite *sprite = spriteList[i];
        sprite->x += 1;
      }
      nyan.x += 1;
    }
  }
}

// ~60 frames per second, but the monitor is 32Hz 
unsigned long frameStart = 0;
unsigned long frameTime = 17;

void loop() {
  // framerate control
  unsigned long timer = millis();
  while (millis() - frameStart < frameTime){
    delay(1);
  }
  frameStart = millis();
  drawBuffer();
  animate();
  frame++;
  readInputs();
  bOffset += 1;
  if (bOffset >= WIDTH)
    bOffset = 0;

  timer = millis() - timer;
}
