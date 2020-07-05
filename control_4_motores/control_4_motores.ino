#include <AFMotor.h>

AF_DCMotor Motor1(1);
AF_DCMotor Motor2(2);
AF_DCMotor Motor3(3);
AF_DCMotor Motor4(4);
void setup() {
         Serial.begin(9600);           // set up Serial library at 9600 bps
         Motor1.setSpeed(255);
         Motor2.setSpeed(255);
         Motor3.setSpeed(255);
         Motor4.setSpeed(255);

}

void loop() {
  Motor1.run(RELEASE);
Motor2.run(RELEASE);
Motor3.run(RELEASE);
Motor4.run(RELEASE);
delay (1000) ;

Motor1.run(FORWARD) ;
Motor2.run(FORWARD);
Motor3.run(FORWARD);
Motor4.run(FORWARD);
delay (2000);

Motor1.run(BACKWARD);
Motor2.run(BACKWARD);
Motor3.run(BACKWARD);
Motor4.run(BACKWARD);
delay (2000); 

}
