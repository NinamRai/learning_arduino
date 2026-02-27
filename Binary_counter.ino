int a = 2;
int b = 3;
int c = 4;
int d = 5;

int on = HIGH; 
bool off = LOW;

void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
}

// FIX: Added 'int' before each parameter name
void logic(int base1, int base2, int base3, int base4) {
  digitalWrite(a, base1);
  digitalWrite(b, base2);
  digitalWrite(c, base3);
  digitalWrite(d, base4);
}

void loop() {
  // You passed 4 'myStatus' values into the 4 slots
  logic(off,off,off,off);
  delay(1000);
  logic(off,off,off,on);
  delay(1000);
  logic(off,off,on,off);
  delay(1000);
  logic(off,off,on,on);
  delay(1000);
  logic(off,on,off,off);
  delay(1000);
  logic(off,on,off,on);
  delay(1000);
  logic(off,on,on,off);
  delay(1000);
  logic(off,on,on,on);
  delay(1000);
  logic(on,off,off,off);
  delay(1000);
  logic(on,off,off,on);
  delay(1000);
  logic(on,off,on,off);
  delay(1000);
  logic(on,off,on,on);
  delay(1000);
  logic(on,on,off,off);
  delay(1000);
  logic(on,on,off,on);
  delay(1000);
  logic(on,on,on,on);
  delay(1000);
}