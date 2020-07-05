   int led=2;
int infraPin1 =7;    // pin del infrarrojos utilizado como entrada digital en el lado derecho(#1).
int valorInfra1 = 1;  // Valor inicial de la lectura digital del infrarrojo #1.
int infraPin2 = 23;
int infraPin3 = 24;
int infraPin4 = 25;
int infraPin5 = 26;
void setup() { 
  Serial.begin(9600); // Comenzamos comunicacion serial.
  pinMode(infraPin1, INPUT);     // Inicializa el pin 1 como entrada digital.
  pinMode (infraPin2,INPUT);
  pinMode (infraPin3,INPUT);
  pinMode (infraPin4,INPUT);
  pinMode (infraPin5,INPUT);
    
} 

void loop() { 
  valorInfra1 = digitalRead(infraPin1);   // Lee el valor de la entrada 10, esto es, el valor que lee el infrarrojo #1.
  Serial.print("SENSOR1 ");         //Imprimimos el texto "SENSOR1 "
  Serial.println(valorInfra1);    //Imprimimos la lectura del infrarrojo #1.
  delay(1000);
}



