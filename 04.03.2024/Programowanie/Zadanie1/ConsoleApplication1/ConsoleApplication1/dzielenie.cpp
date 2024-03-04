#include "dzielenie.h"
Dzielenie::Dzielenie(int l1, int l2)
{
    this->liczba1 = l1;
    this->liczba2 = l2;
}
int Dzielenie::oblicz()
{
   int wynik = 0;
    if (liczba1 >= liczba2) 
    {
        wynik = this->liczba1 / liczba2;
    }
    else {
        wynik = this->liczba2 / liczba1;
    }
    return wynik;
}

