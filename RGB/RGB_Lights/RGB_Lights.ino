int red_light_pin= 11;
int green_light_pin = 10;
int blue_light_pin = 9;

int redLightValue = 255; //Choose value between 0 and 255
int blueLightValue = 255; //Choose value between 0 and 255
int greenLightValue = 255; //Choose value between 0 and 255

void setup() {
  pinMode(red_light_pin, OUTPUT);
  pinMode(green_light_pin, OUTPUT);
  pinMode(blue_light_pin, OUTPUT);
}
void loop() {
  analogWrite(red_light_pin, redLightValue);
  analogWrite(green_light_pin, greenLightValue);
  analogWrite(blue_light_pin, blueLightValue);
  delay(500);
}
