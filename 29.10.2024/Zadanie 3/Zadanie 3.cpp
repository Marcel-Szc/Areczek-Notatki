#include <iostream>
#include <string>
using namespace std;
class Autor {
public:
    string Imie;
    string Nazwisko;
    Autor() : Imie(""), Nazwisko("") {};
    Autor(const string &i, const string &n) {
        this->Imie = i;
        this->Nazwisko = n;
    }
    void Wyswietl() {
        cout << "Imie autora: " << Imie << ", Nazwisko autora: " << Nazwisko << endl;
    }
};
class Ksiazka {
public:
    Autor nazwa;
    string tytul;
    Ksiazka(const Autor& a, const string &s) {
        this->nazwa = a;
        this->tytul = s;
    }
    void Wyswietl() {
        cout << "Tytul ksiażki: "<< tytul << endl;
    }
};

int main()
{
    Autor autor("Jeff", "Lindsay");
    Ksiazka ksiazka(autor, "Darkly Dreaming Dexter");

    autor.Wyswietl();
    ksiazka.Wyswietl();
}
