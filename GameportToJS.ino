// Simple example application that shows how to read four Arduino
// digital pins and map them to the USB Joystick library.
//
// Ground digital pins 9, 10, 11, and 12 to press the joystick 
// buttons 0, 1, 2, and 3.
//
// NOTE: This sketch file is for use with Arduino Leonardo and
//       Arduino Micro only.
//
// by Matthew Heironimus
// 2015-11-20
//--------------------------------------------------------------------

#include <Joystick.h>

//Joystick_ Joystick;
Joystick_ Joystick(JOYSTICK_DEFAULT_REPORT_ID, 
  JOYSTICK_TYPE_MULTI_AXIS, 4, 0,
  true, true, false, false, false, false,
  true, true, false, false, false);

void setup() {
  // Initialize Button Pins
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);

  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);

  // Initialize Joystick Library
  Joystick.begin();
  //Serial.begin(9600);
}

// Constant that maps the phyical pin to the joystick button.
const int pinToButtonMap = 9;

// Last state of the button
int lastButtonState[4] = {0,0,0,0};

void loop() {

  // Read digital pin values
  for (int index = 0; index < 4; index++)
  {
    int currentButtonState = !digitalRead(index + pinToButtonMap);
    if (currentButtonState != lastButtonState[index])
    {
      Joystick.setButton(index, currentButtonState);
      lastButtonState[index] = currentButtonState;
    }
  }

  // Read analog pin values
  Joystick.setXAxis(analogRead(A0));
  //Serial.println(analogRead(0));
  Joystick.setYAxis(analogRead(A1));
  Joystick.setRudder(analogRead(A2));
  Joystick.setThrottle(analogRead(A3));

  //delay(50);
}
