int infra = A8;
int led = 23;
int altura;
int infra2 = A9;
int led2 = 24;
int valor;
void setup() 
{
 Serial.begin (9600);
  pinMode (A8, INPUT);
  pinMode (23, OUTPUT); 
  pinMode (A9, INPUT);
  pinMode (24, OUTPUT); 
}

void loop()
{
  altura=analogRead(infra);
  valor=analogRead(infra2);

if (valor >= 204){
  digitalWrite (led2, HIGH);
    digitalWrite (led, LOW);
} else{
digitalWrite (led2, LOW);
digitalWrite (led, HIGH);
}
Serial.print (valor);
}



