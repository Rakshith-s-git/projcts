const int ledPin=7;
const int s=8;
void setup() {
  // put your setup code here, to run once:
  pinMode(s,INPUT);
pinMode(ledPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(s)==HIGH)
  {
digitalWrite(ledPin,HIGH);
  }
else
{
digitalWrite(ledPin,LOW);
}}
