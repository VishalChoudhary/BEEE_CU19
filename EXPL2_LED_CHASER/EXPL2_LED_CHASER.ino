int j=1,i;
void setup()
{
 for(int a=0;a<=4;a++)
  pinMode(a, OUTPUT);


}

void loop()
{
  i=j-1;
  digitalWrite(i,HIGH);
 if(i>=4)
 j=0;
 digitalWrite(j,HIGH);
 delay(1000);
 digitalWrite(i,LOW); 
  j++;
}
