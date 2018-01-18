int led1 = 13;
  int led2 = 12; 
  int led3 = 11; 
void setup() {
  // put your setup code here, to run once:
   
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
   digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);// turn the LED off by making the voltage LOW
  delay(1000);// turn the LED off by making the voltage LOW
  digitalWrite(led3,LOW);
}
