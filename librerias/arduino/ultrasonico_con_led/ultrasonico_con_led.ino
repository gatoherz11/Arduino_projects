#define trigPin 32  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define echoPin 36 // Arduino pin tied to echo pin on the ultrasonic sensor.

const int zumbador = 40; // Zumbador conectado al pin 6
const int led = 28; // LED conectado al pin 6

void setup() {
Serial.begin(115200); // Open serial monitor at 115200 baud to see ping results.
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
distance = (duration)/58;
if(distance >= 546 || distance <= 1){
Serial.println();
}
else {
Serial.print(distance);
Serial.println();
}
if(distance < 100){
pausa = distance * 10;
digitalWrite(zumbador, HIGH);
digitalWrite(led, HIGH);
delay(100);
}

digitalWrite(zumbador, LOW);
digitalWrite(led, LOW);
delay(100);
}
