byte pulsador = 23;
byte led = 22
;

void setup() 
{
pinMode (pulsador, INPUT);
pinMode ( led, INPUT); 

}
void loop()
{
 if (digitalRead (pulsador)== HIGH)
  {
  digitalWrite (led, HIGH);
  
  }
else
  {
  digitalWrite (led, LOW);
  }
}

