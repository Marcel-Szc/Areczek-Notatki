#include <iostream>
#include <cmath>
#include "dodawanie.h"
#include "odejmowanie.h"
#include "dzielenie.h"
#include "mnozenie.h"
#include "potegowanie.h"
#include "pierw1.h"
#include "pierw2.h"
//TEamat: Przeciążenie konstruktora klasy
using namespace std;
/*class Gady {
private:
    int czaszycia;
    string nazwa;
    string srodowisko;
public:
    Gady() {
        cout << "to jest kontruktor Gady: Domyslny Chopie!" << endl;
    }
    Gady(int time) {
        this->czaszycia = time;
        cout << "To jest konstruktor gady i mo Gazina czas zycia: "<< this->czaszycia << endl;
    }
    Gady(int time, string nazwa, string srodowisko) {
        this->czaszycia = time;
        this->nazwa =nazwa;
        this->srodowisko = srodowisko;
        cout << "To jest konstruktor gady i mo Gazina czas zycia: " << this->czaszycia << endl;
        cout << "To jest konstruktor gady i mo Gazina na imie: " << this->nazwa << endl;
        cout << "To jest konstruktor gady i mo srodowisko: " << this->srodowisko << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "");

    Gady nauczyciel1();
    Gady nauczyciel2(3, "Baktuil", "wodne");
    return EXIT_SUCCESS;
}*/
int main()
{
    cout << "Aplikacja Klakulator" << endl;
    int liczba1, liczba2;
    cout << "Podaj liczbe1 =  "; cin >> liczba1;
    cout << "Podaj liczbe2 =  "; cin >> liczba2;

    cout << "-------------------------------" << endl;

    Dodawanie dodawanie(liczba1, liczba2);
    cout << "Wynik dodawanie= " << dodawanie.oblicz() << endl;

    Odejmowanie odejmowanie(liczba1, liczba2);
    cout << "Wynik odejmowania= " << odejmowanie.oblicz() << endl;

    Dzielenie dzielenie(liczba1, liczba2);
    cout << "Wynik dzielenie= " << dzielenie.oblicz() << endl;

    Mnozenie mnozenie(liczba1, liczba2);
    cout << "Wynik mnozenia= " << mnozenie.oblicz() << endl;

    Potegowanie potegowanie(liczba1, liczba2);
    cout << "Wynik potegowania= " << potegowanie.oblicz() << endl;

    Pierw1 pierw1(liczba1);
    cout << "Wynik pierwiastkowania liczby1= " << pierw1.oblicz() << endl;
    Pierw2 pierw2(liczba2);
    cout << "Wynik pierwiastkowania liczby2= " << pierw2.oblicz() << endl;

    return EXIT_SUCCESS;
}

