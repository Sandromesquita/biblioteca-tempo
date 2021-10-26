#ifndef tempo_1
#define tempo_1
#include "Arduino.h"

class tempo
{
  public:
    tempo(int pin);
    void contaTempo(int ms);
  private:
    unsigned long tempoInicial;
    int _pin;
    bool x = 1;
};
#endif
