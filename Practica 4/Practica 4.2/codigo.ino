// C++ code
//
int G=13;
int F=12;
int A=11;
int B=10;
int E=9;
int D=8;
int C=7;
int lectura_pulsador=6;
int contador;

void setup()
{
  
  pinMode(G, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(C, OUTPUT);
  contador=0;
  
  
}

void loop()
{
  if(digitalRead(lectura_pulsador)==HIGH){
    contador=contador+1;
    
  }
  
  switch(contador){
    case 0:
    cero();
    break;
    
    case 1:
    uno();
    break;
    
    case 2:
    dos();
    break;
    
    case 3:
    tres();
    break;
    
    case 4:
    cuatro();
    break;
    
    
    
  }
  
  
  
  
}
//A,F,E,D,C,B
void cero(){
  digitalWrite(A,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(B,HIGH);
  delay(1000);
  digitalWrite(A,LOW);
  digitalWrite(F,LOW);
  digitalWrite(E,LOW);
  digitalWrite(D,LOW);
  digitalWrite(C,LOW);
  digitalWrite(B,LOW);
  
  
}


//B,C
void uno(){
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  delay(1000);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  
}

//A,B,G,E,D
void dos(){
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(D,HIGH);
  delay(1000);
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(G,LOW);
  digitalWrite(E,LOW);
  digitalWrite(D,LOW);
  
}

//A,B,C,G,D
void tres(){
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(D,HIGH);
  delay(1000);
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  digitalWrite(G,LOW);
  digitalWrite(D,LOW);
  
  
}
//F,G,B,C
void cuatro(){
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  delay(1000);
  digitalWrite(F,LOW);
  digitalWrite(G,LOW);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
}























