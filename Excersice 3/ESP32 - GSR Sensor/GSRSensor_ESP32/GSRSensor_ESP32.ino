#define GSRSensor 13 //Change if need be
const int delay_sound = 50; //This value is in mS

void setup() {
Serial.begin(9600); // setup serial
pinMode(GSRSensor, INPUT);
}

void loop() {
int sensorFeed = analogRead(GSRSensor);
Serial.println(sensorFeed);
delay(delay_sound);
} 
