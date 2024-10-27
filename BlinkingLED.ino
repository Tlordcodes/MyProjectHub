int ledPin = 13;
int delayTime = 1000;  // Start with 1 second

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(delayTime);  // Wait for the current delay time
  digitalWrite(ledPin, LOW);
  delay(delayTime);

  // Change the delay time every few blinks
  delayTime = random(100, 1000); // Random delay between 100ms and 1000ms
}

