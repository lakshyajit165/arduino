#include <LiquidCrystal.h>
char a;
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  Serial.begin(9600);
 
  
}

void loop() {

  if(Serial.available()>0){
     a = Serial.read();
     Serial.print(a);

    lcd.print(a);
}
}
