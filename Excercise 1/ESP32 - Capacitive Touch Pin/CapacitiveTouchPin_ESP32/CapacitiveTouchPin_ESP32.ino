#define touchPin 4; //Change this value if need be (4, 2, 15, 32, 33, 27, 14)

void setup() {
  Serial.begin(9600);
  delay(1000); // give me time to bring up serial monitor
  Serial.println("ESP32 Touch Test");
}

void loop() {
  Serial.println(touchRead(touchPin));  // get value of Touch 0 pin = GPIO 4
  delay(500);
}