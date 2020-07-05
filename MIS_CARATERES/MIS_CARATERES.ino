#include <LiquidCrystal.h>
LiquidCrystal lcd (30, 31, 34, 35, 36, 37);//Rs, E, d4,d5,d6,d7. I pin RW se conecta a negativo

byte omega [8]= { B00000,
                  B01110,
                  B10001,
                  B10001,
                  B10001,
                  B01010,
                  B11011,
                  B00000,
                  };




 
void setup() {
lcd.begin (16,2);
lcd.createChar (2, omega);  //posicion de memoria de 0 a 7, nombre de la variable
}

void loop() {
lcd.setCursor (7, 0);
lcd.write (2);
}
