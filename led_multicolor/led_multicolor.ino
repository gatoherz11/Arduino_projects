byte redPin = 2;
byte greenPin = 3;
byte bluePin = 4;
int t= 2000;
void setup() {
 pinMode(redPin, OUTPUT);
 pinMode(greenPin, OUTPUT);
 pinMode(bluePin, OUTPUT);
}

void loop() {
 Color (255, 0,0); //rojo
 delay(t);
 Color (0, 255, 0);//verde
 delay(t);
 Color (0, 0, 255);//azul
 delay(t);
 Color (80, 0, 80);//morado
 delay(t);
 Color (0, 255, 255);//aqua
 delay(t);
 Color (255, 255, 255);//blanco
 delay(t);
 Color (255, 255, 0);
 delay(t);
 Color (255, 100, 70);
 delay(t);
}

void Color (byte red, byte green, byte blue)
{
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}

