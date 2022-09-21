int pirPinIN = 7;
int pirPinOUT = 10;
int led = 13;
static long counter = 0;

void setup()
{
  pinMode(pirPinIN, INPUT);
  pinMode(pirPinOUT, INPUT);
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);
  Serial.begin(9600);
}
 
void loop()
{
  long now = millis();
  if (digitalRead(pirPinIN) == HIGH)
  {
      counter++;
      Serial.println(counter);
      digitalWrite(led, HIGH);
      delay(500);
      digitalWrite(led, LOW);
  }
  if (digitalRead(pirPinOUT) == HIGH)
  {
      counter--;
      Serial.println(counter);
      digitalWrite(led, HIGH);
      delay(500);
      digitalWrite(led, LOW);
  }
}