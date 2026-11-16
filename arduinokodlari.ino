const int SW = 2;

bool lastState = HIGH;

void setup() {
  pinMode(SW, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  bool currentState = digitalRead(SW);

  if (lastState == HIGH && currentState == LOW) {
    Serial.println("CLICK");
  }

  lastState = currentState;
  delay(20);
}