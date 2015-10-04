#include <Arduino.h>
#include <ColorLCDShield.h>

#define BACKGROUND  BLACK  // room for growth, adjust the background color according to daylight
#define C_COLOR  RED  // This is the color of the clock face, and digital clock
#define H_COLOR  BLUE  // hour hand color
#define M_COLOR  GREEN  // minute hand color
#define S_COLOR  YELLOW  // second hand color

LCDShield lcd;

void setup()
{

   pinMode(10, OUTPUT);
  analogWrite(10, 200); //PWM control blacklight
  /* Initialize the LCD, set the contrast, clear the screen */
  lcd.init(PHILLIPS);
  lcd.contrast(40);
  lcd.clear(BACKGROUND);

  }

void loop()
{
  lcd.setRect(10,10,118,118,RED,BLACK);
  lcd.setStr("UID",15,15,BLUE,BLACK);
  lcd.setStr("Status",25,25,BLUE,BLACK);
  lcd.setStr("Fucking",35,35,BLUE,BLACK);
  delay(1000);
}
