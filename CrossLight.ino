bool state[4][8]={{1,0,0,1,0,1,0,1},{0,1,1,0,0,1,0,1},{0,1,0,1,1,0,0,1},{0,1,0,1,0,1,1,0}};
int i,j;
int wait=30000;
void setup() {
  //Set Mode to OUTPUT for 1 to 8
  for (i=1;i<=8;i++){
    pinMode(i,OUTPUT);
  }
}

void loop() {
    //Change State
    for(j=0;j<4;j++){
      // Write To OutPut
      for(i=0;i<8;i++){
        digitalWrite(i+1,state[j][i]);
      }
      delay(wait);
    }
  
}
