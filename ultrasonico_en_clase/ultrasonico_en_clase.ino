float distancia, tiempo; 
float Trig = 4;
float Echo = 5;

void setup() {
  Serial.begin (9600);
  pinMode (Trig, OUTPUT);
  pinMode (Echo, INPUT);
}

void loop() {
  digitalWrite (Trig, LOW);
  delayMicroseconds (5);
  digitalWrite (Trig, HIGH);
  delayMicroseconds (10);
 tiempo = pulseIn (Echo, HIGH);
  distancia = int (0.017 * tiempo);
  Serial.print ("distancia  ");
  Serial.print (distancia);
  Serial.println(" cm ");
  delay (500);
}
