int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
void setup() {
  // put your setup code here, to run once:
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (led1, HIGH);
  delay(1000);
  digitalWrite(led2,HIGH);
  delay(1000);
  digitalWrite(led3, HIGH);
  delay(1000);
   digitalWrite(led4, HIGH);
  delay(1000);
}
