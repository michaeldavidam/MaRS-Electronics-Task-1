// ===== PIN DEFINITIONS =====
const int BLED = 9;     // Blue (PWM)
const int GLED = 10;    // Green (PWM)
const int RLED = 11;    // Red (PWM)
const int BUTTON = 2;   // Push button

boolean lastButton = LOW;
boolean currentButton = LOW;
int ledMode = 0;

void setup() {
  pinMode(BLED, OUTPUT);
  pinMode(GLED, OUTPUT);
  pinMode(RLED, OUTPUT);
  pinMode(BUTTON, INPUT);

  Serial.begin(9600);   // added for Serial output
}

// Debounce
boolean debounce(boolean last) {
  boolean current = digitalRead(BUTTON);
  if (last != current) {
    delay(5);
    current = digitalRead(BUTTON);
  }
  return current;
}

void setMode(int mode) {

  if (mode == 0) {        // 
    Serial.println("OFF");
    analogWrite(RLED, 0);
    analogWrite(GLED, 0);
    analogWrite(BLED, 0);
  }

  else if (mode == 1) {   // RED
    Serial.println("Red");
    analogWrite(RLED, 220);
    analogWrite(GLED, 0);
    analogWrite(BLED, 0);
  }

  else if (mode == 2) {   // GREEN
    Serial.println("Green");
    analogWrite(RLED, 0);
    analogWrite(GLED, 160);
    analogWrite(BLED, 0);
  }

  else if (mode == 3) {   // 
    Serial.println("Blue");
    analogWrite(RLED, 0);
    analogWrite(GLED, 0);
    analogWrite(BLED, 200);
  }

  else if (mode == 4) {   // YELLOW
    Serial.println("Yellow");
    analogWrite(RLED, 220);
    analogWrite(GLED, 100);
    analogWrite(BLED, 0);
  }

  else if (mode == 5) {   // PURPLE
    Serial.println("Purple");
    analogWrite(RLED, 200);
    analogWrite(GLED, 0);
    analogWrite(BLED, 150);
  }

  else if (mode == 6) {   // CYAN
    Serial.println("Cyan");
    analogWrite(RLED, 0);
    analogWrite(GLED, 140);
    analogWrite(BLED, 180);
  }

  else if (mode == 7) {   // WHITE
    Serial.println("White");
    analogWrite(RLED, 160);
    analogWrite(GLED, 160);
    analogWrite(BLED, 160);
  }

  else if (mode == 8) {   // PINK
    Serial.println("Pink");
    analogWrite(RLED, 200);
    analogWrite(GLED, 0);
    analogWrite(BLED, 120);
  }

  else if (mode == 9) {   // ORANGE
    Serial.println("Orange");
    analogWrite(RLED, 240);
    analogWrite(GLED, 20);
    analogWrite(BLED, 0);
  }
}

void loop() {
  currentButton = debounce(lastButton);

  if (lastButton == LOW && currentButton == HIGH) {
    ledMode++;
  }

  lastButton = currentButton;

  if (ledMode > 9) {
    ledMode = 0;
  }

  setMode(ledMode);
}
