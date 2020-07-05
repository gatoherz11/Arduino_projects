#define trigPin 12  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define echoPin 13 // Arduino pin tied to echo pin on the ultrasonic sensor.
const int zumbador = 6; // Zumbador conectado al pin 6
const int led = 8; // LED conectado al pin 8
void setup() {
Serial.begin(9600); // Open serial monitor at 115200 baud to see ping results.
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
pinMode(zumbador, OUTPUT);
pinMode(led, OUTPUT);
}
void loop() {
int duration, distance, pausa;
digitalWrite(trigPin,HIGH);
delayMicroseconds(500);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin,HIGH);
distance = (100);
if(distance >= 546 || distance <= 1){
Serial.println("Out of range");
}
else {
Serial.print(distance);
Serial.println(" cm");
}
if(distance == 10 || distance == 20){
digitalWrite(zumbador, HIGH);
digitalWrite(led, HIGH);
delay(100);
}
digitalWrite(zumbador, LOW);
digitalWrite(led, LOW);
delay(100);
}

