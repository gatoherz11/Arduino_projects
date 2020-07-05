#include <AFMotor.h>

AF_DCMotor Motor1(1);
AF_DCMotor Motor2(2);
AF_DCMotor Motor3(3);
AF_DCMotor Motor4(4);
int infra = A0;
int infra2 = A1; 
int sensor1, sensor2;
int retroceso = 22;
int right = 23;
int left = 24;
int freno = 25;
int delantera = 26;
int foto;
void setup() {
         Serial.begin(9600);           // set up Serial library at 9600 bps
         Motor1.setSpeed(150);
         Motor2.setSpeed(150);
         Motor3.setSpeed(150);
         Motor4.setSpeed(150);
          pinMode(A0, INPUT);
          pinMode(A1, INPUT);
          pinMode (A2, INPUT);
          for (byte i= 22;i= 26; i++){
          pinMode (i, OUTPUT);
          }
}

void loop() 
{
  sensor1 = analogRead (infra);
  sensor2 = analogRead (infra2);
if ((sensor1 >= 204) && (sensor2 <204))
{
  derecha();
}
else if ((sensor1 <204) && (sensor2 >=204)){
  izquierda ();
  }
 else if ((sensor1 <204) && (sensor2 <204)){
  atras ();
 }
 else {
  adelante ();
}
luz_delantera();

}
void adelante () {
  Motor1.run(FORWARD) ;
  Motor2.run(FORWARD);
  Motor3.run(FORWARD);
  Motor4.run(FORWARD);
}

void atras () {
  Motor1.run(BACKWARD);
  Motor2.run(BACKWARD);
  Motor1.run(BACKWARD);
  Motor2.run(BACKWARD);
  digitalWrite (retroceso,HIGH);
  
}
void izquierda () {
  Motor1.run(FORWARD) ;
  Motor2.run (RELEASE);
  Motor3.run(RELEASE) ;
  Motor4.run (FORWARD);
  digitalWrite (left, HIGH);
  delay (50);
  digitalWrite (left,LOW);
}

void derecha () {
  Motor1.run(RELEASE) ;
  Motor2.run (FORWARD);
  Motor3.run(FORWARD) ;
  Motor4.run (RELEASE);
  digitalWrite (right, HIGH);
  delay (50);
  digitalWrite (right,LOW);
}
void stop (){
  
  Motor1.run(RELEASE) ;
  Motor2.run (RELEASE);
  Motor3.run(RELEASE) ;
  Motor4.run (RELEASE);
  digitalWrite (freno, HIGH);
}

void luz_delantera (){
  foto = analogRead (A2);
  if (foto <= 200) {
    digitalWrite(26, HIGH);
    
  }
  else {
    digitalWrite(26, LOW);
  }
}
void luces_traseras(){
  sensor1 = analogRead (A0);
  sensor2 = analogRead (A1);
if ((sensor1 >= 204) && (sensor2 <204)){
    digitalWrite (right,HIGH);
    delay (100);
    digitalWrite (right,LOW);
    delay (100); 
    digitalWrite (right,HIGH);
    delay (100);
    digitalWrite (right,LOW);
    delay (100); 
   
}else if ((sensor1 <204) && (sensor2 >=204)){
    digitalWrite (left,HIGH);
    delay (100);
    digitalWrite (left,LOW);
    delay (100); 
    digitalWrite (left,HIGH);
    delay (100);
    digitalWrite (left,LOW);
    delay (100);  
  }
   else if ((sensor1 <204) && (sensor2 <204)){
  digitalWrite (22, HIGH);
  }
   else { 
    digitalWrite (22,LOW);
    digitalWrite (25,HIGH);  
}
}

