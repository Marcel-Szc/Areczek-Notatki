#include <iostream>
using namespace std;
/*
   Pojazd: 1 wlasciwosc, 1 metoda:
     Silnik El.
     Silnik Spal.: 1 wl., 1 metoda:
      ZaplonZS 1wl, 1 metoda:
       Hybryda 1wl. 1 metoda
      ZaplonZI 1wl., 1 metoda:
       Hybryda 1wl, 1 metoda

   */
class Pojazd {
public:
    int nazwa_pojazdu;
    void prezentacjaPojazdu() {
        cout << "Nazwa pojazdu: " << this->nazwa_pojazdu << endl;
    }
};
class Silnik_spalinowy :public Pojazd {
public: 
    string nazwa_silnika;
    void PrezentacjaSilnika() {
        cout << "Nazwa silnika spalinowego: " << this->nazwa_silnika << endl;
    }
};
class Zaplon_zi :public Silnik_spalinowy, public Pojazd {
public:
    string nazwa_Zaplonu;
    void prezentacjaZaplonu() {
        cout << "Nazwa zaplonu: ";
    }
};

int main()
{
    cout << "Hello World!";

    return EXIT_SUCCESS;
}
