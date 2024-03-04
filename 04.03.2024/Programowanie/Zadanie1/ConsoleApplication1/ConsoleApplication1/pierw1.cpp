#include "pierw1.h"
#include <cmath>
Pierw1::Pierw1(int l1)
{
    this->liczba1 = l1;
}
int Pierw1::oblicz()
{

    return sqrt(this->liczba1);
}
