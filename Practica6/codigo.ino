// C++ code
//
int pirPin=7;
int pinLed=10;
int piezo=13;
int lecturaPir;


void setup()
{
  pinMode(pirPin, INPUT);
  pinMode(pinLed, OUTPUT);
  pinMode(piezo, OUTPUT);
  Serial.begin(9600);
  
}

void loop()
{
  
  lecturaPir=digitalRead(pirPin);
  
  if(lecturaPir ==HIGH){
    digitalWrite(pinLed,HIGH);
    Serial.println("Movimiento detectado");
    tone(piezo,261);
    
  }else{
    digitalWrite(pinLed,LOW);
    Serial.println("No se detecta movimiento");
    noTone(piezo);
  }
  delay(100);

}