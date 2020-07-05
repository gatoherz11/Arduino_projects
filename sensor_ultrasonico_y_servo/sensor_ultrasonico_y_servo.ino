#include <Servo.h>
Servo servito;
float distancia, tiempo; 
float Trig = 2;
float Echo = 3;
int angulo;

void setup() {
  Serial.begin (9600);
  pinMode (Trig, OUTPUT);
  pinMode (Echo, INPUT);
  servito.attach (3, 750, 2600); //pin del servo, pulso minimo, pulso maximo "attach esta en microsegundos"  );
}

void loop () 
{
  ULTRASONICO ();
if (distancia <= 35)
{
 angulo = map (distancia, 30, 1, 1, 180); 
  servito.write (angulo);
  }
  else
{
  servito.write (0);
  }
}


void ULTRASONICO ()
{
  digitalWrite (Trig, LOW);
  delayMicroseconds (5);
  digitalWrite (Trig, HIGH);
  delayMicroseconds (10);
 tiempo = pulseIn (Echo, HIGH);
  distancia = int (0.017 * tiempo);
  Serial.print ("distancia  ");
  Serial.print (distancia);
  Serial.println(" cm ");
  delay (1000);
  }



