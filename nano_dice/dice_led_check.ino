/*
  dice
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);

  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(A1, LOW);
  digitalWrite(A2, LOW);
  digitalWrite(A3, LOW);
  digitalWrite(A4, LOW);
  digitalWrite(A5, LOW);

  pinMode(12, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  setup();
  delay(300);
  digitalWrite(A1, HIGH);
  delay(300);
  digitalWrite(A3, HIGH);
  delay(300);
  digitalWrite(A2, HIGH);
  delay(300);
  digitalWrite(3, HIGH);
  delay(300);
  digitalWrite(4, HIGH);
  delay(300);
  digitalWrite(A5, HIGH);
  delay(300);
  digitalWrite(A4, HIGH);
  delay(500);
}
