void setup() {
  pinMode(1,OUTPUT); //NR
  pinMode(2,OUTPUT); //NG
  pinMode(3,OUTPUT); //ER
  pinMode(4,OUTPUT); //EG
  pinMode(5,OUTPUT); //SR
  pinMode(6,OUTPUT); //SG
  pinMode(7,OUTPUT); //WR
  pinMode(8,OUTPUT); //WG

}

void loop() {
  //State I
  digitalWrite(1,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  //Wait 30s
  delay(30000);
  //State II
  digitalWrite(1,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  //Wait 30s
  delay(30000);
  
}
