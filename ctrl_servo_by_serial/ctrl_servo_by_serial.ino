/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 https://www.arduino.cc/en/Tutorial/LibraryExamples/Sweep
*/

#include <Servo.h>

#define MAX 180
#define MIN 0
#define STEP 3

Servo servo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 90;    // variable to store the servo position

void setup() {
  Serial.begin(9600);
  Serial.println("Control Servo by Serial");
  servo.attach(9);
  servo.write(pos);
  delay(15);
}

void loop() {
  if(Serial.available() > 0) {
    char ch = Serial.read();
    if(ch == '.') {
      if(pos + STEP <= MAX) pos = pos + STEP;
      else pos = MAX;
    } else if(ch == ',') {
      if(pos - STEP >= MIN) pos = pos - STEP;
      else pos = MIN;
    }
    else if(ch == '1') pos =45;
    else if(ch == '2') pos =90;
    else if(ch == '3') pos =135;
    else;
    Serial.print("pos = ");
    Serial.println(pos);
    servo.write(pos);
  }
}
