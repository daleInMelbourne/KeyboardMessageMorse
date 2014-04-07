/* 
 Keyboard Button test
 
 For the Arduino Leonardo and Micro.
 
 Sends a text string when a button is pressed.
 
 The circuit:
 * pushbutton attached from pin 2 to +5V
 * 10-kilohm resistor attached from pin 4 to ground
 
 created 24 Oct 2011
 modified 27 Mar 2012
 by Tom Igoe
 
 This example code is in the public domain.
 
 http://www.arduino.cc/en/Tutorial/KeyboardButton
 */

const int buttonPin = 2;          // input pin for pushbutton
int previousButtonState = HIGH;   // for checking the state of a pushButton
int counter = 0;                  // button push counter


// use this option for OSX:
#define KEY_DOWN_ARROW	 0xD9
char ctrlKey = KEY_DOWN_ARROW;
// use this option for Windows and Linux:
//  char ctrlKey = KEY_LEFT_CTRL;  

void setup() {
  // make pin 2 an input and turn on the 
  // pullup resistor so it goes high unless
  // connected to ground:
  pinMode(2, INPUT_PULLUP);
  digitalWrite(2, HIGH);
  // initialize control over the keyboard:
  Keyboard.begin();
}

void loop() {
 
  while (digitalRead(2) == HIGH) {
    // do nothing until pin 2 goes low
  //  delay(5);
  }

  delay(10);
  // new document:
  Keyboard.press(ctrlKey);
//  Keyboard.press('n');
 while (digitalRead(2) == LOW) {
    // do nothing until pin 2 goes low
  //  delay(5);
  }
//  delay(50);
  Keyboard.releaseAll();
  // wait for new window to open:
  delay(10);
}
