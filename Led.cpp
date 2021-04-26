#include "Led.h"

Led::Led(int pin) {
  this->pin = pin;
  this->isOn = false;
  pinMode(pin, OUTPUT);
}

void Led::on() {
  digitalWrite(this->pin, HIGH);
  this->isOn = true;
}

void Led::off() {
  digitalWrite(this->pin, LOW);
  this->isOn = false;
}
