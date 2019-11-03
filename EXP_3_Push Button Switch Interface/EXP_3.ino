int pinButton = 2;
int LED = 13;
int reading=0;
int lightON=0;
int val=0;

void setup() {
  pinMode(pinButton, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  
  reading= digitalRead(pinButton); 
  
  if(reading== HIGH && lightON== LOW ) {
    
    val=1-val;
    delay(100);
    
  }
  
  lightON=reading;
  
    
    
    if(val == HIGH){
      digitalWrite(LED,HIGH);
    } 
  else {
       digitalWrite(LED,LOW); 
    }
  
  delay(100);
}