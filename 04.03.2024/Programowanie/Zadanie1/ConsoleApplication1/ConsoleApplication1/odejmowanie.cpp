#include "odejmowanie.h"
Odejmowanie::Odejmowanie(int l1, int l2)
{
    this->liczba1 = l1;
    this->liczba2 = l2;
}
int Odejmowanie::oblicz()
{


    return this->liczba1 - liczba2;
}
