#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
void setup() {
  servo1.attach(10);
  servo2.attach(9);
  

}

void loop() {
  servo1.write(10);
  delay(1000);
  servo1.write(45);
  delay (1000);
servo1.write(90);
 delay (1000);
 servo1.write(135);
  delay(1000);
  servo1.write (180);
  delay (1000);
  servo2.write(10);
  delay(1000);
  servo2.write(45);
  delay (1000);
servo2.write(90);
 delay (1000);
 servo2.write(135);
  delay(1000);
  servo2.write (180);
  delay (1000);
}
