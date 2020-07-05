#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;


void setup() {
servo1.attach(3);
servo2.attach(5);
servo3.attach(6);
servo4.attach(7);
}
void loop() {
  servo1.write(90);
  servo2.write(90);
  delay (1000);
  servo2.write(0);
  servo1.write(0);
  
  

}
