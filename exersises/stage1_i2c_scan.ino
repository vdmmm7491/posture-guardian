
#include <Wire.h>


void setup() {                         //  opens setup

  Serial.begin(115200);
  Wire.begin(21, 22);
  delay(1000);
  Serial.println("Scanninng I2C bus...");
  for (byte addr = 1; addr < 127; addr++) {   //  opens the loop
    Wire.beginTransmission(addr);
    if (Wire.endTransmission() == 0) {        //  opens the if
      Serial.print("Found device at 0x");
      Serial.println(addr, HEX);
    }                                         //  closes the if
  }                                           //  closes the loop
  Serial.println("Done.");
}                                      // closes setup

void loop() {
}