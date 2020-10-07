int temppin=A0;
float temp=0;
int Buzzer=12;
void setup()
{
  Serial.begin(9600);
  pinMode(Buzzer,OUTPUT);
  pinMode(13,OUTPUT);
}
void loop(){
  temp=analogRead(temppin);
  temp=temp*0.448828125;
  Serial.println(temp);
  delay(1000);
  if(temp>37)
  {

    digitalWrite(Buzzer,HIGH);
    digitalWrite(13,HIGH);
    delay(300);
  }
  else
  {
    digitalWrite(Buzzer,LOW);
    digitalWrite(13,LOW);
  }
}
