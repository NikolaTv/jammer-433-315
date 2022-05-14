void setup() {
  pinMode(9, OUTPUT);
}

void loop() {
  digitalWrite(9, HIGH);
  delayMicroseconds(500);
  digitalWrite(9, LOW);
  delayMicroseconds(500);
}
