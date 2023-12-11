
#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector <int> tablica; //deklaracja wektora-
    int iloscElementow, liczba;
    cout << "podaj ile chcesz el do tablicy: "; cin >> iloscElementow;

    for (size_t i = 1; i < iloscElementow; i++)
    {
        cout << "Podaj liczbe : "; cin >> liczba;
    }

    for (int i = 0; i < tablica.size(); i++)
    {
        cout << tablica[i] << endl;
    }



    return EXIT_SUCCESS;
}

