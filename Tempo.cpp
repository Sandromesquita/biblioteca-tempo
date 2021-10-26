#include "Arduino.h"
#include "Tempo.h"

tempo::tempo(int pin)
{
  pinMode(pin, OUTPUT);
  tempoInicial = millis();
  _pin = pin;
}

void tempo::contaTempo(int ms)
{
  if ((millis() - tempoInicial)> ms*2)
  {
    digitalWrite(_pin, HIGH);
    tempoInicial = millis();
    Serial.println("Tempo 2");
    x = 1;
  }
  else if (((millis() - tempoInicial)> ms) and (x == 1))
  {
    digitalWrite(_pin, LOW);
    Serial.println("Tempo 1");
    x = 0;
  }
}
