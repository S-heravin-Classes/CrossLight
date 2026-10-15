bool state[4][8]={{1,0,0,1,0,1,0,1},{0,1,1,0,0,1,0,1},{0,1,0,1,1,0,0,1},{0,1,0,1,0,1,1,0}};
int I=9;
int II=10;
int III=11;
int IV=12;
int Auto4=13;
int i,j,Police;
int wait=30000;
void setup() {
  //Set Mode to OUTPUT for 1 to 8
  for (i=1;i<=8;i++){
    pinMode(i,OUTPUT);
  }
}

void loop() {
// Write To OutPut
    for(i=0;i<8;i++){
      digitalWrite(i+1,state[j][i]);
    }
    // Read Police Key State 
    if(!digitalRead(Auto4)) Police=5;
    else if(!digitalRead(I)) Police=1;
    else if(!digitalRead(II)) Police=2;
    else if(!digitalRead(III)) Police=3;
    else if(!digitalRead(IV)) Police=4;

    //Select Allow Way with Police Key State
    switch (Police){
      case 1:
      // State I 
       j=0;
      case 2:
      // State II
       j=1;
       break;
       case 3:
       // State III
       j=2;
       break;
       case 4:
       // State IV
       j=3;
       break;
       case 5:
       // State Auto4
       if(j<3) j++;
       else j=0;
       delay(wait);
       break;
    }

  
}
