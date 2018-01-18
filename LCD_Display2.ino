

// include the library code:
#include <LiquidCrystal.h>
int a=0;
int b=15;
int c=7;
int d=8;
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  lcd.print('A');
  lcd.setCursor(15,0);
  lcd.print('B');
  
  lcd.setCursor(7,1);
  lcd.print('C');
  lcd.setCursor(8,1);
  lcd.print('D');
  
  
  
  // Print a message to the LCD.
  while((a<=9 && b>=8)&&(c>=0&&d<=15))
  {
    lcd.clear();
    lcd.setCursor(a,0);
    lcd.print('A');
    lcd.setCursor(b,0);
    lcd.print('B');
    lcd.setCursor(c,1);
    lcd.print('C');
    lcd.setCursor(d,1);
    lcd.print('D');
    
    
    a++;
    b--;
    c--;
    d++;
    delay(200);  
  }
  
}

void loop() {
  // Turn off the display:
 
}

