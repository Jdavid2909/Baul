
int ledverde = 7;
int ledama = 8;
int ledrojo = 9;

void setup() {
  pinMode(ledverde, OUTPUT);
  pinMode(ledama, OUTPUT);
  pinMode(ledrojo, OUTPUT);

  digitalWrite(ledverde, LOW);
  digitalWrite(ledama, LOW);
  digitalWrite(ledrojo, LOW);

}

void loop() {
  digitalWrite(ledverde, HIGH);
  delay(3000);
  digitalWrite(ledverde, LOW);
  digitalWrite(ledama, HIGH);
  delay(3000);
  digitalWrite(ledama, LOW);
  digitalWrite(ledrojo, HIGH);
  delay(3000);
  digitalWrite(ledrojo, LOW);

}
