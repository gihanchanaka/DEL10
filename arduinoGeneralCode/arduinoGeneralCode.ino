int bottomCoordinate[25]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
int layerCoordinate[5]={0,1,2,3,4};
int timeNeededToCheatTheEye=100;
int ans[125]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,};

int noOfFrames=10;
int frameData[10*125]={};

void setToConfiguration(int configuration[], int timeInConfiguration);
void setup() {
  int i=0;
  for(i=0;i<25;i++){
    pinMode(bottomCoordinate[i],OUTPUT);
  }
  for(i=0;i<5;i++){
    pinMode(layerCoordinate[i],OUTPUT);
  }
}


void setToConfiguration(int configuration[], int timeInConfiguration){
  int layerNo=0;
  int loopNo=0;
  int noOfLoops=timeInConfiguration/(5*timeNeededToCheatTheEye);
  for(loopNo=0;loopNo<noOfLoops;loopNo++){
    for(layerNo=0;layerNo<5;layerNo++){
      int a=0;
      for(a=0;a<5;a++){
        digitalWrite(layerCoordinate[a],LOW);
      }
      digitalWrite(layerCoordinate[layerNo],HIGH);

      for(a=0;a<25;a++){
        if(configuration[(layerNo*25)+a]==1){
          digitalWrite(bottomCoordinate[a+(layerNo*25)],HIGH);
        }
        else{
          digitalWrite(bottomCoordinate[a+(layerNo*25)],LOW);
        }
      }
      delay(timeNeededToCheatTheEye);
    }
  }
}

void loop() {
  int frameNo=0;
  for(frameNo=0;frameNo<noOfFrames;frameNo++){
    int frameThis[125]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int i=0;
    for(i=0;i<125;i++){
      frameThis[i]=frameData[i+(frameNo*125)]
    }
    setToConfiguration(frameData,2);
  }
}



