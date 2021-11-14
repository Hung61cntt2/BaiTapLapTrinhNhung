#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,9,8,7,6,5,4,3,2);

void setup()
{
  lcd.begin(16,2);
  lcd.print("Hello World!");

}

void loop()
{
  lcd.setCursor(0,1);
  lcd.print("61CNTT-2");
}
