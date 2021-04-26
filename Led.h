#ifndef LED_H_
#define LED_H_

#include <Arduino.h>

class Led {
  public:
    Led(int pin);
    void on();
    void off();

  private:
    int pin;
    bool isOn;
};

#endif
