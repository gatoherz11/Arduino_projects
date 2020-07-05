byte t = 2;
void setup() {
for (byte i= 50; i<=53; i ++){
  pinMode (i,OUTPUT);}
}

void loop() {
 
paso1();
delay (t);
paso2();
delay (t);
paso3();
delay (t);
paso4();
delay (t);
}

void paso1(){
  digitalWrite (50,HIGH); //puede ser (50,1);
  digitalWrite (51,LOW);  //puede ser (50,0);
  digitalWrite (52,LOW);  //puede ser (50,0);
  digitalWrite (53,LOW);  //puede ser (50,0);
}

void paso2(){
  digitalWrite (50,LOW);  //puede ser (50,0);
  digitalWrite (51,HIGH); //puede ser (50,1);
  digitalWrite (52,LOW);  //puede ser (50,0);
  digitalWrite (53,LOW);  //puede ser (50,0);
}

void paso3(){
  digitalWrite (50,LOW);
  digitalWrite (51,LOW);
  digitalWrite (52,HIGH);
  digitalWrite (53,LOW);
}

void paso4(){
  digitalWrite (50,LOW);
  digitalWrite (51,LOW);
  digitalWrite (52,LOW);
  digitalWrite (53,HIGH);
}
