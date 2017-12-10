#include <LiquidCrystal.h>
LiquidCrystal lcd (12, 11, 5, 4, 3, 2);
int feny=0;
int fe=A2;
void setup() {
  lcd.begin(16, 1);
Serial.begin(9600);
feny = analogRead(fe);
}

void loop() {

feny = analogRead(fe);
if(feny<0)
lcd.print("Homalyos eloter");
if(feny<=1 && feny>0){
lcd.print("Holdfeny");}
if(feny<=10 && feny>1)
lcd.print("Sotet szoba");
if(feny<=100 && feny>10)
lcd.print("Vilagos szoba");
if(feny>100 && feny<=400)
lcd.print("Iroda");
if(feny>400 && feny<=950)
lcd.print("Napfelkelte");
if(feny>950 && feny<10000)
lcd.print("Felhos nap");
if(feny>=10000 && feny<=25000)
lcd.print("Napsutes");
if(feny>25000)
lcd.print("Nap");
Serial.print(analogRead(fe));
Serial.print("\n");
delay(2000);
lcd.clear();
}