#include <Adafruit_NeoPixel.h>

int inputPin = 2;
int numberOfLights = 50;
int updateSpeed = 20;
int lightStrength = 255;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(numberOfLights, inputPin, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
}

void changeColorForAllLights(uint32_t color) {
  for (int lightIndex = 0; lightIndex < numberOfLights; lightIndex++) {
    strip.setPixelColor(lightIndex, color);
    strip.show();
    delay(updateSpeed);
  }
}

void loop() {

  uint32_t green = strip.Color(lightStrength, 0, 0);
  uint32_t red = strip.Color(0, lightStrength, 0);
  uint32_t blue = strip.Color(0, 0, lightStrength);
  uint32_t magenta = strip.Color(lightStrength, 0, lightStrength);
  uint32_t white = strip.Color(lightStrength, lightStrength, lightStrength);

  changeColorForAllLights(green);
  changeColorForAllLights(red);
  changeColorForAllLights(blue);
  changeColorForAllLights(magenta);
  changeColorForAllLights(white);
  strip.show(); 
}