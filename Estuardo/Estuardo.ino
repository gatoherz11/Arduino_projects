#define echo 6
#define trig 7
long duracion;
long distancia;  


void setup() {
   pinMode(trig, OUTPUT);    
   pinMode(echo, INPUT);     
   pinMode(8, OUTPUT);       
   Serial.begin (115200);
   delay (500);
}

void loop() {
  
  digitalWrite(trig, LOW);
  delayMicroseconds(30);
  digitalWrite(trig, HIGH);   
  delayMicroseconds(30);
  digitalWrite(trig, LOW);
  
  duracion = pulseIn(echo, HIGH);
  distancia = (duracion/2) / 29; 

 
   if  (distancia<40){   
             
    tone(8, 1000);                
    delay (500);
    noTone(8);
   
   
    
             
    
   }
   delay (10);

}
