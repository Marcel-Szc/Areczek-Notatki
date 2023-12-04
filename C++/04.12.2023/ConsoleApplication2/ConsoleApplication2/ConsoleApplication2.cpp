#include <iostream>

using namespace std;
int oblicz(int wsk);
int main()
{
    int* wsk;
    int liczba1;
    string zmk;
    setlocale(LC_ALL, "");
    cout << "Wskazniki cwiczenie nr 2" << endl;
    cout << "podaj liczbe =  "; cin >> liczba1;

    wsk = &liczba1;
    cout << "Przekazuje do funkcji wsk = " << oblicz((int)wsk) << endl;

    cout << "Adres WSK = " << (int)&wsk << endl;
    cout << "Adres zmiennej liczba1 wskazujący przez WSK = " << (int)wsk << endl;
    cout << "Adres adres zmiennej liczba1 = " << (int)&liczba1 << endl;
    cout << "Wartość zmiennej liczba1 pobiera *WSK = " << *wsk << endl;
    //------------------------------------------------------------------------------

    int liczba2;
    cout << "podaj liczbe2 = "; cin >> liczba2;

    wsk = &liczba2;
    cout << "Przekazuje do funkcji wsk = " << oblicz((int)wsk) << endl;

    cout << "Adres WSK = " << (int)&wsk << endl;
    cout << "Adres zmiennej liczba1 wskazujący przez WSK = " << (int)wsk << endl;
    cout << "Adres adres zmiennej liczba2 = " << (int)&liczba2 << endl;
    cout << "Wartość zmiennej liczba2 pobiera *WSK = " << *wsk << endl;
    return 0;
}
int oblicz(int wsk) {
    return wsk;
}