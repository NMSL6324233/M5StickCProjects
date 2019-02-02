#include <Wire.h>
#include <SPI.h>
#include "src/Ucglib/src/Ucglib.h"

Ucglib_ST7735_18x128x160_HWSPI ucg(/*cd=*/ 23, /*cs=*/ 5, /*reset=*/ 18);

void beginPower() {
  Wire.begin();

  Wire.beginTransmission(0x34);
  Wire.write(0x10);
  Wire.write(0xff);  //OLED_VPP Enable
  Wire.endTransmission();

  Wire.beginTransmission(0x34);
  Wire.write(0x28);
  Wire.write(0xff); //Enable LDO2&LDO3, LED&TFT 3.3V
  Wire.endTransmission();

  Wire.beginTransmission(0x34);
  Wire.write(0x82);  //Enable all the ADCs
  Wire.write(0xff);
  Wire.endTransmission();

  Wire.beginTransmission(0x34);
  Wire.write(0x33);  //Enable Charging, 100mA, 4.2V, End at 0.9
  Wire.write(0xC0);
  Wire.endTransmission();

  Wire.beginTransmission(0x34);
  Wire.write(0x33);
  Wire.write(0xC3);
  Wire.endTransmission();

  Wire.beginTransmission(0x34);
  Wire.write(0xB8);  //Enable Colume Counter
  Wire.write(0x80);
  Wire.endTransmission();

  Wire.beginTransmission(0x34);
  Wire.write(0x12);
  Wire.write(0x4d); //Enable DC-DC1, OLED_VDD, 5B V_EXT
  Wire.endTransmission();

  Wire.beginTransmission(0x34);
  Wire.write(0x36);
  Wire.write(0x5c); //PEK
  Wire.endTransmission();
}

void setup(void) {
  beginPower();
  Serial.begin(115200);
  delay(1000);
  ucg.begin(UCG_FONT_MODE_TRANSPARENT);
  ucg.setRotate90();
  ucg.setColor(0, 0, 0, 0);
  ucg.setColor(1, 0, 0, 0);
  ucg.setColor(2, 0, 0, 0);
  ucg.setColor(3, 0, 0, 0);
}

/*
  Linear Congruential Generator (LCG)
  z = (a*z + c) % m;
  m = 256 (8 Bit)

  for period:
  a-1: dividable by 2
  a-1: multiple of 4
  c: not dividable by 2

  c = 17
  a-1 = 64 --> a = 65
*/
uint8_t z = 127;	// start value
uint8_t lcg_rnd(void) {
  z = (uint8_t)((uint16_t)65 * (uint16_t)z + (uint16_t)17);
  return z;
}




void draw_text(void) {
  ucg.setFont(ucg_font_ncenR14_tr);
  //ucg.setColor(255, 255, 255);
  ucg.setColor(lcg_rnd(), lcg_rnd(), lcg_rnd());
  ucg.setPrintPos(0, 20);
  ucg.print("The quick brown");
  ucg.setPrintPos(0, 40);
  ucg.print("fox jumps over");
  ucg.setPrintPos(0, 60);
  ucg.print("the lazy dog");
}

void draw_box(void) {
  ucg_int_t x, y, w, h;
  ucg.setColor(lcg_rnd(), lcg_rnd(), lcg_rnd());
  x = lcg_rnd() & 31;
  y = lcg_rnd() & 31;
  w = 63;
  w += lcg_rnd() & 31;
  h = 63;
  h += lcg_rnd() & 31;
  ucg.drawBox(x, y, w, h);
}

void draw_gradient_box(void) {
  ucg_int_t x, y, w, h;
  static uint8_t idx = 0;
  switch (idx & 3)
  {
    case 0: ucg.setColor(0, lcg_rnd(), lcg_rnd(), lcg_rnd()); break;
    case 1: ucg.setColor(1, lcg_rnd(), lcg_rnd(), lcg_rnd()); break;
    case 2: ucg.setColor(2, lcg_rnd(), lcg_rnd(), lcg_rnd()); break;
    case 3: ucg.setColor(3, lcg_rnd(), lcg_rnd(), lcg_rnd()); break;
  }
  idx++;
  x = lcg_rnd() & 31;
  y = lcg_rnd() & 31;
  w = 63;
  w += lcg_rnd() & 31;
  h = 63;
  h += lcg_rnd() & 31;
  ucg.drawGradientBox(x, y, w, h);
}


// returns FPS*10
uint16_t measure(void (*draw_fn)(void)) {
  uint16_t FPS10 = 0;
  uint32_t time;

  ucg.clearScreen();

  time = millis() + 10 * 1000;
  do {
    draw_fn();
    FPS10++;
  } while ( millis() < time );

  return FPS10;
}


static const unsigned char u8d_tab[3]  = { 100, 10, 1 } ;
const char *u8dp(char * dest, uint8_t v)
{
  uint8_t pos;
  uint8_t d;
  uint8_t c;
  for ( pos = 0; pos < 3; pos++ )
  {
    d = '0';
    c = *(u8d_tab + pos);
    while ( v >= c )
    {
      v -= c;
      d++;
    }
    dest[pos] = d;
  }
  dest[3] = '\0';
  return dest;
}

/* v = value, d = number of digits */
const char *u8d(uint8_t v, uint8_t d)
{
  static char buf[8];
  d = 3 - d;
  return u8dp(buf, v) + d;
}

const char *convert_FPS(uint16_t fps) {
  static char buf[6];
  strcpy(buf, u8d( (uint8_t)(fps / 10), 3));
  buf[3] =  '.';
  buf[4] = (fps % 10) + '0';
  buf[5] = '\0';
  return buf;
}

void show_result(const char *s, uint16_t fps)  {
  ucg.clearScreen();
  ucg.setFont(ucg_font_helvR18_tr);
  ucg.setColor(255, 255, 255);
  ucg.setPrintPos(0, 25);
  ucg.print(s);
  ucg.setPrintPos(0, 50);
  const char * fps_str = convert_FPS(fps);
  Serial.printf("%s: %s\n", s, fps_str);
  ucg.print(fps_str);
  delay(2000);
}

void loop(void)
{
  show_result("Text", measure(draw_text));
  show_result("Box", measure(draw_box));
  show_result("Gradient", measure(draw_gradient_box));
  delay(500);

}
