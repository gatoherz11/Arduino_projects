#include <Servo.h>
Servo servito;
Servo servote;
float pot;


void setup() {
servito.attach (3, 750, 2600); //pin del servo, pulso minimo, pulso maximo "attach esta en microsegundos" 
pinMode (A1, INPUT);
}

void loop() 
{
pot = analogRead (A1)/5.68;  
servito.write (pot); //angulo de 0º a 180º
delay (5);
}
