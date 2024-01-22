#include <iostream>
using namespace std;
struct Data {
    unsigned int dd, mm, rr;
};
struct Przedmioty {
    char nazwa_pr[50];
    char prowadzący[50];
};
struct Zainteresowania {
    char Nazwa_Za[50];
    int czas_Za;
    char poziom_trud;
};
struct Uczeń
{
    char imie[50];
    char nazwisko[50];
    Przedmioty przedmioty;
    Zainteresowania zainteresowania;
    Data data_ur;
};

int main()
{
    /*
     Uczeń uczeń1 = {
       "Lester",
       "Crest",
       {"Angielski", "D. Libek"},
       {"Napad na kasyno", "1800", "100/100"},
       {1, 1, 1975}
    };

    Uczeń uczeń2 = {
       "Tyler",
       "Durden",
       {"W-F", "Oszek"},
       {"Walki", "2000", "90/100"},
       {12, 12, 3000}
    };

    Uczeń uczeń3 = {
       "Francisco",
       "Lachowski",
       {"Mogging", "Donald Trump"},
       {"Walki", "45", "200/100"},
       {12, 12, 3000}
    };

    cout << "Programista nr 1 " << uczeń1.imie << "\n"
        << uczeń1.nazwisko << "\n"
        << uczeń1.przedmioty.nazwa_pr << "\n"
        << uczeń1.przedmioty.nazwa_pr << "\n"
        << uczeń1.data_ur.dd << uczeń1.data_ur.mm << uczeń1.data_ur.rr << endl;

    cout << "Programista nr 1" << programista2.imie << "\n"
        << programista2.nazwisko << "\n"
        << programista2.zawod << "\n"
        << programista2.wiek << "\n"
        << programista2.data_ur.dd << programista2.data_ur.mm << programista2.data_ur.rr << endl;
        */

    return EXIT_SUCCESS;
}