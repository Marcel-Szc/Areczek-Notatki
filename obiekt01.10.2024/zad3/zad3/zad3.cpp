#include <iostream>
using namespace std;


class Figura {
public:
    virtual double obliczPole() = 0;

};
class Kwadrat : public Figura {
private:
    double bok;
public:
    Kwadrat(double bok) { this->bok = bok; };
    double obliczPole() override { return pow(this->bok, 2); } // pow(this->bok, 2); this->bok * this->bok;
};
class Kolo : public Figura {
private:
    double promien;
public:
    Kolo(double r) : promien(r) {};
    double obliczPole() override {
        return 3.14 * pow(this->promien, 2);
    }
};
double przelaczFigure(Figura& Obiekt) {
    return  Obiekt.obliczPole();
};
int main()
    {
        cout << "Zad3\n";
        Kwadrat kw(12);
        Kolo kolo(5);

        cout << "Pole Kwadratu: " << przelaczFigure(kw) << endl;
        cout << "Pole Kola: " << przelaczFigure(kolo) << endl;
    }

