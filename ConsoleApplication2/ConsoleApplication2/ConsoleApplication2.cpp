#include <iostream>
#include <math.h>
using namespace std;
float poleT(int& at, int& ht);
float poleR(int& ar, int& hr);
float poleKw(int& ak);
float poleP(int& ap, int& b);
float poleKo(int& r, int& M_PI);

int main()
{
    float at, ht, ar, hr, ak, ap, b, r, M_PI;
    setlocale(LC_ALL, "");
    cout << "Podaj a trójkąta = "; cin >> at;
    cout << "Podaj h trójkąta = "; cin >> ht;
    cout << "Podaj a rombu = "; cin >> ar;
    cout << "Podaj h rombu = "; cin >> hr;
    cout << "Podaj a kwadrata = "; cin >> ak;
    cout << "Podaj a prostokąta = "; cin >> ap;
    cout << "Podaj b prostokąta = "; cin >> b;
    cout << "Podaj r koła = "; cin >> r;
    cout << "Pole Trójkąta = " << poleT(at, ht) << endl;
    cout << "Pole Romba = " << poleR(ar, hr) << endl;
    cout << "Pole Kwadrata = " << poleKw(ak) << endl;
    cout << "Pole Prostokąta = " << poleP(ap, b) << endl;
    cout << "Pole Koła = " << poleKo(r, M_PI) << endl;
}

float poleT(int& at, int& ht)
{
    return (at*ht)/2;
}

float poleR(int& ar, int& hr)
{
    return ar*hr;
}

float poleKw(int& ak)
{
    return ak*ak;
}

float poleP(int& ap, int& b)
{
    return ap * b;
}

float poleKo(int& r, int& M_PI)
{
    return M_PI * (r*r);
}
