int pot;

void setup() {
pinMode (2, OUTPUT);
pinMode (A0, INPUT);
}

void loop() {
pot = analogRead (A0)/4;
analogWrite (2, pot);

}
