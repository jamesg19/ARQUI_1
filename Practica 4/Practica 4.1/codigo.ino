// C++ code
//
int G=13;
int F=12;
int A=11;
int B=10;
int E=9;
int D=8;
int C=7;

void setup()
{
  
  pinMode(G, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(C, OUTPUT);
  
  
}

void loop()
{
  uno();
  dos();
  tres();
  cuatro();
  
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























