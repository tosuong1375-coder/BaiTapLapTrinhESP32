
void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  Serial.println("ESP32 VERSION 2");
}

void loop() {
  if (Serial.available()) {
    char data = Serial.read();

    if (data == 'A') {
      digitalWrite(2, HIGH);
      Serial.println("LED IS ON");
    }
    else if (data == 'B') {
      digitalWrite(2, LOW);
      Serial.println("LED OFF");
    }
  }
}
