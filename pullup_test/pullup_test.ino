// Pull-up resistors test
// (Connect the LED and resistor to IO13)

void setup() {
  Serial.begin(115200);
  delay(10);
}

void loop() {
  delay(5000);
  pinMode(13, INPUT_PULLUP);
  Serial.println("INPUT_PULLUP");
  delay(5000);
  pinMode(13, INPUT);
  Serial.println("INPUT");
  delay(5000);
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);
  Serial.println("OUTPUT HIGH");
  delay(5000);
  digitalWrite(13, LOW);
  Serial.println("OUTPUT LOW");
}
