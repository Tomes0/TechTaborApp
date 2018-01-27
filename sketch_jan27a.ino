  int feny=2;
  int ho=A0;
  int fe=A2;
  int gaz=A5;
  float meleg;

void setup() {
  Serial.begin(9600);
  pinMode(A5, INPUT);
  meleg=digitalRead(ho);
  feny=analogRead(fe);
}

void loop() {
  feny = analogRead(fe);
    if( feny<0) Serial.print("Homalyos eloter");
    else if( feny<=1 && feny>0)Serial.print("Holdfeny");
    else if( feny<=10 && feny>1)Serial.print("Sotet szoba");
    else if( feny<=100 && feny>10)Serial.print("Vilagos szoba");
    else if( feny>100 && feny<=400)Serial.print("Iroda");
    else if( feny>400 && feny<=950)Serial.print("Napfelkelte");
    else if( feny>950 && feny<10000)Serial.print("Felhos nap");
    else if( feny>=10000 && feny<=25000)Serial.print("Napsutes");
    else if( feny>25000)Serial.print("Nap");

    gaz=analogRead(A5);
    if (gaz<250)Serial.print("Its good m8");
        else Serial.print("U ded");

    Serial.print((meleg*5/1024-0.5)*100);

    Serial.print(" ");
    delay(200);

}

