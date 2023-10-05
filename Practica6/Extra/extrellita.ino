int piezoPin = 7; // Pin digital al que está conectado el altavoz piezoeléctrico

// Definir las notas y sus frecuencias correspondientes (en Hz)
int melody[] = {
  523, 523, 784, 784, 880, 880, 784, 0, 
  698, 698, 659, 659, 587, 587, 523, 0, 
  784, 784, 698, 698, 659, 659, 587, 0, 
  784, 784, 698, 698, 659, 659, 587, 0,
  523, 523, 784, 784, 880, 880, 784, 0, 
  698, 698, 659, 659, 587, 587, 523, 0
};

// Duraciones: 4 = negra, 8 = corchea, etc. (en milisegundos)
int noteDurations[] = {
  500, 500, 500, 500, 500, 500, 1000, 500, 
  500, 500, 500, 500, 500, 500, 1000, 500, 
  500, 500, 500, 500, 500, 500, 1000, 500, 
  500, 500, 500, 500, 500, 500, 1000, 500,
  500, 500, 500, 500, 500, 500, 1000, 500, 
  500, 500, 500, 500, 500, 500, 1000, 500
};

void setup() {
  pinMode(piezoPin, OUTPUT);
}

void loop() {
  // Reproducir la melodía "Estrellita, ¿dónde estás?"
  for (int i = 0; i < sizeof(melody) / sizeof(melody[0]); i++) {
    if (melody[i] == 0) {
      delay(noteDurations[i]); // Espera si es un silencio
    } else {
      tone(piezoPin, melody[i]); // Toca la nota
      delay(noteDurations[i]); // Espera por la duración de la nota
      noTone(piezoPin); // Detiene el tono
      delay(50); // Pequeño tiempo de espera entre notas
    }
  }
}
