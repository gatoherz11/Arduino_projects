#include <AFMotor.h>
int led = 31;
AF_DCMotor Motor1 = 1;
int infra = 30;
int lectura; 
void setup() {
pinMode (led, OUTPUT);
pinMode (infra, INPUT);
Serial.begin (9600);
Motor1.run (RELEASE);

}

void loop() {
lectura = digitalRead (infra);
 if (lectura == HIGH){
  Motor1.run (FORWARD);
 delay (200);
 } else {
  Motor1.run (RELEASE);
 }
 
 }
