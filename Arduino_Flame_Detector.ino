const int flameSensorPin = 5;      // Digital input from flame sensor
const int redLedPin = 3;           // Red LED for fire alert
const int greenLedPin = 4;         // Green LED for safe status
const int buzzerPin = 6;           // Buzzer for fire alert

void setup() {
  pinMode(flameSensorPin, INPUT);
  pinMode(redLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int flameDetected = digitalRead(flameSensorPin);

  if (flameDetected == LOW) {
    // Fire detected
    digitalWrite(redLedPin, HIGH);
    digitalWrite(greenLedPin, LOW);
    digitalWrite(buzzerPin, HIGH);
  } else {
    // No fire
    digitalWrite(redLedPin, LOW);
    digitalWrite(greenLedPin, HIGH);
    digitalWrite(buzzerPin, LOW);
  }

  delay(200); // Small delay for stability
}