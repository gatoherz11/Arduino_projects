byte a = 25;
byte b = 27;
byte c = 31;
byte d = 33;
byte e = 37;
byte f = 39;
byte g = 43;
byte h = 45;
int t = 1000;
void setup() 
{
pinMode (a, OUTPUT);
pinMode (b, OUTPUT);
pinMode (c, OUTPUT);
pinMode (d, OUTPUT);
pinMode (e, OUTPUT);
pinMode (f, OUTPUT);
pinMode (g, OUTPUT);
pinMode (h, OUTPUT);
}
void loop()
{
  cero ();
  delay (t);
  uno ();
  delay (t);
  dos ();
  delay (t);
  tres ();
  delay (t);
  cuatro();
  delay (t);
  cinco();
  delay (t);
  seis ();
  delay (t);
  siete ();
  delay (t);
  ocho ();
  delay (t);
  nueve ();
  delay (t);

}

//------numeros-------

void cero ()
{
//numero "0"
 digitalWrite(a,1);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,1);
 digitalWrite(e,1);
 digitalWrite(f,1);
 digitalWrite(g,0);
 digitalWrite(h,0); 
}

void uno ()
{
  //numero "1"
 digitalWrite(a,0);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,0);
 digitalWrite(e,0);
 digitalWrite(f,0);
 digitalWrite(g,0);
 digitalWrite(h,0);
}

void dos ()
{
   //numero "2"
 digitalWrite(a,1);
 digitalWrite(b,1);
 digitalWrite(c,0);
 digitalWrite(d,1);
 digitalWrite(e,1);
 digitalWrite(f,0);
 digitalWrite(g,1);
 digitalWrite(h,0);
}

void tres ()
{
 //numero "3"
 digitalWrite(a,1);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,1);
 digitalWrite(e,0);
 digitalWrite(f,0);
 digitalWrite(g,1);
 digitalWrite(h,0); 
}
void cuatro ()
{
  //numero "4"
 digitalWrite(a,0);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,0);
 digitalWrite(e,0);
 digitalWrite(f,1);
 digitalWrite(g,1);
 digitalWrite(h,0);
}
void cinco ()
{
   //numero "5"
 digitalWrite(a,1);
 digitalWrite(b,0);
 digitalWrite(c,1);
 digitalWrite(d,1);
 digitalWrite(e,0);
 digitalWrite(f,1);
 digitalWrite(g,1);
 digitalWrite(h,0);
}
void seis ()
{
  //numero "6"
 digitalWrite(a,1);
 digitalWrite(b,0);
 digitalWrite(c,1);
 digitalWrite(d,1);
 digitalWrite(e,1);
 digitalWrite(f,1);
 digitalWrite(g,1);
 digitalWrite(h,0);
}
void siete ()
{
   //numero "7"
 digitalWrite(a,1);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,0);
 digitalWrite(e,0);
 digitalWrite(f,0);
 digitalWrite(g,0);
 digitalWrite(h,0);
}
void ocho ()
{
   //numero "8"
 digitalWrite(a,1);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,1);
 digitalWrite(e,1);
 digitalWrite(f,1);
 digitalWrite(g,1);
 digitalWrite(h,0);
}
void nueve ()
{
   //numero "9"
 digitalWrite(a,1);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,1);
 digitalWrite(e,0);
 digitalWrite(f,1);
 digitalWrite(g,1);
 digitalWrite(h,0);
}

