int infra1 = A1;
int infra2 = A2;
int sensor1, sensor2;
byte velocidad_1 = 2;
byte velocidad_2 = 3;
byte RPM_1 = 255;
byte RPM_2 = 255;
void setup() {
 pinMode (sensor1, INPUT);
 pinMode (sensor1, INPUT);
 pinMode (2, OUTPUT);
  pinMode (3, OUTPUT);
 for (byte i=22; i=25; i++){
  pinMode (i, OUTPUT);
}
}
void loop() {
 sensor1 = analogRead (infra1);
 sensor2 = analogRead (infra2);
if ((sensor1 >= 204) && (sensor2 <204))
{
  derecha();
  analogWrite(velocidad_1,RPM_1);
  analogWrite(velocidad_2,RPM_2);
}
else if ((sensor1 <204) && (sensor2 >=204)){
  izquierda ();
  analogWrite(velocidad_1,RPM_1);
  analogWrite(velocidad_2,RPM_2);
}
 else if ((sensor1 <204) && (sensor2 <204)){
  atras ();
   analogWrite(velocidad_1,RPM_1);
  analogWrite(velocidad_2,RPM_2);
 }
 else {
  adelante ();
   analogWrite(velocidad_1,RPM_1);
  analogWrite(velocidad_2,RPM_2);
 }
}
void adelante() {
    digitalWrite (22, 1);  
    digitalWrite (23, 0);
    digitalWrite (24, 1);
    digitalWrite (25, 0);
}
void atras() {
    digitalWrite (22, 0);  
    digitalWrite (23, 1);
    digitalWrite (24, 0);
    digitalWrite (25, 1);
}
void derecha() {
    digitalWrite (22, 1);  
    digitalWrite (23, 0);
    digitalWrite (24, 0);
    digitalWrite (25, 0);
}
void izquierda() {
    digitalWrite (22, 0);  
    digitalWrite (23, 0);
    digitalWrite (24, 1);
    digitalWrite (25, 0);
}
