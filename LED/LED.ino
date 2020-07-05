int btn = 30;
int led = 35;
int estado = 0;
void setup() {
  pinMode(btn, INPUT);
  pinMode(led, OUTPUT);

}

void loop() {
  if(digitalRead(btn) == HIGH && estado == 0){
    delay(300);
    digitalWrite(led,HIGH);
     estado = 1;
  }
    if(digitalRead(btn) == HIGH && estado == 1){
      delay(300);
      digitalWrite(led,LOW);
      estado = 0;
      }
}

