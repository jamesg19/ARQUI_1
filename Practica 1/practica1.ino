/*
Practica 1
*/

// Definir el número del pin que controla el LED
int ledPin = 13;

void setup() {
  // Configurar el pin como salida
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Encender el LED
  digitalWrite(ledPin, HIGH);
  delay(1000); // Esperar un segundo
  // Apagar el LED
  digitalWrite(ledPin, LOW);
  delay(1000); // Esperar un segundo
}
