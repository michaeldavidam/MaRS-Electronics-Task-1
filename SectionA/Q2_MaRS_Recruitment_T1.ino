// C++ code
//
// controlling RGB LED + blinking LED using potentiometer

int pot = A0;

// my RGB connections (custom order)
int green = 9;
int blue  = 10;
int red   = 11;

int led = 3;

unsigned long prevTime = 0;
int ledState = 0;

void setup() {
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(led, OUTPUT);
}

void loop() {

  int value = analogRead(pot);   // read knob (0–1023)

  // changing color
  int g = map(value, 0, 1023, 0, 255);
  int b = map(value, 0, 1023, 255, 0);
  int r = map(value, 0, 1023, 100, 255);

  analogWrite(green, g);
  analogWrite(blue, b);
  analogWrite(red, r);

  // blinking LED speed
  int speed = map(value, 0, 1023, 100, 1000);

  unsigned long now = millis();

  if (now - prevTime >= speed) {
    prevTime = now;
    ledState = !ledState;
    digitalWrite(led, ledState);
  }
}
