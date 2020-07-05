#include <AFMotor.h>
#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;
AF_DCMotor Motor1(1);
AF_DCMotor Motor2(2);
AF_DCMotor Motor3(3);
AF_DCMotor Motor4(4);
float distancia, tiempo; 
float Trig = 27;float Echo = 28;
#define OBSTA1 29
#define OBSTA2 30
#define OBSTA3 31
boolean obsta1, obsta2, obsta3;
int sensor1 = A0;int sensor2 = A1;int sensor3 = A2;int sensor4 = A3;int sensor5 = A4;int sensor6 = A5; int sensor7 = A6;int sensor8 = A7;int sensor9 = A8;int sensor10 = A9;int fotocelula = A10;
int infra1, infra2, infra3, infra4, infra5, infra6, infra7, infra8, infra9, infra10, foto;
int retroceso = 22;
int right = 23;
int left = 24;
int freno = 25;
int delantera = 26;
void setup() {
  for   (int i= A0; i <= A10; i++) {
    pinMode (i, INPUT);
  }
  for (byte n = 22; n <=27; n++) {
    pinMode(n, OUTPUT); 
  }
         Serial.begin(9600);           // set up Serial library at 9600 bps
         Motor1.setSpeed(150);
         Motor2.setSpeed(150);
         Motor3.setSpeed(150);
         Motor4.setSpeed(150);
         servo1.attach (10);
         servo2.attach (9);
         servo3.attach (0);
         servo4.attach (1);
         servo5.attach (2);
         servo6.attach (13);
         pinMode (Echo, INPUT);
         pinMode (OBSTA1, INPUT);
         pinMode (OBSTA2, INPUT);
         pinMode (OBSTA3, INPUT);
}

void loop() {
  infra1 = analogRead (sensor1);
  infra2 = analogRead (sensor2);
  infra3 = analogRead (sensor3);
  infra4 = analogRead (sensor4);
  infra5 = analogRead (sensor5);
if ((infra1 >=204)&&(infra2 >=204)&&(infra3 <204)&&(infra4 >=204)&&(infra5 >=204)){
  adelante();}
else if ((infra1 <204)&&(infra2 <204)&&(infra3 <204)&&(infra4 <204)&&(infra5 <204)){
  atras ();}
else if ((infra1 >=204)&&(infra2 >=204)&&(infra3 <204)&&(infra4 <204)&&(infra5 <204)){
 atras();
  delay (1000);
  derecha ();}
else if ((infra1 <204)&&(infra2 <204)&&(infra3 <204)&&(infra4 >=204)&&(infra5 >=204)){
  atras ();
  delay (1000);
  izquierda ();}
else {
  detener ();
}
}

//RUEDAS DEL AUTO//
void adelante () {
  Motor1.run(FORWARD) ;
  Motor2.run(FORWARD);
  Motor3.run(FORWARD) ;
  Motor4.run(FORWARD);
  
}
void atras () {
  Motor1.run(BACKWARD);
  Motor2.run(BACKWARD);
  Motor3.run(BACKWARD) ;
  Motor4.run(BACKWARD);
  digitalWrite (retroceso, HIGH); 
}
void izquierda () {
  Motor1.run(FORWARD) ;
  Motor2.run (RELEASE);
  Motor3.run(FORWARD) ;
  Motor4.run(RELEASE);
  digitalWrite (left,  HIGH);
  delay (100);
  digitalWrite (left, LOW);
  delay (100);
}
void derecha () {
  Motor1.run(RELEASE) ;
  Motor2.run (FORWARD);
  Motor3.run(RELEASE) ;
  Motor4.run(FORWARD);
  digitalWrite (right, HIGH);
  delay (100);
  digitalWrite (right, LOW);
  delay (100);
}
void detener (){
  Motor1.run(RELEASE) ;
  Motor2.run (RELEASE);
  Motor3.run(RELEASE) ;
  Motor4.run(RELEASE);
}


