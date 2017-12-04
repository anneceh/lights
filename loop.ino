#include <Adafruit_NeoPixel.h>

int slynge = 2;
int lamper = 40;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(lamper, slynge, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show();
}

void loop() {

    delay(1000);
    int lys = random(lamper);
    int lys2 = random(lamper);
    int lys3 = random(lamper);
    int lys4 = random(lamper);
    int lys5 = random(lamper);
    strip.setPixelColor(lys, strip.Color(20, 20, 20));
    strip.setPixelColor(lys2, strip.Color(0, 0, 20));
    strip.setPixelColor(lys3, strip.Color(20, 20, 20));
    strip.setPixelColor(lys4, strip.Color(0, 0, 20));
    strip.setPixelColor(lys5, strip.Color(20, 20, 20));
    strip.show(); 
    delay(3000);
    strip.setPixelColor(lys, strip.Color(0, 0, 0));
    strip.setPixelColor(lys2, strip.Color(0, 0, 0));
    strip.setPixelColor(lys3, strip.Color(0, 0, 0));
    strip.setPixelColor(lys4, strip.Color(0, 0, 0));
    strip.setPixelColor(lys5, strip.Color(0, 0, 0));
    strip.show(); 
}
