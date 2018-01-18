/*================================= EG LABS =======================================
 
 Turns on and off a light emitting diode(LED) connected to digital  
 pin 5, when pressing a pushbutton attached to pin 13. 
 
 The circuit:
 * LED attached from pin 5 to ground through a 1K resistor
 * pushbutton attached to pin 13 from +5V
 * 10K resistor attached to pin 13 from ground
//================================= EG LABS =======================================*/
 
// constants won't change. They're used here to 
// set pin numbers:
 
const int buttonPin = 13;             // the number of the pushbutton pin
const int ledPin =  5;                    // the number of the LED pin
 
// variables will change:
int buttonState = 0;                      // variable for reading the pushbutton status
 
void setup()
{
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);      
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);     
}
 
void loop()
{
  digitalWrite(buttonState, HIGH);
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  
  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == LOW) 
  {     
    // turn LED on:    
    digitalWrite(ledPin, HIGH);  
    delay(100);
  } 
  else 
  {
    // turn LED off:
    digitalWrite(ledPin, LOW); 
  }
}
