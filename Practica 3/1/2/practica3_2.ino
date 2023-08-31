// C++ code
//
int LED1_ROJO=13; 
int LED2_ROJO=12;

int LED1_AMARILLO=11; 
int LED2_AMARILLO=10; 


int LED1_VERDE=9; 

int POTENCIOMETRO=A0;


void setup()
{
	pinMode(LED1_ROJO,OUTPUT);
  	pinMode(LED2_ROJO,OUTPUT);
  
  	pinMode(LED1_AMARILLO,OUTPUT);
  	pinMode(LED2_AMARILLO,OUTPUT);
  
  	pinMode(LED1_VERDE,OUTPUT);
  	
  
  	Serial.begin(9600);
}

void loop(){
  // hacer la lectura del potenciometro
  int POT=analogRead(POTENCIOMETRO);
  // 0-->1023
  
  if(POT<300){
    digitalWrite(LED1_ROJO,HIGH);
    digitalWrite(LED2_ROJO,HIGH);
    
    digitalWrite(LED1_AMARILLO,LOW);
    digitalWrite(LED2_AMARILLO,LOW);
    
    digitalWrite(LED1_VERDE,LOW);
  }
  else if(POT>=300 && POT<600){
    
    digitalWrite(LED1_ROJO,HIGH);
    digitalWrite(LED2_ROJO,HIGH);
    
    digitalWrite(LED1_AMARILLO,HIGH);
    digitalWrite(LED2_AMARILLO,HIGH);
    
    digitalWrite(LED1_VERDE,LOW);
    
    
  } else if(POT>=600){
    digitalWrite(LED1_ROJO,HIGH);
    digitalWrite(LED2_ROJO,HIGH);
    
    digitalWrite(LED1_AMARILLO,HIGH);
    digitalWrite(LED2_AMARILLO,HIGH);
    
    digitalWrite(LED1_VERDE,HIGH);
    
  }
  
  
  
  Serial.print("Valor del potenciometro:");
  Serial.println(POT);
  
}