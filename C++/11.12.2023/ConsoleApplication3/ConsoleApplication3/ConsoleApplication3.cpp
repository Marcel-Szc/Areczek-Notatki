#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    vector <string> imiona;
    vector <int> datyUr;

    int iloscImion, iloscDat;

    cout << "podaj ile chcesz imion: "; cin >> iloscImion ;

    for (size_t i = 1; i < iloscImion; i++)
    {
        string imie;
        cout << "Podaj imie: "; cin >> imie;
        imiona.push_back(imie);
    }


    for (size_t i = 1; i < iloscDat; i++)
    {
        int daty;
        cout << "Podaj imie: "; cin >> daty;
        datyUr.push_back(daty);
    }

    return EXIT_SUCCESS;
}

