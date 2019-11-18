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
  int brightness = analogRead(lightsensor);
  if (brightness<600)
  {
    digitalWrite(led, HIGH);
    }
 else
 {
  digitalWrite(led, LOW);
  }
Serial.println(brightness);
delay(500);

}
