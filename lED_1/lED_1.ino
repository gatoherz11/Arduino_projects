byte rojo = 28;
byte amarillo = 30; 
byte verde = 32;

void setup()
{
 pinMode ( rojo,OUTPUT);
 pinMode ( amarillo,OUTPUT);
 pinMode ( verde,OUTPUT);
 }

void loop()
{

 digitalWrite (verde, HIGH);
 delay (7000);
 digitalWrite (verde, LOW);

digitalWrite (amarillo, HIGH);
 delay (500);
 digitalWrite (amarillo, LOW);
 delay (500);
 digitalWrite (amarillo, HIGH);
 delay (500);
 digitalWrite (amarillo, LOW);
 delay (500);
 digitalWrite (amarillo, HIGH);
 delay (500);
 digitalWrite (amarillo, LOW);
 delay (500);

  digitalWrite (rojo, HIGH);
 delay (9999);
 digitalWrite (rojo,LOW);


  }
 
 

