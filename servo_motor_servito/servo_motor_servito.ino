#include <Servo.h>
Servo servito;
Servo servote;


void setup() {
servito.attach (3, 750, 2600); //pin del servo, pulso minimo, pulso maximo "attach esta en microsegundos" 

}

void loop() 
{
  
servito.write (0); //angulo de 0º a 180º
delay (1000);
servito.write (180);
delay (1000);
}
