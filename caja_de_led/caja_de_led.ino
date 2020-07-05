void setup() 
{
for(byte i =30; i<=39; i++){
  pinMode(i, OUTPUT);}
}

void loop()
{
for(byte n=30; n<=39;n++){
  digitalWrite (n, HIGH);
   delay(300);}

 for(byte n=39; n>=30;n--){
   digitalWrite (n, HIGH);}
   

   
 for(byte n=30; n<=39;n++){
   
   digitalWrite (n, HIGH);
   delay(50);
   digitalWrite (n, LOW);
   delay(300);}
   for(byte n=39; n>=30;n--){
   digitalWrite (n, HIGH);
   delay(50);
   digitalWrite (n, LOW);}
 }

