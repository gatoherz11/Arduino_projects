#include <Servo.h>
Servo servito;
Servo servito2;
Servo servito3;
Servo servito4;
int trig = 2;
int echo = 3;
int tiempo;
int distancia; 
void setup() {
  servito.attach (5);
  servito2.attach (6);
  servito3.attach (7);
  servito4.attach (8);
  pinMode (2, OUTPUT);
  pinMode (3, INPUT);
}

void loop() {
digitalWrite (trig, LOW);
  delayMicroseconds(5);
  digitalWrite (trig, HIGH);
  delayMicroseconds (10);
  tiempo = pulseIn (echo, HIGH);
  distancia = (0.017 * tiempo);
if (distancia <= 10) {
servito2.write (180);
}else if (distancia > 10 ) {
  servito2.write (45);
}
}
