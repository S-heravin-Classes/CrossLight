bool state[4][8]={{1,0,0,1,0,1,0,1},{0,1,1,0,0,1,0,1},{0,1,0,1,1,0,0,1},{0,1,0,1,0,1,1,0}};
int i,j;
int wait=30000;
void setup() {
for (i=1;i<=8;i++){
  pinMode(i,OUTPUT);
}
}

void loop() {
    for(j=0;j<4;j++){
      for(i=0;i<8;i++){
        digitalWrite(i+1,state[j][i]);
      }
      delay(wait);
    }
  
}
