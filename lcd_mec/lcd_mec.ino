#include <LiquidCrystal.h>
LiquidCrystal lcd (30, 31, 34, 35, 36, 37);//Rs, E, d4,d5,d6,d7. I pin RW se conecta a negativo

void setup() {
 lcd.begin (16, 2); //columnas, filas
 lcd.clear ();
}

void loop() {
  delay (1000);
 lcd.setCursor (1, 0); //columnas, filas
 lcd.print ("BIENVENIDOS A");
 delay(1000);
 lcd.setCursor (2, 1);
 lcd.print ("MECATRONICA");
 delay(1000);
 lcd.clear();

}
