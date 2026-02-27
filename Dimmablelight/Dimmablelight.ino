int potpin = A5;
int BPIN = 3;
int potval;
float ledval;
void setup() {
  // put your setup code here, to run once:
  pinMode(potpin,INPUT);
  pinMode(BPIN, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  potval = analogRead(potpin);
  ledval = (255./1023.)*potval;
  analogWrite(BPIN,ledval);

}
