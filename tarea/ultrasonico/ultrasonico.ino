#include <Servo.h>
Servo servito;
Servo servote;
int angulo; 

float distancia, tiempo; 
float Trig = 4;
float Echo = 5;

  byte azul = 26;
  byte verde = 28;
  byte rojo = 24;

void setup() {
  Serial.begin (9600);
    pinMode (Trig, OUTPUT);
    pinMode (Echo, INPUT);
  
  servito.attach (3, 750, 2600); //pin del servo, pulso minimo, pulso maximo "attach esta en microsegundos" 
  
    pinMode (azul,OUTPUT);
    pinMode (verde,OUTPUT);
    pinMode (rojo,OUTPUT);
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
  delay (100);
  
if ((distancia >= 1)&&(distancia <= 20))
{
 angulo = map (distancia, 20, 1, 180, 180);
  digitalWrite (verde,HIGH);
  servito.write (180);
  delay (1000); 
 }
  else
   {
   digitalWrite (verde,LOW);
   }

  if ((distancia >= 21)&&(distancia <= 30))
{
  angulo = map (distancia, 30, 21, 90, 90);
  digitalWrite (azul,HIGH);
  servito.write (90); //angulo de 0º a 180º
  delay (1000);
  }
  else {
    digitalWrite (azul, LOW);
  }

  if (distancia > 30 )
  {
    digitalWrite (rojo, HIGH);
    servito.write (0);
    delay (1000);
   }
   else
   {
   digitalWrite (rojo,LOW);
    }




 
}
