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

const int WIDTH = 96;
const int HEIGHT = 64;

typedef struct {
  int x;
  int y;
  int width;
  int height;
  int collisions;
  const unsigned int *bitmap;
} ts_sprite;

ts_sprite nyan = {WIDTH/2 - 10, HEIGHT/2 - 5, 32, 20, 0, nyanCat};

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

//RGB565 color space BBBB BGGG GGGR RRRR
const uint16_t black = 0x0000;
const uint16_t red = 0x001F;
const uint16_t orange = 0x01BF;
const uint16_t yellow = 0x07FF;
const uint16_t green = 0x07E0;
const uint16_t blue = 0xF800;
const uint16_t purple = 0xF853;

uint16_t rainbow[] = {red, orange, yellow, green, blue, purple};


int amtSprites = 1;
ts_sprite * spriteList[] = {&nyan};

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

      lineBuffer[b * 2] = rainbow[5 - (colorIndex % 6)] >> 8;
      lineBuffer[b * 2 + 1] = rainbow[5 - (colorIndex % 6)];

      //lineBuffer[b * 2] = black >> 8;
      //lineBuffer[b * 2 + 1] = black;
    }
    
    for (int spriteIndex = 0; spriteIndex < amtSprites; spriteIndex++) {
      ts_sprite *cs = spriteList[spriteIndex];
      if (y >= cs->y && y < cs->y + cs->height) {
        int endX = cs->x + cs->width;
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

void readInputs(){
  if (checkJoystick(TAJoystickUp)){
    if(nyan.y > 0)
      nyan.y -= 1;
  }

  if (checkJoystick(TAJoystickDown)){
    if(nyan.y + nyan.height < HEIGHT)
      nyan.y += 1;
  }

  if (checkJoystick(TAJoystickLeft)){
    if(nyan.x > 0)
      nyan.x -= 1;

    bOffset += 1;
  }

  if (checkJoystick(TAJoystickRight)){
    if(nyan.x + nyan.width < WIDTH)
      nyan.x += 1;
  }
}

void loop() {
  drawBuffer();
  readInputs();
  bOffset += 1;
  if (bOffset >= WIDTH)
    bOffset = 0;
}
