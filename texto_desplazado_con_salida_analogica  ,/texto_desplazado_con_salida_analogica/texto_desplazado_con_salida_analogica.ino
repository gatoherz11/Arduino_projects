#include <LiquidCrystal.h>
LiquidCrystal lcd (30, 31, 34, 35, 36, 37);//Rs, E, d4,d5,d6,d7. I pin RW se conecta a negativo
int velocidad;

void setup() {
  pinMode (A0, INPUT);
 lcd.begin (16, 2); //columnas, filas
 lcd.clear ();
 corre();
}
void corre ()
{
 lcd.setCursor (0, 0); //columnas, filas
 lcd.print ("BIENVENIDOS A LA CLASE DE ARDUINO :D");
 delay(2000);
 lcd.setCursor (0, 1);
 lcd.print ("MECATRONICA 10-2016 DINASTIA");
 delay(velocidad);
 }

void loop() {
 velocidad = analogRead (A0);
 lcd.setCursor (16,1); //
 lcd.autoscroll(); // 
 lcd.print ("  "); // 
 delay(velocidad); // 
}
