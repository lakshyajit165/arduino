char data = 0;                //Variable for storing received data
void setup() 
{
  Serial.begin(9600);         //Sets the data rate in bits per second (baud) for serial data transmission
  pinMode(13, OUTPUT); 
  pinMode(12, OUTPUT);//Sets digital pin 13 as output pin
}
void loop()
{
  if(Serial.available() > 0)  // Send data only when you receive data:
  {
    data = Serial.read();      //Read the incoming data and store it into variable data
    Serial.print(data);        //Print Value inside data in Serial monitor
    Serial.print("\n");        //New line 
    if(data == '1'){            //Checks whether value of data is equal to 1 
      digitalWrite(13, HIGH);
    }else if(data == '2'){
      digitalWrite(13, LOW);
      
      }
    else if(data == '3'){       //Checks whether value of data is equal to 0
      digitalWrite(12,HIGH);
      
    }
     else if(data == '4'){       //Checks whether value of data is equal to 0
      digitalWrite(12,LOW);
      
    }//If value is 0 then LED turns OFF//If value is 0 then LED turns OFF
  }                            
 
}
