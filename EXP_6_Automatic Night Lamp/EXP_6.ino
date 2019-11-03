int sensorpin=A0;
int ledpin=3;

int sensorvalue=0;

void setup()
{
   Serial.begin(9600);
   pinMode(ledpin,OUTPUT);

}

void loop()
{
  sensorvalue=analogRead(sensorpin);
  Serial.println(sensorvalue);
  
  if(sensorvalue<370)
  {
    digitalWrite(ledpin,HIGH);
    
  }
  else if(sensorvalue>370)
  {
    digitalWrite(ledpin,LOW);
  }
}  