int gaz = A5;
int piros,zold;

void setup()
{
  pinMode(A5, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  zold=3;piros=2;
}

void loop()
{
  gaz=analogRead(A5);
  
  
  if (gaz<100) {
    digitalWrite(zold, HIGH);
    digitalWrite(piros, LOW); 
  }
  else {digitalWrite(piros, HIGH);
        digitalWrite(zold, LOW);} 
  delay(10); 