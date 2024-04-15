#include <iostream>
using namespace std;

class Narodowosc{
public:
    virtual void opis() {
        cout << "kraje świata...." << endl;
    }
};
class Polska:public Narodowosc{
public: 
     void opis() {
        cout << "kraj Polska" << endl;
    }
};
class Niemcy:public Narodowosc {
public:
    void opis() {
        cout << "kraj Niemcy" << endl;
    }
};
class Litwa:public Narodowosc {
public:
    void opis() {
        cout << "kraj Litwa" << endl;
    }
};
class Łotwa:public Narodowosc {
public:
    void opis() {
        cout << "kraj lotwa" << endl;
    }
};
void przelaczPanstwo(Narodowosc &obiekt) {
    obiekt.opis();
};

int main()
{
    cout << "Polimorfizm\n";

    Polska pol;
    Niemcy nie;
    Litwa lit;
    Łotwa lot;
    int kraj;

    cout << "wybierz kraj: 1-PL, 2-DE, 3-LT, 4-LTL = " << endl; cin >> kraj;
    switch (kraj)
    {
    case 1: 
        przelaczPanstwo(pol);
        break;
    case 2:
        przelaczPanstwo(nie);
        break;
    case 3:
        przelaczPanstwo(lit);
        break;
    case 4:
        przelaczPanstwo(lot);
        break;
    default:
        cout << "nie ma takiego kraju na liście" << endl;
        break;
    }

    return EXIT_SUCCESS;
} 
/*
#include <iostream>
#include <math.h>
using namespace std;
class Ksztalt {
public:
    virtual void rysuj() = 0;
    virtual void oblicz() = 0;
};
class Kolo :public Ksztalt {
public: 
    float r;
    float pi = 3.141592653589793238462643383279502884197169399375105820974944592307816406286;
    void rysuj() {
        cout << "rysuje kolo" << endl;
    }
    void oblicz() {
       cout << "Podaj promien r: "; cin >> r;
       float wynik = pi*r*r;
       cout << "Pole wynosi: " << wynik << endl;
    }
};
class Prostokat :public Ksztalt {
public:
    float a;
    float b;
    void rysuj() {
        cout << "rysuje prostokat" << endl;
    }
    void oblicz() {
        cout << "Podaj bok a: "; cin >> a;
        cout << "Podaj bok h: "; cin >> b;
        float wynik = a * b;
        cout << "Pole wynosi: " << wynik << endl;
    }
};
class  Kwadrat :public Ksztalt {
public:
    float a;
    void rysuj() {
        cout << "rysuje kwadrat" << endl;
    }
    void oblicz() {
        cout << "Podaj bok a: "; cin >> a;
        float wynik = a * a;
        cout << "Pole wynosi: " << wynik << endl;
    }
};
class Romb :public Ksztalt {
public:
    float a;
    float h;
    void rysuj() {
        cout << "rysuje romb" << endl;
    }
    void oblicz() {
        cout << "Podaj bok a: "; cin >> a;
        cout << "Podaj wysokosc h: "; cin >> h;
        float wynik = a * h;
        cout << "Pole wynosi: " << wynik << endl;
    }
};
class Trojkat :public Ksztalt {
public:
    float a;
    float h;
    void rysuj() {
        cout << "rysuje trojkat" << endl;
    }
    void oblicz() {
        cout << "Podaj bok a: "; cin >> a;
        cout << "Podaj wysokosc h: "; cin >> h;
        float wynik = (a * h)/2;
        cout << "Pole wynosi: " << wynik << endl;
    }
};

int main() {
    cout << "Polimorfizm: metoda virtualna + wskaźniki\n";

    Ksztalt* wskaznik;
    Kolo kolo;Prostokat prostokat;Kwadrat kwadrat;Romb romb;Trojkat trojkat;
    int menu;
    cout << "1-Kolo, 2-Prostokat, 3-Kwadrat, 4-Romb, 5-Trojkat\nwybierz: "; cin >> menu;

    switch (menu) {
    case 1:
        wskaznik = &kolo;
        wskaznik->rysuj();
        wskaznik->oblicz();
        break;
    case 2:
        wskaznik = &prostokat;
        wskaznik->rysuj();
        wskaznik->oblicz();
        break;
    case 3:
        wskaznik = &kwadrat;
        wskaznik->rysuj();
        wskaznik->oblicz();
        break;
    case 4:
        wskaznik = &romb;
        wskaznik->rysuj();
        wskaznik->oblicz();
        break;
    case 5:
        wskaznik = &trojkat;
        wskaznik->rysuj();
        wskaznik->oblicz();
        break;
    default:
        cout << "Brak wybranego ksztaltu" << endl;
        break;
    }
    return EXIT_SUCCESS;
} */