#include "mnozenie.h"
Mnozenie::Mnozenie(int l1, int l2)
{
    this->liczba1 = l1;
    this->liczba2 = l2;
}
int Mnozenie::oblicz()
{

    return this->liczba1 * liczba2;
}
