# include <LiquidCrystal.h>
LiquidCrystal lcd (30, 31, 34, 35, 36, 37); // RS, E, d4, d5, d6, d7 pin RW se conecta negativo
#include <Servo.h>
Servo servito;
int sw1 = 38;
int sw2 = 39;
int distancia, tiempo;
float trig = 4;
float echo = 5;
int angulo;
int led1 = 40;
int led2 = 41;
int led3 = 42;
int led4 = 43;
int led5 = 44;
int led6 = 45;
void setup() {
lcd.begin (16, 2); // columnas, filas
lcd.clear ();
for(byte i= 40; i<= 45; i++) { 
       pinMode (i, OUTPUT);}
 servito.attach(6,700,2550);
       pinMode (sw1, INPUT);
       pinMode (sw2, INPUT);
 Serial. begin (9600);
      pinMode (trig, OUTPUT);
      pinMode (echo, INPUT);}
//-----------------------------
void loop() {
switches ();
delay (100);
ultrasonico ();
servo ();
leds();}
//-------------------------------------------------
void switches (){
 if (digitalRead (sw1) == HIGH ) {
    lcd.setCursor (0, 0);// columnas, filas
    lcd.print ("izquierda");
    delay (500);
    lcd.clear ();} 
    else if (digitalRead (sw2) == HIGH){
   lcd.setCursor (0, 0);// columnas, filas
    lcd.print ("derecha");
    delay (500);
   lcd.clear ();}
if ((digitalRead (sw1) == HIGH) && (digitalRead (sw2) == HIGH)){
    lcd.setCursor (0, 0);// columnas, filas
    lcd.print ("retroceso");
    delay (1000);
    lcd.clear ();}
     else {
    lcd.setCursor (0, 0);// columnas, filas
    lcd.print ("adelante");}
}
//--------------------------------
void ultrasonico (){
  digitalWrite (trig, LOW);
  delayMicroseconds(5);
  digitalWrite (trig, HIGH);
  delayMicroseconds (10);
  tiempo = pulseIn (echo, HIGH);
  distancia = (0.017 * tiempo);
  lcd.setCursor (0,1);
  lcd. print (" distancia  ");
  lcd. print (distancia);
  lcd. println ("cm");
 delay (10);}
//---------------------------
void servo (){
  if(distancia == 5){ 
angulo = map(distancia,5,30,180,180);
  servito.write (180);}
  else if (distancia >= 30){
  angulo = map(distancia,30,5,0,0);
  servito.write (0);}}
//--------------------------------------
void leds (){
 if((distancia >=1)&&(distancia <=30)){
digitalWrite(led6,1);} 
else 
{digitalWrite(led6,0);}
if((distancia >=1)&&(distancia <=25)){
digitalWrite(led5,1);}
else 
{digitalWrite(led5,0);}
if((distancia >=1)&&(distancia <=20)){
digitalWrite(led4,1);}
else
{digitalWrite(led4,0);}
if((distancia >=1)&&(distancia <=15)){
digitalWrite(led3,1);}
else
{digitalWrite(led3,0);}
if((distancia >=1)&&(distancia <=10)){
digitalWrite(led2,1);}
else
{digitalWrite(led2,0);}
if((distancia >=1)&&(distancia <=5)){
digitalWrite(led1,1);}
else
{digitalWrite(led1,0);}
}

