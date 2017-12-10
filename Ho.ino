int ledr=4;
int ledg=3;
int ledb=2;
int pi=8; int ho=A0;
void setup() {
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);

float meleg;
Serial.begin(9600);
meleg=digitalRead(ho);
}

void loop() {
float meleg=analogRead(ho);
if((meleg*5/1024-0.5)*100>28)
{
digitalWrite(4, HIGH);
tone(8,200);
}
else if((meleg*5/1024-0.5)*100<20)
{digitalWrite(2, HIGH);
tone(8,200);
  }
  else
  {digitalWrite(3, HIGH);
   noTone(8);
  
    }
Serial.print(digitalRead(ho));
Serial.print(" ");
Serial.print((meleg*5/1024-0.5)*100);
Serial.print(" ");
delay(2000);
digitalWrite(4 , LOW);
digitalWrite(3 , LOW);
digitalWrite(2 , LOW);
delay(100);
}
