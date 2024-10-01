#include <iostream>
using namespace std;

class Prostokat {
private:
    double szerokosc, wysokosc;
public:
    void ustawSzerokosc(double s) { this->szerokosc = s; }
    void ustawWysokosc(double w) { this->wysokosc = w; }
    double obliczPole() {
        return this->szerokosc * this->wysokosc;
    }
};

int main()
{
    cout << "Zad1\n";
    Prostokat prostokat;
    prostokat.ustawSzerokosc(10.5);
    prostokat.ustawWysokosc(15.8);
    cout << "Pole = " << prostokat.obliczPole() << endl;

    return 0;

}

