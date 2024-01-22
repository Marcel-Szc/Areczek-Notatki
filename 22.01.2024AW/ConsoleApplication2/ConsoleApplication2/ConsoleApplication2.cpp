#include <iostream>
using namespace std;
struct Data {
    unsigned int dd, mm, rr;
};
struct Osoba
{
    char imie[50];
    char nazwisko[50];
    string zawod;
    int wiek;
    Data data_ur;
};

int main()
{

    Osoba programista1 = {
       "Lester",
       "Crest",
       "Napad na kasyno",
       48,
       {1, 1, 1975}
    };

    Osoba programista2 = {
       "Tyler",
       "Durden",
       "Schizofrenia",
       32,
       {12, 12, 3000}
    };

    cout << "Programista nr 1 " << programista1.imie << "\n"
        << programista1.nazwisko << "\n"
        << programista1.zawod << "\n"
        << programista1.wiek << "\n"
        << programista1.data_ur.dd << programista1.data_ur.mm << programista1.data_ur.rr << endl;

    cout << "Programista nr 1" << programista2.imie << "\n"
        << programista2.nazwisko << "\n"
        << programista2.zawod << "\n"
        << programista2.wiek << "\n"
        << programista2.data_ur.dd << programista2.data_ur.mm << programista2.data_ur.rr << endl;


    return EXIT_SUCCESS;
}
