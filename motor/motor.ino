int led1 = 30;
int btn1 = 31;
int btn2 = 32;
int mtr1 = 33;
void setup() {
  pinMode(led1,OUTPUT);
  pinMode(btn1,INPUT);
  pinMode(btn2,INPUT);
  pinMode(mtr1,OUTPUT);
}

void loop() {
  if(digitalRead(btn1) == HIGH){
    digitalWrite(led1,HIGH);
  }
  if(digitalRead(btn2) == HIGH){
    digitalWrite(led1,LOW); 
  }
  if(digitalRead(led1) == HIGH){
    digitalWrite(mtr1,HIGH);
  }else{
    digitalWrite(mtr1,LOW);
  }
  }

