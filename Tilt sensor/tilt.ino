int tilt = 2;
int led = 13;
int reading = 0;
void setup()
{
  pinMode(tilt, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int reading;
  reading = digitalRead(tilt);
  Serial.print(reading);

  if(reading==1)
    digitalWrite(led,LOW);
  else
    digitalWrite(led,HIGH);
}
