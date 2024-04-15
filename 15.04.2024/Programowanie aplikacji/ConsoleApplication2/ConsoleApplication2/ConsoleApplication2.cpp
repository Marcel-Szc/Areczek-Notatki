/*ZADANIE 3
----------------------------------------------------ZADANIE 3------------------------------------------------------------
Wariant 1 "POLIMORFIZM z użyciem wskaznika:
1. utworz klase abstrakcyjna o nazwie Przedmioty
2. Klasa Przedmioty zawiera 2 metody virtualne :
-virtual void srednia_ocen() z 3 ocen liczby średnia ocen
- virtual void prezentacjaUcznia()
3. Aplikacja konsolowa posiada klasy : Matematyka, JezykPolski, Fizyka.Aplikacje, które wyznaczają średnią ocen z
przedmioty i prezentuja imie, nazwisko ucznia.Klasy korzystaja z klasy abstrakcyjnej.
4. Aplikacja przelacza sie pomiedy obiektami poprzez funkcji switch case...
-------------------------------------------------------------------------------------------------------------------------
Wariant 2 "POLIMORFIZM z użyciem funkcji przekazujacej parametr bez wskaznika:
1. utworz klase abstrakcyjna o nazwie Przedmioty
2. Klasa Przedmioty zawiera 2 metody virtualne :
-virtual void srednia_ocen() z 3 ocen liczby średnia ocen
- virtual void prezentacjaUcznia()
3. Aplikacja konsolowa posiada klasy : Matematyka, JezykPolski, Fizyka.Aplikacje, które wyznaczają średnią ocen z
przedmioty i prezentuja imie, nazwisko ucznia.Klasy korzystaja z klasy abstrakcyjnej.
4. Aplikacja przelacza sie pomiedy obiektami poprzez funkcji switch case...
-------------------------------------------------------------------------------------------------------------------------
*/
//WARIANT 1
//-----------------------------------------------------------------------------------------------------------------------
/*
#include <iostream>
#include <math.h>
using namespace std;
class Przedmioty {
public:
    virtual void prezentacjaUcznia() = 0;
    virtual void srednia_ocen() = 0;
};
class Matematyka :public Przedmioty {
public:
    void prezentacjaUcznia() {
        cout << "Imie: Kanje\nNazwisko: Łest" << endl;
    }
    void srednia_ocen() {
        cout << "Srednia ocen: " << (3 + 4 + 5) / 2 << endl;
    }
};
class JezykPolski :public Przedmioty {
public:
    void prezentacjaUcznia() {
        cout << "Imie: Kanje\nNazwisko: Ist" << endl;
    }
    void srednia_ocen() {
        cout << "Srednia ocen: " << (2 + 6 + 1) / 2 << endl;
    }
};
class Fizyka :public Przedmioty {
public:
    void prezentacjaUcznia() {
        cout << "Imie: Kanje\nNazwisko: Norf" << endl;
    }
    void srednia_ocen() {
        cout << "Srednia ocen: " << (1 + 4 + 4) / 2 << endl;
    }
};

int main() {
    Przedmioty* wskaznik;
    Matematyka matma; JezykPolski polok; Fizyka fiza;
    int menu;
    cout << "1-Matematyka, 2-JezykPolski, 3-Fizyka\nwybierz: "; cin >> menu;

    switch (menu) {
    case 1:
        wskaznik = &matma;
        wskaznik->prezentacjaUcznia();
        wskaznik->srednia_ocen();
        break;
    case 2:
        wskaznik = &polok;
        wskaznik->prezentacjaUcznia();
        wskaznik->srednia_ocen();
        break;
    case 3:
        wskaznik = &fiza;
        wskaznik->prezentacjaUcznia();
        wskaznik->srednia_ocen();
        break;
    default:
        cout << "Brak wybranego ksztaltu" << endl;
        break;
    }


    return EXIT_SUCCESS;
} 
*/
//WARIANT 2
//-----------------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <math.h>
using namespace std;
class Przedmioty {
public:
    virtual void prezentacjaUcznia() = 0;
    virtual void srednia_ocen() = 0 ;
};
class Matematyka :public Przedmioty {
public:
    void prezentacjaUcznia() {
        cout << "Imie: Kanje\nNazwisko: Łest" << endl;
    }
    void srednia_ocen() {
        cout << "Srednia ocen: " << (3 + 4 + 5) / 3 << endl;
    }
};
class JezykPolski :public Przedmioty {
public:
    void prezentacjaUcznia() {
        cout << "Imie: Kanje\nNazwisko: Ist" << endl;
    }
    void srednia_ocen() {
        cout << "Srednia ocen: " << (2 + 6 + 1) / 3 << endl;
    }
};
class Fizyka :public Przedmioty {
public:
    void prezentacjaUcznia() {
        cout << "Imie: Kanje\nNazwisko: Norf" << endl;
    }
    void srednia_ocen() {
        cout << "Srednia ocen: " << (1 + 4 + 4) / 3 << endl;
    }
};
void przelaczPrzedmiot(Przedmioty& obiekt) {
    obiekt.prezentacjaUcznia();
    obiekt.srednia_ocen();
};

int main() {
    Matematyka matma; JezykPolski polok; Fizyka fiza;
    int menu;
    cout << "1-Matematyka, 2-JezykPolski, 3-Fizyka\nwybierz: "; cin >> menu;

    switch (menu) {
    case 1:
        przelaczPrzedmiot(matma);
        break;
    case 2:
        przelaczPrzedmiot(polok);
        break;
    case 3:
        przelaczPrzedmiot(fiza);
        break;
    default:
        cout << "Brak wybranego ksztaltu" << endl;
        break;
    }


    return EXIT_SUCCESS;
}