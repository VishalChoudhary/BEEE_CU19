#include<LiquidCrystal.h>
int rs=12,en=11,d4=5,d5=4,d6=3,d7=2;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
void setup()
{
  lcd.begin(16,2);
  lcd.clear();
}
void loop()
{
  lcd.setCursor(1,0);
  lcd.print("WISH YOU A VERY");
  lcd.setCursor(2,1);
  lcd.print("HAPPY DIWALI");
  delay(5000);
}
  