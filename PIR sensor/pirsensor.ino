void setup()
{
  pinMode(12, INPUT);
  pinMode(13,OUTPUT);
}
void loop()
{
  int value=digitalRead(12);
  if(value==HIGH)
    digitalWrite(13,HIGH);
  else
    digitalWrite(13,LOW);
}
