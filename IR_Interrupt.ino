int irSensorPin = 14;    
void IRinterrupt () {
  int State = digitalRead(irSensorPin);
  if (State==LOW)
   Serial.println("Object detected");
   

}

void setup() {
  Serial.begin(9600);
  pinMode(irSensorPin, INPUT);
  attachInterrupt(digitalPinToInterrupt(irSensorPin),IRinterrupt,FALLING);
  
  Serial.println("Execution Started...");
  delay(10000);
  Serial.println("Execution Ended");
}

void loop() {


  
}