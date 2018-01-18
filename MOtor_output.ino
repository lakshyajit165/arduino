

// the setup routine runs once when you press 
int state=0;
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
 if(Serial.available()>0){
    state = Serial.read();
    if(state == '2'){
      digitalWrite(13,HIGH);
      digitalWrite(12,LOW);
       digitalWrite(9,HIGH);
      digitalWrite(8,LOW);
      }
    else if(state == '1'){
      digitalWrite(13,LOW);
      digitalWrite(12,HIGH);
       digitalWrite(9,LOW);
      digitalWrite(8,HIGH);
      }  
      else if(state == '3'){
      digitalWrite(13,HIGH);
      digitalWrite(12,LOW);
       digitalWrite(9,LOW);
      digitalWrite(8,HIGH);
      }  
      else if(state == '4'){
      digitalWrite(13,LOW);
      digitalWrite(12,HIGH);
       digitalWrite(9,HIGH);
      digitalWrite(8,LOW);
      }  
      else if(state == '5'){
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
       digitalWrite(9,LOW);
      digitalWrite(8,LOW);
      }  
 }
}



