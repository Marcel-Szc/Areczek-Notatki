#include <iostream>
using namespace std;

class Pojazd {
public: 
    string nazwa;
    int predkosc;
    void jedz() { cout << "pojazd jedzie " << this->nazwa << endl; }
};
class Samochod : public Pojazd {
public:
    int liczbaDrzwi;

};

int main()
{
    cout << "Zad2\n";
    Samochod fiat;
    fiat.nazwa = "FIAT 126p";
    fiat.predkosc = 126;
    fiat.liczbaDrzwi = 3;
    fiat.jedz();
    cout << "liczba drzwi: " << fiat.liczbaDrzwi << endl << "Prędkość: " << fiat.predkosc;
  

    return 0;

}

