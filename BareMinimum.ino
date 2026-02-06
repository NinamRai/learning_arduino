void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
  pinMode(10,OUTPUT);
}
void BlinkLight()
  {
    digitalWrite(8,HIGH);
    delay(100);
    digitalWrite(8,LOW);
    delay(100);
    digitalWrite(8,HIGH);
    delay(100);
    digitalWrite(8,LOW);
    delay(100);
    digitalWrite(8,HIGH);
    delay(100);
    digitalWrite(8,LOW);

  }
void Our()
{
  digitalWrite(10,HIGH);
  delay(300);
  digitalWrite(10,LOW);
  delay(300);
  digitalWrite(10,HIGH);
  delay(300);
  digitalWrite(10,LOW);
  delay(300);
  digitalWrite(10,HIGH);
  delay(300);
  digitalWrite(10,LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
  BlinkLight();
  delay(250);
  Our();
  delay(250);
  BlinkLight();
  delay(2000);

}
