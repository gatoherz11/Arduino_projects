#include <LiquidCrystal.h>
LiquidCrystal lcd (30, 31, 34, 35, 36, 37);//Rs, E, d4,d5,d6,d7. I pin RW se conecta a negativo

void setup() {
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
 lcd.print ("MECATRONICA 10-2016 UNSTOPPABLE");
 delay(2000);
 }

void loop() {
 lcd.setCursor (16,1); // empieza columna 16 desplazadose de derecha a izquierda
 lcd.autoscroll(); // funcion que desplaza el texto
 lcd.print ("  "); // deja espacios en blanco despues del texto
 delay(1000); // tiempo en que se muestra cada caracter
 
}
