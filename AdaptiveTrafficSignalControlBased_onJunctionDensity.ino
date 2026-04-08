// Adaptive Traffic Signal (using sensors - simple version)

int sensor1 = 7;
int sensor2 = 8;
int sensor3 = 9;

int red = 2;
int yellow = 3;
int green = 4;

void setup() {
  pinMode(sensor1, INPUT_PULLUP);   // using pullup (button press = LOW)
  pinMode(sensor2, INPUT_PULLUP);
  pinMode(sensor3, INPUT_PULLUP);

  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  int s1 = digitalRead(sensor1);
  int s2 = digitalRead(sensor2);
  int s3 = digitalRead(sensor3);

  int count = 0;

  if (s1 == LOW) {
    count++;
  }

  if (s2 == LOW) {
    count++;
  }

  if (s3 == LOW) {
    count++;
  }

  int time = 3000;   // default
  String level = "LOW";

  // simple logic
  if (count == 0) {
    time = 3000;
    level = "LOW";
  }

  if (count == 1) {
    time = 5000;
    level = "MEDIUM";
  }

  if (count >= 2) {
    time = 8000;
    level = "HIGH";
  }

  // printing
  Serial.println("Traffic Update");
  Serial.print("Sensors: ");
  Serial.print(s1); Serial.print(" ");
  Serial.print(s2); Serial.print(" ");
  Serial.println(s3);

  Serial.print("Vehicles detected: ");
  Serial.println(count);

  Serial.print("Level: ");
  Serial.println(level);

  Serial.print("Green time: ");
  Serial.print(time / 1000);
  Serial.println(" sec");

  Serial.println("------------------");

  // GREEN
  digitalWrite(green, HIGH);
  delay(time);
  digitalWrite(green, LOW);

  // YELLOW
  digitalWrite(yellow, HIGH);
  delay(1000);
  digitalWrite(yellow, LOW);

  // RED
  digitalWrite(red, HIGH);
  delay(time);
  digitalWrite(red, LOW);

  delay(500);
}