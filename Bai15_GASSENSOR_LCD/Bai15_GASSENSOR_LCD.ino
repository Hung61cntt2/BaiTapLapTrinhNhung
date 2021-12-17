#include <Wire.h>   
#include <LiquidCrystal_I2C.h>    // khai bao thu vien lcd sử dụng i2c
LiquidCrystal_I2C lcd(0x27,16,2);

#define sensor 0     // chân sử sủng cảm biến ga 
int led = 13;          // led chân số 13
int speaker = 12;      // loa chân số 12
 void setup()
 {
  lcd.init();          // khoi tạo lcd
  lcd.backlight();     // bật đèn lcd
  pinMode(sensor,INPUT);  // input tại chân số 2
  pinMode(led,OUTPUT);
  pinMode(speaker, OUTPUT);
  lcd.setCursor(0,0);      // đưa con trỏ tới hàng 0 cột 0
  lcd.print("Day la");
  lcd.setCursor(0,1);
  lcd.print("cam bien khi ga");
  delay(1000);
  lcd.clear();
  
  }
  void loop()
  {
    if(digitalRead(sensor) ==HIGH )    // nếu chân số 0 có mức cao  , cảm biến phát hiện có khí ga
    {
      
      lcd.setCursor(0,0);     
      lcd.print("Canh bao");     // in cảnh báo
      lcd.setCursor(0,1);
      lcd.print("ro ri ga");
      digitalWrite(led,HIGH);     // led sáng
      digitalWrite(speaker,HIGH); // loa kêu
      }
      else
      {
       lcd.clear(); 
        lcd.setCursor(0,0);              //   nếu không có khí ga thì led tắt và loa tắt
        lcd.print("......");
        digitalWrite(led,LOW);
        digitalWrite(speaker,LOW);
        
        }
        delay(1000);
        lcd.clear();
  }
