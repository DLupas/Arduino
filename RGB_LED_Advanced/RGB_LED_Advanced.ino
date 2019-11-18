int ledblue = 11;
int ledgreen = 10;
int ledred = 9;
//int button = 2;
void setup() {
  // put your setup code here, to run once:
pinMode(ledblue, OUTPUT); //set all leds to output
pinMode(ledgreen, OUTPUT);
pinMode(ledred, OUTPUT);
//pinMode(button, INPUT);
Serial.begin(9600);
}

void loop() {
 // if (digitalRead(button) == 0)
 // int start = 1;
 // while (start == 1)
// while (digitalRead(button) == 1)
// {
//  Serial.println(button);
// // delay(10);
//  }
//  Serial.println("start");
for (int x = 0; x < 768; x++) //goes up by 1 each time
{
   int redintensity = 0;
   int greenintensity = 0;
   int blueintensity = 0;
   
   if (x<=255)
   {
   redintensity = 255 - x;
   greenintensity = x;
   blueintensity = 0;
   
    }
   
   else if (x<=511)
   {
    redintensity = 0;
   greenintensity = 255 - (x - 255); //at 255 green will be 255 and x will be 0
   blueintensity = x - 255;
   
    }

   if (x>=512)
   {
    redintensity = x - 512;
   greenintensity = 0;
   blueintensity = 255 - (x -512);
   
    }
   
   

 analogWrite(ledred, redintensity); //this will carry out the colour
analogWrite(ledblue, blueintensity);
analogWrite(ledgreen, greenintensity);  
delay(100);
Serial.println(redintensity);
Serial.println(greenintensity);
Serial.println(blueintensity);
Serial.println("");

  }

}

