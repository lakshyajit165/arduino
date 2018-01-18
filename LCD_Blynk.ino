int x =0;
int buttonState = 0;
#define BLYNK_PRINT Serial  
#include<ESP8266WiFi.h>
#include<BlynkSimpleEsp8266.h>


// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "1f8c35526db6450c9aad1251748a00cc";
char ssid[] = "Redmi";
char pass[] = "sudiptad";


WidgetLCD lcd(V1);


void setup()
{
  // Debug console
  Serial.begin(9600);
  pinMode(D1,INPUT_PULLUP);
  //pinMode(D0,OUTPUT);
  Blynk.begin(auth, ssid, pass);
  //digitalWrite(D0,HIGH);
   //Use it to clear the LCD Widget
   // use: (position X: 0-15, position Y: 0-1, "Message you want to print")
  lcd.print(5, 1, x);
 
  // Please use timed events when LCD printintg in void loop to avoid sending too many commands
  // It will cause a FLOOD Error, and connection will be dropped
 lcd.clear();
}

void loop()
{
  Blynk.run();
  buttonState = digitalRead(D1);
  if(buttonState == LOW){
    x++;
    /*if(x>10){
      digitalWrite(D0,LOW);
    }else{
      digitalWrite(D0,HIGH);
      }*/
  }
  lcd.print(5, 0, "Value");
  lcd.print(5,1,x);
  delay(200);
  lcd.clear();
}
