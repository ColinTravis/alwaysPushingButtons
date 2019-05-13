# Always Pushing Buttons Button-Box

> Small Arduino sketch for triggering a keypress when a button is pushed.

This sketch uses the _Bounce2_ library for debouncing, as well as some workarounds to ensure the hardware doesn't require a physical resistor (**STILL RECOMMENDED**)

## Setup

Connect the **COM** cable to **GND** on the Arduino Leonardo

Connect the **NO** cable to **DPin2** on the Arduino Leonardo

## Configuration

Enable `DEBUG` in define var to enable the Serial monitor debug messages.

Change `sendKey` variable to change which key is pressed on button push.


## Credits

### Authors

This project was created by:

- [@colintravis](https://github.com/colintravis)

### Software

This project is build using the following software.

- [Arduino](https://arduino.cc/)

