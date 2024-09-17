#include <iostream>
using namespace std;
class Prostokat {
private:
    double szerokosc, wysokosc;
public:
    void ustawSzerokosc(double s) { this->szerokosc = s; } //setter
    void ustawWysokosc(double w) { this->wysokosc = w; } //setter
    double obliczPole() { return this->szerokosc * this->wysokosc; }
}; 

class Trojkat {
private:
    double podstawa, wysokoscT;
public:
    void ustawSzerokoscT(double p) { this->podstawa= p; } //setter
    void ustawWysokoscT(double w) { this->wysokoscT = w; } //setter
    double obliczPoleTroj() { return (this->podstawa * this->wysokoscT) / 2; }
};

class Romb {
private:
    double podstawa, wysokoscR;
public:
    void ustawSzerokoscR(double p) { this->podstawa = p; } //setter
    void ustawWysokoscR(double w) { this->wysokoscR = w; } //setter
    double obliczPoleRomb() { return this->podstawa * this->wysokoscR; }
};

int main()
{
    int i;
    cout << " 1. Prostokat \n 2. trojkat \n 3. Romb\n Wybierz co chcesz obliczyc: "; cin >> i; cout << endl;
    if (i == 1) {
        double s, w;
        cout << "podaj szer= "; cin >> s; cout << "\n";
        cout << "podaj wys= "; cin >> w; cout << "\n";
        Prostokat prostokat;

        prostokat.ustawSzerokosc(s);
        prostokat.ustawWysokosc(w);
        cout << "Pole prostokata= " << prostokat.obliczPole() << endl;
    }
    else if (i == 2) {
        double p, w;
        cout << "podaj podst= "; cin >> p; cout << "\n";
        cout << "podaj wys= "; cin >> w; cout << "\n";
        Trojkat trojkat;

        trojkat.ustawSzerokoscT(p);
        trojkat.ustawWysokoscT(w);
        cout << "Pole trojkata= " << trojkat.obliczPoleTroj() << endl;
    }
    else if (i == 3) {
        double p, w;
        cout << "podaj podst= "; cin >> p; cout << "\n";
        cout << "podaj wys= "; cin >> w; cout << "\n";
        Romb romb;

        romb.ustawSzerokoscR(p);
        romb.ustawWysokoscR(w);
        cout << "Pole rombu= " << romb.obliczPoleRomb() << endl;
    }
    else {
        cout << "nie wybrano poprawnej opcji";
    }


    return EXIT_SUCCESS;
}
