

// include the library code:
#include <LiquidCrystal.h>
int a=1;
int b=14;
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  lcd.print('A');
  lcd.setCursor(15,0);
  lcd.print('B');
  // Print a message to the LCD.
  while(a<=9 && b>=8)
  {
    lcd.clear();
    lcd.setCursor(a,0);
    lcd.print('A');
    lcd.setCursor(b,0);
    lcd.print('B');
    
    a++;
    b--;
    delay(200);  
  }
  
}

void loop() {
  // Turn off the display:
 
}

