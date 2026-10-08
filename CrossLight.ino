void setup() {
  pinMode(1,OUTPUT); //NR
  pinMode(2,OUTPUT); //NG
  pinMode(3,OUTPUT); //ER
  pinMode(4,OUTPUT); //EG
  pinMode(5,OUTPUT); //SR
  pinMode(6,OUTPUT); //SG
  pinMode(7,OUTPUT); //WR
  pinMode(8,OUTPUT); //WG
  digitalWrite(1,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
}

void loop() {
    //Wait 30s
  delay(30000);
  //State Change
  digitalWrite(1,!digitalRead(1));
  digitalWrite(2,!digitalRead(2));
  digitalWrite(3,!digitalRead(3));
  digitalWrite(4,!digitalRead(4));
  digitalWrite(5,!digitalRead(5));
  digitalWrite(6,!digitalRead(6));
  digitalWrite(7,!digitalRead(7));
  digitalWrite(8,!digitalRead(8));

  
}
