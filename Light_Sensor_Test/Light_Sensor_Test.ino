int lightsensor = 0;
int led = 13;
void setup() {
  // put your setup code here, to run once:
pinMode(lightsensor, INPUT);
pinMode(led, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(analogRead(lightsensor));
delay(300);
}
