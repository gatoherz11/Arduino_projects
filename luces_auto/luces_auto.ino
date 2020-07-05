int infra = A0;
int infra2 = A1; 
int sensor1, sensor2;
int retroceso = 22;
int right = 23;
int left = 24;
int freno = 25;
int delantera = 26;
int foto;
void setup() {
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode (A2, INPUT);
  pinMode (23, OUTPUT);
  pinMode (24,OUTPUT);
  pinMode (22,OUTPUT);
  pinMode (25,OUTPUT);
}

void loop() {
  sensor1 = analogRead (A0);
  sensor2 = analogRead (A1);
if ((sensor1 >= 204) && (sensor2 <204)){
    digitalWrite (right,HIGH);
    delay (100);
    digitalWrite (right,LOW);
    delay (100); 
    digitalWrite (right,HIGH);
    delay (100);
    digitalWrite (right,LOW);
    delay (100); 
   
}else if ((sensor1 <204) && (sensor2 >=204)){
    digitalWrite (left,HIGH);
    delay (100);
     digitalWrite (left,LOW);
    delay (100); 
    digitalWrite (left,HIGH);
    delay (100);
    digitalWrite (left,LOW);
    delay (100);  
  }
   else if ((sensor1 <204) && (sensor2 <204)){
  digitalWrite (22, HIGH);
  }
   else {
    digitalWrite (22,LOW);
    digitalWrite (25,HIGH);
   }
   }
