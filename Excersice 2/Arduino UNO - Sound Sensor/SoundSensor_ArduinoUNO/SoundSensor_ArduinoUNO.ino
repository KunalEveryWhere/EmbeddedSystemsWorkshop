#define soundSensor A0 //Change if need be
const int delay_sound = 200; //This value is in mS

void setup() {
Serial.begin(9600); // setup serial
pinMode(soundSensor, INPUT);
}

void loop() {
int sensorFeed = analogRead(soundSensor);
Serial.println(sensorFeed);
delay(delay_sound);
} 
