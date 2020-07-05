#include <Servo.h>
Servo Horizontal;
Servo Vertical;
Servo Codo;
Servo Muneca;
Servo Garra;
float pot;
float pot2;
float pot3;
float pot4;
float pot5;

int angulo;
int angulo2;
int angulo3;
int angulo4;
int angulo5;



void setup() {
Horizontal.attach (3, 750, 2600);
Vertical.attach (4, 750, 2600);
Codo.attach (5, 750, 2600);
Muneca.attach (6, 750, 2600);
Garra.attach (9, 750, 2600);//pin del servo, pulso minimo, pulso maximo "attach esta en microsegundos" 
pinMode (A0, INPUT);
pinMode (A1, INPUT);
pinMode (A2, INPUT);
pinMode (A3, INPUT);
pinMode (A4, INPUT);
}

void loop() 
{
pot = analogRead (A0);  
angulo = map (pot, 0, 1023, 180, 0);
Horizontal.write (angulo); //angulo de 0º a 180º
delay (5);

pot2 = analogRead (A1);  
angulo2 = map (pot2, 0, 1023, 180, 0);
Vertical.write (angulo2); //angulo de 0º a 180º
delay (5);

pot3 = analogRead (A2);  
angulo3 = map (pot3, 0, 1023, 180, 0);
Codo.write (angulo3); //angulo de 0º a 180º
delay (5);

pot4 = analogRead (A3);  
angulo4 = map (pot4, 0, 1023, 180, 0);
Muneca.write (angulo4); //angulo de 0º a 180º
delay (5);

pot5 = analogRead (A4);  
angulo5 = map (pot5, 0, 1023, 180, 0);
Garra.write (angulo5); //angulo de 0º a 180º
delay (5);
}
