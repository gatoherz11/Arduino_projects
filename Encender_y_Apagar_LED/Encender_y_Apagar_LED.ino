void setup() {
  pinMode (13, OUTPUT);
}

void loop() {
digitalWrite (13, HIGH);
delay (10);
digitalWrite (13, 0);
delay (10);
}
