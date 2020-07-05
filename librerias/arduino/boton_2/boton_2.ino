int btn = 30,led = 35;

void setup() {
pinMode (btn,INPUT);
pinMode (led,OUTPUT);
}
void loop() {
 if(digitalRead(btn)== HIGH)      
{
digitalWrite(led,HIGH);
}
else{
   digitalRead(led),HIGH);
   digitalWrite(btn,LOW)
}


