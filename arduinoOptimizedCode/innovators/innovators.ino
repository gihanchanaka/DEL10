int bottomCoordinate[25]={46,47,44,45,42,43,40,41,38,39,36,37,34,35,32,33,30,31,28,29,26,27,24,25,22};
int layerCoordinate[5]={48,51,50,53,52};
int timeNeededToCheatTheEye=1;
//int ans[125]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,};

int noOfFrames=10;
boolean frameData[10*125]={false,false,true,false,false,false,false,true,false,false,false,false,true,false,false,false,false,true,false,false,false,false,true,false,false,false,false,true,false,false,false,false,true,false,false,false,false,true,false,false,false,false,true,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,true,true,true,false,false,true,true,false,true,false,true,true,false,false,true,true,true,false,false,false,true,true,false,false,false,true,true,true,false,false,true,true,false,true,false,true,true,false,false,true,true,true,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,true,true,true,false,false,true,true,false,true,false,true,true,false,false,true,true,true,false,false,false,true,true,false,false,false,true,true,true,false,false,true,true,false,true,false,true,true,false,false,true,true,true,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,true,true,true,true,true,false,false,false,true,true,false,false,false,true,true,false,false,false,true,true,true,true,true,true,true,true,true,true,true,true,false,false,false,true,true,false,false,false,true,true,false,false,false,true,true,true,true,true,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,true,false,true,false,true,false,false,true,false,true,false,false,true,false,true,false,false,false,true,false,false,true,false,false,false,true,false,true,false,true,false,false,true,false,true,false,false,true,false,true,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,false,false,false,true,false,true,false,false,true,true,true,false,true,false,false,false,true,true,false,false,false,true,false,false,true,false,false,false,true,false,true,false,false,true,true,true,false,true,false,false,false,true,true,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,true,true,true,true,false,false,true,false,false,false,false,true,false,false,false,false,true,false,false,false,false,true,false,false,true,true,true,true,true,false,false,true,false,false,false,false,true,false,false,false,false,true,false,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,true,true,true,true,true,false,false,false,true,true,false,false,false,true,true,false,false,false,true,true,true,true,true,true,true,true,true,true,true,true,false,false,false,true,true,false,false,false,true,true,false,false,false,true,true,true,true,true,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,true,true,true,true,true,false,false,false,true,true,true,true,true,true,true,false,false,true,false,true,false,false,false,true,true,true,true,true,true,true,false,false,false,true,true,true,true,true,true,true,false,false,true,false,true,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,true,true,true,true,true,false,false,false,false,true,true,true,true,true,false,false,false,false,true,true,true,true,true,true,true,true,true,true,true,true,false,false,false,false,true,true,true,true,true,false,false,false,false,true,true,true,true,true,true};


void setToConfiguration(boolean configuration[], int timeInConfiguration);
void setup() {
  int i=0;
  for(i=0;i<25;i++){
    pinMode(bottomCoordinate[i],OUTPUT);
  }
  for(i=0;i<5;i++){
    pinMode(layerCoordinate[i],OUTPUT);
  }
}


void setToConfiguration(boolean configuration[], int timeInConfiguration){
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
        if(configuration[(layerNo*25)+a]){
          digitalWrite(bottomCoordinate[a],HIGH);
        }
        else{
          digitalWrite(bottomCoordinate[a],LOW);
        }
      }
      delay(timeNeededToCheatTheEye);
    }
  }
}

void loop() {
  int frameNo=0;
  for(frameNo=0;frameNo<noOfFrames;frameNo++){
    boolean frameThis[125];
    int i=0;
    for(i=0;i<125;i++){
      if(frameData[i+(frameNo*125)]){
        frameThis[i]=true;
      }
      else{
        frameThis[i]=false;
      }
      
    }
    setToConfiguration(frameThis,500);
  }
}



