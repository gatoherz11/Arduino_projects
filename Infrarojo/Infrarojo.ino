#define LED 13 
#define BUTTONPIN 35
boolean val;

void setup (){
  pinMode (LED, OUTPUT);
  pinMode (BUTTONPIN, INPUT);
  Serial.begin(9600);
}
void loop (){
val = digitalRead(BUTTONPIN);// digital interface will be assigned a value of 3 to read val
if (val == HIGH) digitalWrite (LED, LOW);
else digitalWrite(LED, HIGH);
Serial.println(val);
delay (1000);
}

