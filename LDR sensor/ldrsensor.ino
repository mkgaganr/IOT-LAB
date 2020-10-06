const int ledPin=8;
const int ldrPin=A0;
void setup()
{
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
  pinMode(ldrPin,INPUT);
}
void loop(){
  int ldrStatus = analogRead(ldrPin);
  Serial.println(ldrStatus);
  if(ldrStatus <=200){
    digitalWrite(ledPin,HIGH);
    Serial.println("ldr is dark, led is on");
  }
  else{
    digitalWrite(ledPin,LOW);
    Serial.println("--------------");
  }
}
