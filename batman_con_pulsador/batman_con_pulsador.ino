byte a = 25;
byte b = 27;
byte c = 31;
byte d = 33;
byte e = 37;
byte f = 39;
byte g = 43;
byte h = 45;
int t = 1000;
byte pulsador = 2;

void setup() 
{
pinMode (pulsador,INPUT);
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
   if (digitalRead (pulsador)== HIGH)
  {
  B(); 
  delay (t);
  A(); 
  delay (t);
  T(); 
  delay (t);
  M(); 
  delay (t);
  A(); 
  delay (t);
  N(); 
  delay (t);
  nada ();
  delay (t);
  dos(); 
  delay (t);
  cero(); 
  delay (t);
  nada();
  delay (200);
  cero(); 
  delay (t);
  uno(); 
  delay (t);
  }
else
  {
nada ();
delay(t);
  }

//------numeros-------
 
}
void nada ()
{
//numero "-"
 digitalWrite(a,0);
 digitalWrite(b,0);
 digitalWrite(c,0);
 digitalWrite(d,0);
 digitalWrite(e,0);
 digitalWrite(f,0);
 digitalWrite(g,0);
 digitalWrite(h,0);
}
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

void dos  ()
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
void cuatro  ()
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
void ocho  ()
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
void nueve  ()
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
void A ()
{
   //numero "9"
 digitalWrite(a,1);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,0);
 digitalWrite(e,1);
 digitalWrite(f,1);
 digitalWrite(g,1);
 digitalWrite(h,0);
}
void B ()
{
   //numero "9"
 digitalWrite(a,0);
 digitalWrite(b,0);
 digitalWrite(c,1);
 digitalWrite(d,1);
 digitalWrite(e,1);
 digitalWrite(f,1);
 digitalWrite(g,1);
 digitalWrite(h,0);
}

void C ()
{
   //numero "9"
 digitalWrite(a,1);
 digitalWrite(b,0);
 digitalWrite(c,0);
 digitalWrite(d,1);
 digitalWrite(e,1);
 digitalWrite(f,1);
 digitalWrite(g,0);
 digitalWrite(h,0);
}

void D ()
{
   //numero "9"
 digitalWrite(a,0);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,1);
 digitalWrite(e,1);
 digitalWrite(f,0);
 digitalWrite(g,1);
 digitalWrite(h,0);
}

void E ()
{
   //numero "9"
 digitalWrite(a,1);
 digitalWrite(b,0);
 digitalWrite(c,0);
 digitalWrite(d,1);
 digitalWrite(e,1);
 digitalWrite(f,1);
 digitalWrite(g,1);
 digitalWrite(h,0);
}

void FF ()
{
   //numero "9"
 digitalWrite(a,1);
 digitalWrite(b,0);
 digitalWrite(c,0);
 digitalWrite(d,0);
 digitalWrite(e,1);
 digitalWrite(f,1);
 digitalWrite(g,1);
 digitalWrite(h,0);
}

void G ()
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

void H ()
{
   //numero "9"
 digitalWrite(a,0);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,0);
 digitalWrite(e,1);
 digitalWrite(f,1);
 digitalWrite(g,1);
 digitalWrite(h,0);
}

void I ()
{
   //numero "9"
 digitalWrite(a,1);
 digitalWrite(b,0);
 digitalWrite(c,0);
 digitalWrite(d,1);
 digitalWrite(e,1);
 digitalWrite(f,0);
 digitalWrite(g,0);
 digitalWrite(h,0);
}

void J ()
{
   //numero "9"
 digitalWrite(a,0);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,1);
 digitalWrite(e,1);
 digitalWrite(f,0);
 digitalWrite(g,0);
 digitalWrite(h,0);
}
void K ()
{
   //numero "9"
 digitalWrite(a,0);
 digitalWrite(b,1);
 digitalWrite(c,0);
 digitalWrite(d,1);
 digitalWrite(e,1);
 digitalWrite(f,1);
 digitalWrite(g,0);
 digitalWrite(h,0);
}

void L ()
{
   //numero "9"
 digitalWrite(a,0);
 digitalWrite(b,0);
 digitalWrite(c,0);
 digitalWrite(d,1);
 digitalWrite(e,1);
 digitalWrite(f,1);
 digitalWrite(g,0);
 digitalWrite(h,0);
}

void M ()
{
   //numero "9"
 digitalWrite(a,1);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,0);
 digitalWrite(e,1);
 digitalWrite(f,1);
 digitalWrite(g,0);
 digitalWrite(h,0);
}

void N ()
{
   //numero "9"
 digitalWrite(a,0);
 digitalWrite(b,0);
 digitalWrite(c,1);
 digitalWrite(d,0);
 digitalWrite(e,1);
 digitalWrite(f,0);
 digitalWrite(g,1);
 digitalWrite(h,0);
}
void NN ()
{
   //numero "9"
 digitalWrite(a,1);
 digitalWrite(b,0);
 digitalWrite(c,1);
 digitalWrite(d,0);
 digitalWrite(e,1);
 digitalWrite(f,0);
 digitalWrite(g,1);
 digitalWrite(h,0);
}
void O ()
{
   //numero "9"
 digitalWrite(a,1);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,1);
 digitalWrite(e,1);
 digitalWrite(f,1);
 digitalWrite(g,0);
 digitalWrite(h,0);
}

void P ()
{
   //numero "9"
 digitalWrite(a,1);
 digitalWrite(b,1);
 digitalWrite(c,0);
 digitalWrite(d,0);
 digitalWrite(e,1);
 digitalWrite(f,1);
 digitalWrite(g,1);
 digitalWrite(h,0);
}

void Q ()
{
   //numero "9"
 digitalWrite(a,1);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,0);
 digitalWrite(e,0);
 digitalWrite(f,1);
 digitalWrite(g,1);
 digitalWrite(h,0);
}

void R ()
{
   //numero "9"
 digitalWrite(a,0);
 digitalWrite(b,0);
 digitalWrite(c,0);
 digitalWrite(d,0);
 digitalWrite(e,1);
 digitalWrite(f,0);
 digitalWrite(g,1);
 digitalWrite(h,0);
}

void S ()
{
   //numero "9"
 digitalWrite(a,1);
 digitalWrite(b,0);
 digitalWrite(c,1);
 digitalWrite(d,1);
 digitalWrite(e,0);
 digitalWrite(f,1);
 digitalWrite(g,1);
 digitalWrite(h,0);
}

void T ()
{
   //numero "9"
 digitalWrite(a,0);
 digitalWrite(b,0);
 digitalWrite(c,0);
 digitalWrite(d,1);
 digitalWrite(e,1);
 digitalWrite(f,1);
 digitalWrite(g,1);
 digitalWrite(h,0);
}

void U ()
{
   //numero "9"
 digitalWrite(a,0);
 digitalWrite(b,0);
 digitalWrite(c,1);
 digitalWrite(d,1);
 digitalWrite(e,1);
 digitalWrite(f,0);
 digitalWrite(g,0);
 digitalWrite(h,0);
}

void V ()
{
   //numero "9"
 digitalWrite(a,0);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,1);
 digitalWrite(e,1);
 digitalWrite(f,1);
 digitalWrite(g,0);
 digitalWrite(h,0);
}

void W ()
{
   //numero "9"
 digitalWrite(a,1);
 digitalWrite(b,0);
 digitalWrite(c,1);
 digitalWrite(d,1);
 digitalWrite(e,1);
 digitalWrite(f,0);
 digitalWrite(g,0);
 digitalWrite(h,0);
}

void X ()
{
   //numero "9"
 digitalWrite(a,0);
 digitalWrite(b,0);
 digitalWrite(c,0);
 digitalWrite(d,0);
 digitalWrite(e,1);
 digitalWrite(f,1);
 digitalWrite(g,1);
 digitalWrite(h,0);
}

void Y ()
{
   //numero "9"
 digitalWrite(a,0);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,1);
 digitalWrite(e,0);
 digitalWrite(f,1);
 digitalWrite(g,1);
 digitalWrite(h,0);
}

void Z ()
{
   //numero "9"
 digitalWrite(a,1);
 digitalWrite(b,0);
 digitalWrite(c,0);
 digitalWrite(d,1);
 digitalWrite(e,0);
 digitalWrite(f,0);
 digitalWrite(g,1);
 digitalWrite(h,0);
}


