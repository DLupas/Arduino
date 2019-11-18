//Hey, welcome to my Personal Interest Application!
//The format I will be doing is an Arduino breadboard/program.
//Arduino is an open source, C based program designed to get people into electronics.
//The breadboard is there so I do not have to solder everything together.

#include <LiquidCrystal.h> //These slashes comment things out so I can type whatever I want.
//The best part about Arduino is the huge community around it. They create "libraries" with extra commands that I can use.

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2; //These are the inputs for the "Liquid Crystal Display" down there.
LiquidCrystal lcd(rs, en, d4, d5, d6, d7); //Now we create an object with all the variables.
int delayInt = 500;
String strText = "Welcome to my Personal Interest Application!"; //Here's my message.

int button = 0; //Here's the button.
int start = 0; //These variables will come in handy later.
int displayLength = 16;

//Here is our first Arduino structure.
//While loops continue to loop until their criteria is invalidated.
  

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  pinMode(button, INPUT);

  while (true) 
  { 
    if (digitalRead(button) == 0)
      break; //Break exits the current loop.
    delay(delayInt);
}

}


void loop() {
//You might be wondering why it looks like such a mess.
//It is because I am unorganized.
//Just kidding, it is because the board is so small.
//That being said, I tried to make it easier on you eyes (and mine).
// The long strips on the sides connect everything on them together, saving a ton of wires.
// Plus everything is colour coded.
// Red is 5 volts, white is inputs, yellow is outputs, and black is the ground.
   
  if (start < displayLength) { //If loops check to see if their criteria is correct then excecute their program.
     lcd.print(strText.charAt(start));
     start++;
     delay(delayInt);
  }
  else { //Otherwise, we go to this else portion.
    int end1 = start;
    int start1 = end1 - displayLength;
    if (end1 > strText.length()) {
        end1 = strText.length();
    }
  
    String displayText = strText.substring (start1, end1); //This substring is a group of 16 letters.
    lcd.print(displayText);
    start++;
    if (start > strText.length()) {
      start = 0;
    }
    
    delay( delayInt);
    lcd.clear();  
  }
  

}
