/*
Zaprojektuj apliakcje do zarzadzania biblioteką, w którje użytkownik może dodawać różne typy mediów np. ksiażki ,filmy, muzyka 
do kolekcji. Każdy typ medium powinien być reprezentowany przez odpowiednią klasę dziedziczącą po klasie "medium". stwórz metody 
virtualne takie jak: 
-WYpożycz
-Dodaj
które umożliwią zarządzanie wypożyczaniem mediów
*/
#include <iostream>
#include <set>
#include <string>
using namespace std;
class Medium {
public:
    virtual void wypozycz() = 0;
    virtual void dodaj() = 0;
};
class Ksiazki :public Medium {
public:
    void wypozycz() {
        string nazwa;
        cout << "\nPodaj numer wypozyczanego filmu: "; cin >> nazwa;
        cout << "pomyślnie wypozyczono ksiazke o nazwie:" << nazwa << endl;
    }
    void dodaj() {
        string nazwa;
        cout << "\nPodaj numer nazwęe filmu: "; cin >> nazwa;
        cout << "pomyślnie dodano ksiazke o nazwie: " << nazwa << endl;
    }
};
class Filmy :public Medium {
public:
    void wypozycz() {
        string nazwa;
        cout << "\nPodaj numer wypozyczanego filmu: "; cin >> nazwa;
        cout << "pomyślnie wypozyczono film o nazwie:"<< nazwa << endl;
    }
    void dodaj() {
        string nazwa;
        cout << "\nPodaj numer nazwęe filmu: "; cin >> nazwa;
        cout << "pomyślnie dodano film o nazwie: "<< nazwa << endl;
    }
};
class Muzyka :public Medium {
public:
    void wypozycz() {
        string nazwa;
        cout << "\nPodaj numer wypozyczanego muzyka: "; cin >> nazwa;
        cout << "pomyślnie wypozyczono muzyke o nazwie:" << nazwa << endl;
    }
    void dodaj() {
        string nazwa;
        cout << "\nPodaj numer nazwe muzyki: "; cin >> nazwa;
        cout << "pomyślnie dodano muzyke o nazwie: " << nazwa << endl;
    }
};
void dodaj(Medium& obiekt) {
    obiekt.dodaj();
};
void wypozycz(Medium& obiekt) {
    obiekt.wypozycz();
};

int main() {
    Ksiazki ksia; Filmy film; Muzyka muza;
    int menuMedium;
    int menuOpcji;
    cout << "1-Dodaj, 2-Wypozycz\nwybierz: "; cin >> menuOpcji;
    cout << "1-Ksiazki, 2-Filmy, 3-Muzyka\nwybierz: "; cin >> menuMedium;

    if (menuOpcji == 1) {
        switch (menuMedium) {
        case 1:
            dodaj(ksia);
            break;
        case 2:
            dodaj(film);
            break;
        case 3:
            dodaj(muza);
            break;
        default:
            cout << "Bladswitch1" << endl;
            break;
        }
    }
    else if (menuOpcji == 2) {
            switch (menuMedium) {
            case 1:
                wypozycz(ksia);
                break;
            case 2:
                wypozycz(film);
                break;
            case 3:
                wypozycz(muza);
                break;
            default:
                cout << "Bladswitch2" << endl;
                break;
            }
        }
    else{
        cout << "Bladelse" << endl;
    }
    return EXIT_SUCCESS;
}