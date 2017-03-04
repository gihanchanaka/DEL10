int bottomCoordinate[25]={46,47,44,45,42,43,40,41,38,39,36,37,34,35,32,33,30,31,28,29,26,27,24,25,22};
int layerCoordinate[5]={48,51,50,53,52};

void illuminateAll25();
void offAllColumns();
void illuminateMiddle9();
void illuminateMiddle1();
void offAllLayers();
void illuminateAll();
void offAll();



void setup() {
  int i=0;
  for(i=0;i<25;i++){
    pinMode(bottomCoordinate[i],OUTPUT);
  }
  for(i=0;i<5;i++){
    pinMode(layerCoordinate[i],OUTPUT);
  }
}

void illuminateAll(){
  int i;
  for(i=0;i<5;i++){
    digitalWrite(layerCoordinate[i],HIGH);
  }
  illuminateAll25();
}

void offAll(){
  offAllLayers();
  offAllColumns();
}

void loop(){
}

  int a=0;
  for(a=0;a<2;a++){
    illuminateAll();
    delay(150);
    offAll();
    delay(150);
  }
}


void illuminateAll25(){
  int x=0;
  for(x=0;x<25;x++){
    digitalWrite(bottomCoordinate[x],HIGH);
  }
}
void offAllColumns(){
  int x=0;
  for(x=0;x<25;x++){
    digitalWrite(bottomCoordinate[x],LOW);
  }
}

void illuminateMiddle9(){
  offAllColumns();
  int middleColumn[]={6,7,8,11,12,13,16,17,18};
  int x=0;
  for(x=0;x<9;x++){
    digitalWrite(bottomCoordinate[middleColumn[x]],HIGH);
  }
}

void illuminateMiddle1(){
  offAllColumns();
  digitalWrite(bottomCoordinate[12],HIGH);
}

void offAllLayers(){
  int x=0;
  for(x=0;x<5;x++){
    digitalWrite(layerCoordinate[x],LOW);
  }
}

