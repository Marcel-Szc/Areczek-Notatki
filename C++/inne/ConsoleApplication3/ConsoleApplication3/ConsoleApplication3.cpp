#include <iostream>
using namespace std;

float dodawanie(float liczba1, float liczba2);
float odejmowanie(float liczba1, float liczba2);
float mnozenie(float liczba1, float liczba2);
void menu();

int main()
{
    int operacja;
    menu();
    cout << "Wybierz Operacje = "; cin >> operacja;
    
    switch (operacja)
    {
    case 1:
        cout << "Dodawanie = " << dodawanie(10, 25) << endl;
        break;
    case 2:
        cout << "odejmowanie = " << odejmowanie(10, 25) << endl;
        break;    
    case 3:
        cout << "mnozenie = " << mnozenie(10, 25) << endl;
        break;
    default:
        cout << "Nie ma takiej operacji" << endl;
        break;
    }
    return 0;
}

float dodawanie(float liczba1, float liczba2)
{
    return liczba1 + liczba2;
}

float odejmowanie(float liczba1, float liczba2)
{
    return liczba1 - liczba2;
}

float mnozenie(float liczba1, float liczba2)
{
    return liczba1 * liczba2;
}

void menu()
{
}
