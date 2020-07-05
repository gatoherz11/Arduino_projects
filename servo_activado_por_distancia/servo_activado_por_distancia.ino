#include <Servo.h>
Servo servito;
Servo servote;

float distancia, tiempo; 
float Trig = 4;
float Echo = 5;


void setup() {
  Serial.begin (9600);
  pinMode (Trig, OUTPUT);
  pinMode (Echo, INPUT);
  
  servito.attach (3, 750, 2600); //pin del servo, pulso minimo, pulso maximo "attach esta en microsegundos" 
}

void loop() {
  digitalWrite (Trig, LOW);
  delayMicroseconds (5);
  digitalWrite (Trig, HIGH);
  delayMicroseconds (10);
 tiempo = pulseIn (Echo, HIGH);
  distancia = int (0.017 * tiempo);
  Serial.print ("distancia  ");
  Serial.print (distancia);
  Serial.println(" cm ");
  delay (500);
  
if (distancia == 20)
{
servito.write (180);
delay (1000); 
 }
if (distancia == 30)

{
 servito.write (90); //angulo de 0º a 180º
delay (1000);
}

if (distancia >30)
{
servito.write (0); //angulo de 0º a 180º
delay (1000);
}















 
}
  








