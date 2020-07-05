  int retroceso = 22;
int right = 23;
int left = 24;
int freno = 25;
int delantera = 26;
void setup() {
  for ( byte i = 22; i <= 26; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
   digitalWrite (right,HIGH);
    delay (100);
    digitalWrite (right,LOW);
    delay (100); 
    digitalWrite (right,HIGH);
    delay (100);
    digitalWrite (right,LOW);
    delay (100); 
    digitalWrite (22, HIGH);
}
