/*
 *
 * Udemy.com
 * Using Photoresistors (LDRs) with an Arduino
 *
 */
 
 // pin assignments
 int LDR = 0;
 const int threshold = 800;
 // initialize the serial port
 // and declare inputs and outputs
 void setup() {
   pinMode(LDR, INPUT);
   pinMode(13, OUTPUT);
   Serial.begin(9600);
 }
 
 // read from the analog input connected to the LDR
 // and print the value to the serial port.
 // the delay is only to avoid sending so much data
 // as to make it unreadable.
 void loop() {
  digitalWrite(13,LOW);
   int v = analogRead(LDR);
   Serial.println(v); 
   delay(1000);
   if(v > threshold){
    digitalWrite(13,HIGH);
   }
   else{
    digitalWrite(13,LOW);
   }
  
 }
