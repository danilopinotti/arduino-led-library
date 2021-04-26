# Simple LED Library
A very simple LED library to use in Arduino sketches.

## How to use
### Import library in your sketch:
```cpp
#include <Led.h>
```

### Declare and initialize a LED
```cpp
#define LED_PIN 2;

Led myLed(LED_PIN);
```

### Turn on or turn off the Led
```cpp
void loop() {
  myLed.on();
  delay(300);
  myLed.off();
  delay(300);
}
```

## Examples
Check the examples folder to more use cases.

## License
This code is released under the MIT License.
