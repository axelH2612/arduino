int blue = 13 ;

void setup()
{
 pinMode(blue, OUTPUT); 
}
void loop()
{
   //Letra A .-
   digitalWrite(blue,HIGH);
   delay(1000);
   digitalWrite(blue,LOW);
   delay(1000);
   digitalWrite(blue,HIGH);
   delay(3000);
   digitalWrite(blue,LOW);
   delay(1000);
   //Letra X -..-
   digitalWrite(blue,HIGH);
   delay(3000);
   digitalWrite(blue,LOW);
   delay(1000);
   digitalWrite(blue,HIGH);
   delay(1000);
   digitalWrite(blue,LOW);
   delay(1000);
   digitalWrite(blue,HIGH);
   delay(1000);
   digitalWrite(blue,LOW);
   delay(1000);
   digitalWrite(blue,HIGH);
   delay(3000);
   digitalWrite(blue,LOW);
   delay(1000);
   //Letra E .
   digitalWrite(blue,HIGH);
   delay(1000);
   digitalWrite(blue,LOW);
   delay(1000);
   //Letra L .-..
   digitalWrite(blue,HIGH);
   delay(1000);
   digitalWrite(blue,LOW);
   delay(1000);
   digitalWrite(blue,HIGH);
   delay(3000);
   digitalWrite(blue,LOW);
   delay(1000);
   digitalWrite(blue,HIGH);
   delay(1000);
   
}
