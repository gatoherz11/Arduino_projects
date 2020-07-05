int btn1 = 22;
int btn2 = 23;
int btn3 = 24; 
int btn4 = 25;
int led_cocina = 53;
void setup() {
 pinMode(22,INPUT);
 pinMode(23,INPUT);
 pinMode(53,OUTPUT);
 pinMode(24,INPUT);
 pinMode(25,INPUT);
}

void loop() {
  if(digitalRead(btn1) == HIGH){
    digitalWrite(led_cocina,HIGH); 
  }
   if(digitalRead(btn2) == HIGH){
   digitalWrite(led_cocina, LOW);
   }
   if(digitalRead(btn3) == HIGH){
   digitalWrite(led_cocina, HIGH);
   }
   if(digitalRead(btn4) == HIGH){
    digitalWrite(led_cocina, LOW);
   }
}
   

