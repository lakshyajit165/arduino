char data = 0;
void setup() {
   // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0)
  {
    data = Serial.read();
    if(data == '1')
        digitalWrite(13, HIGH); 
    else if(data == '2')
         digitalWrite(13, LOW);
         else if(data == '3')
               digitalWrite(12, HIGH);
               else if(data == '4' )
                  digitalWrite(12, LOW);
                   else if(data == '5' )
                       digitalWrite(11, HIGH);
                         else if(data == '6' )
                             digitalWrite(11, LOW);
                              else if(data == '7')
                                  {
                                    digitalWrite(13, HIGH);
                                    digitalWrite(12, HIGH);
                                    digitalWrite(11, HIGH); 
                                  }
                                   else if(data == '8') {

                                    digitalWrite(13, LOW);
                                    digitalWrite(12, LOW);
                                    digitalWrite(11, LOW);
                                  }
                       
                  
          
         
  }
}
