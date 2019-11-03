Char data=0
Void Setup()
{
  Serial.begin(9600); pinMode(1,OUTPUT);
}
Void loop()
{
If(Serial.available()>0)
{
data=Serial.read();
Serial.print(data );
Serial.print(“\n”);
If (data==’1’)
digitalWrite(13,HIGH);
else if(data==’0’)
digitalWrite(13,LOW);
}
}