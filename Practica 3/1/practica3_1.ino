// C++ code
//

int LED=13;// Pin de salida a led
int POTENCIOMETRO=A0;// Pin analogo a potenciometro



void setup()
{
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  
  int POT=analogRead(POTENCIOMETRO);
  
  if(POT>512){
    digitalWrite(LED,HIGH);
  }else{
   
  	digitalWrite(LED,LOW);
  }
  
  
  
  //Imprimir el valor de la lectura en potenciometro
  Serial.print("Valor de POT: ");
  Serial.println(POT);
}