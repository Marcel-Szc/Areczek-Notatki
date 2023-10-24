

#include <iostream>
using namespace std;

int main()
{
    string tablica[3];
    cout << "Dodaj 3 imiona do tablicy: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << " Podaj " << i + 1 << " imie: "; cin >> tablica[i];
    }
    cout << "-----------------------------" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << tablica[i] << endl;
    }
    return 0;
}  
