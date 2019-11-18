int tempsensor = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(tempsensor,INPUT);

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  float voltage, degreesC;
  int amount = analogRead(tempsensor);
  voltage = amount * 5.0 / 1023.0;
 // Serial.println(voltage);
  degreesC = (voltage - 0.5) * 100.0;
Serial.println(degreesC);
delay(500);

}
