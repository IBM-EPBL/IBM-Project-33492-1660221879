int buzz=4;
int pir=7;
int echo=5;
int trigg=6;
int pir_led=12;
int us_led=13;
int time ;
int dist;
void setup()
{
Serial.begin(9600);
pinMode(pir_led, OUTPUT);
pinMode(us_led, OUTPUT);
pinMode(buzz, OUTPUT);
pinMode(pir, INPUT);
pinMode(echo, INPUT);
pinMode(trigg, OUTPUT);
}
void loop()
{ 
if (digitalRead(pir)==HIGH){
Serial.println("There is a person...");
digitalWrite(pir_led,HIGH);
delay(1000);
}
digitalWrite(pir_led,LOW);
digitalWrite(trigg,HIGH);
delayMicroseconds(10);
digitalWrite(trigg,LOW);
 time=pulseIn(echo,HIGH);
dist= (time*0.034)/2;
if (dist<=50)
{
Serial.println("A person Near...");
digitalWrite(us_led,HIGH);
analogWrite(buzz,HIGH);
delay(1000);
}
else
{
digitalWrite(us_led,LOW);
analogWrite(buzz,LOW);
delay(1000);
}
}