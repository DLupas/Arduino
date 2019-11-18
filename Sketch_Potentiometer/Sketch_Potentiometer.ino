/* Analog Read to LED
 * ------------------ 
 *
 * turns on and off a light emitting diode(LED) connected to digital  
 * pin 13. The amount of time the LED will be on and off depends on
 * the value obtained by analogRead(). In the easiest case we connect
 * a potentiometer to analog pin 2.
 *
 * Created 1 December 2005
 * copyleft 2005 DojoDave <http://www.0j0.org>
 * http://arduino.berlios.de
 *
 */

int potPin = 2;    // select the input pin for the potentiometer
int ledPin1 = 13;   // select the pin for the LED
int ledPin2 = 12;
int val1 = 0;       // variable to store the value coming from the sensor
int val2 = 0;  

void setup() {
  pinMode(ledPin1, OUTPUT);  // declare the ledPin as an OUTPUT
  pinMode(ledPin2, OUTPUT);  // declare the ledPin as an OUTPUT
}

void loop() {
  val1 = analogRead(potPin);    // read the value from the sensor
  val2 = 1023 - val1;
  if (val1 > val2)
  {
    int diff = val1 - val2;
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    delay(val2);
    digitalWrite(ledPin2, LOW);
    delay(diff);
    digitalWrite(ledPin1, LOW);
    delay(1023 - val1);
  }
  else 
  {
    int diff = val2 - val1;
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin1, HIGH);
    delay(val1);
    digitalWrite(ledPin1, LOW);
    delay(diff);
    digitalWrite(ledPin2, LOW);
    delay(1023 - val2);  
  }
}
