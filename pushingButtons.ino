/*  Title:       Always Pushing Buttons Button Box
 *  Description: Send keystroke to computer when large button is pushed
 *  Author:      Colin Travis & Jera Tylke
 *  Version:     1.5
 *  Modified:    05/13/2019
 */

#define DEBUG false
#include <Bounce2.h>
#include <Keyboard.h>

#define buttonPin 2 // the pin number of the handle switch

int previousButtonState = HIGH;   // for checking the state of a pushButton
const char sendKey = 'J'; // This is the code sent when the switch is activated

Bounce debouncer = Bounce(); // Instantiate a Bounce object

// /////////////////////////////////////////////////////////////////////////////
//                            Setup and Loop                                  //
// /////////////////////////////////////////////////////////////////////////////
void setup()
{
  pinMode(buttonPin, INPUT_PULLUP);

  debouncer.attach(buttonPin);
  debouncer.interval(5); // interval in ms

  if (DEBUG)
    Serial.begin(9600);
  if (DEBUG)
    Serial.println("Serial working.");
}

void loop()
{
  // Update the Bounce instance :
  debouncer.update();

  int buttonState = digitalRead(buttonPin);

  //  int switchValue = debouncer.read();
  int switchValue = digitalRead(buttonPin);
  if (buttonState != previousButtonState && buttonState == LOW)
  {
    if (DEBUG)
      Serial.println("Button Pushed ");

     Keyboard.press(sendKey);
  }
  previousButtonState = buttonState;
  Keyboard.release(sendKey);
}
