int s1 = 23;
int val1;
void setup() {
pinMode (22,OUTPUT);
pinMode (23,INPUT);
}

void loop(){
  val1=digitalRead(27);
  if (val1=0){
    digitalWrite (22,LOW);
  }
  if (val1=1){
    digitalWrite(22,HIGH);
  }
}
