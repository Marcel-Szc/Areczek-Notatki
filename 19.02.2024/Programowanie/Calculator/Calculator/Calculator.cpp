#include <iostream>
using namespace std;
  //kalulator
class Dodawanie
{
public:
    int liczba1;
    int liczba2;

    int oblicz()
    {
        return this->liczba1 + this->liczba2;
    };
};
class Odejmowanie
{
public:
    int liczba1;
    int liczba2;

    int oblicz()
    {
        return this->liczba1 - this->liczba2;
    }
};
class Mnozenie {
    public:
    int liczba1;
    int liczba2;

    int oblicz()
    {
        return this->liczba1 * this->liczba2;
    }
};
class Dzielenie
{
public:
    int liczba1;
    int liczba2;

    int oblicz()
    {
        return this->liczba1 / this->liczba2;
    }
};
class wynik {
public:
    void run()
    {
        int a, b;
        setlocale(LC_ALL, "");
        cout << "Podaj Liczba1 = "; cin >> a;
        cout << "Podaj Liczba2 = "; cin >> b;

        Dodawanie dodawanie;
        dodawanie.liczba1 = a;
        dodawanie.liczba2 = b;
        cout << "Wynik dodawania = " << dodawanie.oblicz() << endl;

        Odejmowanie odejmowanie;
        odejmowanie.liczba1 = a;
        odejmowanie.liczba2 = b;

        cout << "Wynik odejmowania = " << odejmowanie.oblicz() << endl;

        Mnozenie mnozenie;
        mnozenie.liczba1 = a;
        mnozenie.liczba2 = b;

        cout << "Wynik mnozenia = " << mnozenie.oblicz() << endl;

        Dzielenie dzielenie;
        dzielenie.liczba1 = a;
        dzielenie.liczba2 = b;

        cout << "Wynik dzielenia = " << dzielenie.oblicz() << endl;
    }
};
int main()
{
    wynik uruchom;
    uruchom.run();

    return EXIT_SUCCESS;
}
