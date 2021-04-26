#include <Led.h>

Led myLed(2);

void setup() {
  //
}

void loop() {
  myLed.on();
  delay(300);
  myLed.off();
  delay(300);
}
