int ledblue = 11;
int ledgreen = 10;
int ledred = 9;
void setup() {
  // put your setup code here, to run once:
pinMode(ledblue, OUTPUT); //set all leds to output
pinMode(ledgreen, OUTPUT);
pinMode(ledred, OUTPUT);
}

void loop() {
    digitalWrite(ledblue, HIGH); // codes for blue light
    digitalWrite(ledgreen, LOW);
    digitalWrite(ledred, LOW);
    delay(1000); // lights switch every second

   digitalWrite(ledblue, HIGH); //codes for purple light
   digitalWrite(ledgreen, LOW);
   digitalWrite(ledred, HIGH);
   delay(1000);

    digitalWrite(ledblue, LOW); // codes for red light
   digitalWrite(ledgreen, LOW);
   digitalWrite(ledred, HIGH);
   delay(1000);

    digitalWrite(ledblue, LOW); // codes for yellow light
   digitalWrite(ledgreen, HIGH);
   digitalWrite(ledred, HIGH);
   delay(1000);

   digitalWrite(ledblue, LOW); //codes for green light
   digitalWrite(ledgreen, HIGH);
   digitalWrite(ledred, LOW);
   delay(1000);

   digitalWrite(ledblue, HIGH); // codes for light blue light
   digitalWrite(ledgreen, HIGH);
   digitalWrite(ledred, LOW);
   delay(1000);
}
