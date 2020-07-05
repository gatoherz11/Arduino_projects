int valor;
void setup() {
    pinMode (A8, INPUT);
    pinMode (26, OUTPUT);

}

void loop() {
  valor = analogRead (A8);
  if (valor <= 200) {
    digitalWrite(26, HIGH);
    
  }
  else {
    digitalWrite(26, LOW);
  }
}
