//YWROBOT
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();
  lcd.setCursor(0, 0);
  lcd.print("Hello");
  delay(2000);
  lcd.setCursor(0, 1);
  lcd.print("Demos Time!!!");
  lcd.clear();
}


void loop()
{
                        // initialize the lcd 
  // Print a message to the LCD.
  lcd.setCursor(0,0);
  lcd.print("Backlight demo");
  lcd.setCursor(0,1);
  lcd.print("Flash 4 times");
  
  delay(3000);
  lcd.clear();
  
  // Flash backlight 4 times
  for(int i = 0; i< 4; i++)
    {
    lcd.backlight();
    delay(250);
    lcd.noBacklight();
    delay(250);
    }

  // Turn backlight back on
  lcd.backlight();
    
  // Demo 2 - scroll
  lcd.setCursor(0,0);
  lcd.print("Scroll demo - ");
  delay(1500);
  // set the display to automatically scroll:
  lcd.autoscroll();
  // print from 0 to 9:
  for (int thisChar = 0; thisChar < 10; thisChar++) {
    lcd.print(thisChar);
    delay(500);
    }
  // turn off automatic scrolling
  lcd.noAutoscroll();

  // clear screen 
  lcd.clear();
}