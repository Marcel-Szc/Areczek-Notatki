#include "potegowanie.h"
#include <cmath>
Potegowanie::Potegowanie(int l1, int l2)
{
    this->liczba1 = l1;
    this->liczba2 = l2;
}
int Potegowanie::oblicz()
{

    return pow(this->liczba1, this->liczba2);
}
