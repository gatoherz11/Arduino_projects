void setup()
{
 pinMode (2,OUTPUT);
}

void loop() 
{
analogWrite (2,255);//numero de pin, valor min = 0; valor max = 255
delay(200);
}
