int button = 2;
int led1 = 13;
int led2 = 12;
void setup() {
  // put your setup code here, to run once:
pinMode(button, INPUT);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int buttonstate = digitalRead(button);
int brightness = 0;
int fadeamount = 1;
if (buttonstate == LOW)
{
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  }
  else
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    }
}
