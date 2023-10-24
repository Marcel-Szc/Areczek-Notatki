#include <iostream>
using namespace std;
void opismenu();
int main()
{
    int menu;
    cout << "Zadanie1 Poznanie switchcase. ";
    opismenu();
    cout << "wybierz z menu:  "; cin >> menu;

    switch (menu)
    {
    case 1:
        cout << "Barwy Sczescia" << endl;
        break;
    case 2:
        cout << "Nasze zloto i obrazy dalej tam maja" << endl;
        break;
    case 3:
        cout << "Niech zamkna te wkoncu Coffie Szopy..... ludzie juz nie chca kurzyc lolki" << endl;
        break;
    case 4:
        cout << "Horror Ruski: ostatni ziemniok w piwnicy" << endl;
        break;
    default:
        cout << "Ciesz sie bo jestes WOLNY" << endl;
        break;
    }
    return 0;
}

void opismenu()
{
    cout << "Menu: Polska - 1, Niemcy - 2, Holandia - 3, Rosja - 4" << endl;
}
