// C++ code
//
// 3 LEDs blinking at different speeds using millis()

int ledPin1 = 2;
int ledPin2 = 3;
int ledPin3 = 4;

// intervals in ms
unsigned long t1 = 500;
unsigned long t2 = 1000;
unsigned long t3 = 1500;

// storing previous times
unsigned long prev1 = 0;
unsigned long prev2 = 0;
unsigned long prev3 = 0;

// states
int s1 = 0;
int s2 = 0;
int s3 = 0;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {

  unsigned long now = millis();
  
  /*The millis() function returns the number of
  milliseconds since the Arduino started running 
  the program. 
  It is used to track time 
  without stopping the program execution, 
  unlike delay(). 
  By comparing the current time with a previously 
  stored time, we can perform tasks like blinking 
  LEDs independently and simultaneously.*/
  
  
  // first LED
  if (now - prev1 >= t1) {
    prev1 = now;
    s1 = !s1;
    digitalWrite(ledPin1, s1);
  }

  // second LED
  if (now - prev2 >= t2) {
    prev2 = now;
    s2 = !s2;
    digitalWrite(ledPin2, s2);
  }

  // third LED
  if (now - prev3 >= t3) {
    prev3 = now;
    s3 = !s3;
    digitalWrite(ledPin3, s3);
  }
}
