int outputpin=0;
void setup()
{
  Serial.begin(9600);
}
void loop(){
  int voltage=analogRead(outputpin);
  float millivolts=(voltage/1240.0)*5000;
  float celcius=millivolts/10;
  Serial.print(celcius);
  Serial.print("celcius ");
  Serial.print((celcius*9)/5 + 32);
  Serial.print(" in fahrenheit");
  delay(1000);
}
