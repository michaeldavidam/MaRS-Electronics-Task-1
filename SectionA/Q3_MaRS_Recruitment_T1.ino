// C++ code
//
int led = 7;
int button = 2;

unsigned long startTime = 0;
bool ledOn = false;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  Serial.begin(9600);

  randomSeed(analogRead(A0)); // random function start
}

void loop() {

  // wait random time before turning LED on
  if (ledOn == false) {
    int waitTime = random(2000, 5000); // 2–5 sec
    delay(waitTime);

    digitalWrite(led, HIGH);
    startTime = millis();
    ledOn = true;
  }

  // checking button press
  if (ledOn && digitalRead(button) == LOW) {
    unsigned long reaction = millis() - startTime;

    Serial.print("Reaction time: ");
    Serial.print(reaction);
    Serial.println(" ms");

    digitalWrite(led, LOW);
    ledOn = false;

    delay(1000); 
  }
}
