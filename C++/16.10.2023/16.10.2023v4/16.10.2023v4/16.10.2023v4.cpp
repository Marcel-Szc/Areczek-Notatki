#include <iostream>
using namespace std;

int dodawanie(int tablica[]);

int main()
{   
    int nazwa[] = { 10,15,20,25,30 };
    cout << "suma elemntow tablicy = " << dodawanie(nazwa);
    return 0;
}

int dodawanie(int tablica[])
{
    int suma = 0;
    for (int i = 0; i < 5; i++)
    {
        suma = suma + tablica[i];
    }

    return suma;
}

