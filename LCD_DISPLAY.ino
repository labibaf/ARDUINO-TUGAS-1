#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.begin();
}



void loop(){
  lcd.setCursor(4,0);
  lcd.print("LABIB AF");
  lcd.setCursor(0,1);
  lcd.print("195060301111017");
}
