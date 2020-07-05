int A= 11;
int B= 10;
int C= 9;
int D= 8;
int pot= A0;
float tiempo, t;
void setup() {
pinMode(A, OUTPUT);
pinMode(B, OUTPUT);
pinMode(C, OUTPUT);
pinMode(D, OUTPUT);

}

 void paso1(){
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(D, LOW);
    
  }

 void paso2(){
   digitalWrite(A, LOW);
   digitalWrite(B, HIGH);
   digitalWrite(C, LOW);
   digitalWrite(D, LOW); 
   
   }
 void paso3() {
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  
 }
 void paso4(){
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  
}
void loop() {
 tiempo=analogRead (pot);
 t= map(tiempo,0,1023,0,200);
 paso1 ();
 delay(t);
 paso2 ();
 delay(t);
 paso3 ();
 delay(t);
 paso4 (); 
 delay(t);
  }

