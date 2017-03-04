//RAIN on 5*5*5 LED Cube

int base[5][5]={{37,27,26,38,48},{39,29,24,36,46},{41,31,22,34,44},{45,35,25,32,42},{43,33,23,28,40}};
int layer[5]={51,49,47,50,52};
int thisLayer[25];
int thisLayerFilled[5][5];    
int timeTT=1;
int speedTT=5;
int toFillUptoLayer=5;
int drainRate=500;
 
void setup(){
  for(int x=0;x<5;x++){
    for(int y=0;y<5;y++){
      pinMode(base[x][y],OUTPUT);
    }
  }
  for(int x=0;x<5;x++)pinMode(layer[x],OUTPUT);
}
 
 
void loop(){
  fill();
  drain();
}  
 
void drain(){
   allOn();
   layerOff(toFillUptoLayer-1);
   for(int z=toFillUptoLayer-2;z>-1;z--){
    layerOff(z);
    delay(drainRate);
   }
   allOff();
}
void fill(){
  for(int layerToFill=0;layerToFill<toFillUptoLayer;layerToFill++){
    for(int x=0;x<25;x++){
      thisLayer[x]=x;
      thisLayerFilled[x/5][x%5]=0;
    }
   
    for(int x=0;x<25;x++){
      int a=random(25-1);
      int b=random(25-1);
      int xx=thisLayer[a];
      thisLayer[a]=thisLayer[b];
      thisLayer[b]=xx;
    }
   
    for(int rainPoint=0;rainPoint<25;rainPoint++){
      rain(thisLayer[rainPoint]/5,thisLayer[rainPoint]%5,layerToFill-1);
    }
  }  
}
 
 
void rain(int xRain,int yRain,int currentFullFilledLayer){
  for(int currentRainLayer=4;currentRainLayer>-1;currentRainLayer--){
    for(int repeatNo=0;repeatNo<speedTT;repeatNo++){
      allOff();
      for(int z=4;z>-1;z--){
        baseOffFull();
        layerOn(z);
        for(int x=0;x<5;x++){
          for(int y=0;y<5;y++){
            if(z<=currentFullFilledLayer) baseOn(x,y);
            else if(z==currentFullFilledLayer+1 && thisLayerFilled[x][y]==1){
              baseOn(x,y);
            }
            else if(x==xRain && y==yRain){
              if(z==currentRainLayer)baseOn(x,y);
            }
           
          }
        }
        delay(timeTT);
        layerOff(z);
      }  
    }
    if(currentRainLayer==currentFullFilledLayer+1){
      thisLayerFilled[xRain][yRain]=1;
      break;
    }
  }    
}  
 
 
 
void baseOn(int x,int y){
  digitalWrite(base[x][y],HIGH);
}
 
void baseOff(int x,int y){
  digitalWrite(base[x][y],LOW);
}
 
void layerOn(int z){
  digitalWrite(layer[z],HIGH);
}
 
void layerOff(int z){
  digitalWrite(layer[z],LOW);
}
 
void baseOffFull(){
  for(int x=0;x<5;x++){
    for(int y=0;y<5;y++){
      baseOff(x,y);
    }
  }
}
 
void layerOffFull(){
  for(int z=0;z<5;z++){
    layerOff(z);
  }
}
 
void allOff(){
  baseOffFull();
  layerOffFull();
}
 
void baseOnFull(){
  for(int x=0;x<5;x++){
    for(int y=0;y<5;y++){
      baseOn(x,y);
    }
  }
}
 
void layerOnFull(){
  for(int z=0;z<5;z++){
    layerOn(z);
  }
}
 
void allOn(){
  baseOnFull();
  layerOnFull();
}
RAW Paste Data

int base[5][5]={{37,27,26,38,48},{39,29,24,36,46},{41,31,22,34,44},{45,35,25,32,42},{43,33,23,28,40}};
int layer[5]={51,49,47,50,52};
int thisLayer[25];
int thisLayerFilled[5][5];    
int timeTT=1;
int speedTT=5;
int toFillUptoLayer=5;
int drainRate=500; 
 
void setup(){
  for(int x=0;x<5;x++){
    for(int y=0;y<5;y++){
      pinMode(base[x][y],OUTPUT);
    }
  }
  for(int x=0;x<5;x++)pinMode(layer[x],OUTPUT);
}
 
 
void loop(){
  fill();
  drain();
}  

void drain(){
   allOn();
   layerOff(toFillUptoLayer-1);
   for(int z=toFillUptoLayer-2;z>-1;z--){
    layerOff(z);
    delay(drainRate);
   }
   allOff();
}
void fill(){
  for(int layerToFill=0;layerToFill<toFillUptoLayer;layerToFill++){
    for(int x=0;x<25;x++){
      thisLayer[x]=x;
      thisLayerFilled[x/5][x%5]=0;
    }
    
    for(int x=0;x<25;x++){
      int a=random(25-1);
      int b=random(25-1);
      int xx=thisLayer[a];
      thisLayer[a]=thisLayer[b];
      thisLayer[b]=xx;
    }
   
    for(int rainPoint=0;rainPoint<25;rainPoint++){
      rain(thisLayer[rainPoint]/5,thisLayer[rainPoint]%5,layerToFill-1);
    }
  }  
}
 
 
void rain(int xRain,int yRain,int currentFullFilledLayer){
  for(int currentRainLayer=4;currentRainLayer>-1;currentRainLayer--){
    for(int repeatNo=0;repeatNo<speedTT;repeatNo++){
      allOff();
      for(int z=4;z>-1;z--){
        baseOffFull();
        layerOn(z);
        for(int x=0;x<5;x++){
          for(int y=0;y<5;y++){
            if(z<=currentFullFilledLayer) baseOn(x,y);
            else if(z==currentFullFilledLayer+1 && thisLayerFilled[x][y]==1){
              baseOn(x,y);
            }
            else if(x==xRain && y==yRain){
              if(z==currentRainLayer)baseOn(x,y);
            }
            
          }
        }
        delay(timeTT);
        layerOff(z);
      }  
    }
    if(currentRainLayer==currentFullFilledLayer+1){
      thisLayerFilled[xRain][yRain]=1;
      break;
    }
  }    
}  
 
 
 
void baseOn(int x,int y){
  digitalWrite(base[x][y],HIGH);
}
 
void baseOff(int x,int y){
  digitalWrite(base[x][y],LOW);
}
 
void layerOn(int z){
  digitalWrite(layer[z],HIGH);
}
 
void layerOff(int z){
  digitalWrite(layer[z],LOW);
}
 
void baseOffFull(){
  for(int x=0;x<5;x++){
    for(int y=0;y<5;y++){
      baseOff(x,y);
    }
  }
}
 
void layerOffFull(){
  for(int z=0;z<5;z++){
    layerOff(z);
  }
}
 
void allOff(){
  baseOffFull();
  layerOffFull();
}

void baseOnFull(){
  for(int x=0;x<5;x++){
    for(int y=0;y<5;y++){
      baseOn(x,y);
    }
  }
}
 
void layerOnFull(){
  for(int z=0;z<5;z++){
    layerOn(z);
  }
}
 
void allOn(){
  baseOnFull();
  layerOnFull();
}

         