
/*
Practica 2
*/
int ledPIN = 13;
int boton =3;
/*
Metodo SETUP
*/
void setup()
{
  pinMode(ledPIN, OUTPUT);
}

/*
Metodo LOOP
*/
void loop()
{
  if(digitalRead(boton)==HIGH)
  {
    digitalWrite(ledPIN, HIGH);
  }
  else
  {
    digitalWrite(ledPIN, LOW);
  }
}