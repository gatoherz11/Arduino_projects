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
//numero "0"
 digitalWrite(a,1);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,1);
 digitalWrite(e,1);
 digitalWrite(f,1);
 digitalWrite(g,0);
 digitalWrite(h,0);
 delay (t);
 //---------------------------------
 //numero "1"
 digitalWrite(a,0);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,0);
 digitalWrite(e,0);
 digitalWrite(f,0);
 digitalWrite(g,0);
 digitalWrite(h,0);
  delay (t);

 //---------------------------------
 //numero "2"
 digitalWrite(a,1);
 digitalWrite(b,1);
 digitalWrite(c,0);
 digitalWrite(d,1);
 digitalWrite(e,1);
 digitalWrite(f,0);
 digitalWrite(g,1);
 digitalWrite(h,0);
  delay (t);

 //---------------------------------
 //numero "3"
 digitalWrite(a,1);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,1);
 digitalWrite(e,0);
 digitalWrite(f,0);
 digitalWrite(g,1);
 digitalWrite(h,0);
  delay (t);

 //---------------------------------
 //numero "4"
 digitalWrite(a,0);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,0);
 digitalWrite(e,0);
 digitalWrite(f,1);
 digitalWrite(g,1);
 digitalWrite(h,0);
  delay (t);

 //---------------------------------
 //numero "5"
 digitalWrite(a,1);
 digitalWrite(b,0);
 digitalWrite(c,1);
 digitalWrite(d,1);
 digitalWrite(e,0);
 digitalWrite(f,1);
 digitalWrite(g,1);
 digitalWrite(h,0);
  delay (t);

 //---------------------------------
 //numero "6"
 digitalWrite(a,1);
 digitalWrite(b,0);
 digitalWrite(c,1);
 digitalWrite(d,1);
 digitalWrite(e,1);
 digitalWrite(f,1);
 digitalWrite(g,1);
 digitalWrite(h,0);
  delay (t);

 //---------------------------------
 //numero "7"
 digitalWrite(a,1);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,0);
 digitalWrite(e,0);
 digitalWrite(f,0);
 digitalWrite(g,0);
 digitalWrite(h,0);
  delay (t);

 //---------------------------------
 //numero "8"
 digitalWrite(a,1);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,1);
 digitalWrite(e,1);
 digitalWrite(f,1);
 digitalWrite(g,1);
 digitalWrite(h,0);
  delay (t);

 //---------------------------------
 //numero "9"
 digitalWrite(a,1);
 digitalWrite(b,1);
 digitalWrite(c,1);
 digitalWrite(d,1);
 digitalWrite(e,0);
 digitalWrite(f,1);
 digitalWrite(g,1);
 digitalWrite(h,0);
  delay (t);

 //---------------------------------
 
 
 


}
