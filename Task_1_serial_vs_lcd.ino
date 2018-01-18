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
  switch(a){

    case '1':lcd.clear();
             lcd.print("ONE");
             break;
     case '2':lcd.clear();
              lcd.print("TWO");
              break;
      case '3':lcd.clear();
                lcd.print("THREE");
                 break;
            case '4':lcd.clear();
                lcd.print("FOUR");
                 break;
            case '5':lcd.clear();
                     lcd.print("FIVE");
                     break;
            case '6':lcd.clear();
                      lcd.print("SIX");
                      break;
            case '7':lcd.clear();
                      lcd.print("SEVEN");
                     break;
            case '8':lcd.clear();
                      lcd.print("EIGHT");
                      break;
            case '9':lcd.clear();
            lcd.print("NINE");
           break;             
          default:break;
  }
  }
}

