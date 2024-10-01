#include <iostream>
using namespace std;


class Postac {
public:
    virtual string prezentujPostac() = 0;

};
class Krasnal : public Postac {
private:
    string opis;
public:
    Krasnal(string opis) : opis(opis) {};
    string prezentujPostac() override { return opis; }
};
class Ksiezniczka : public Postac {
private:
    string opis2;
public:
    Ksiezniczka(string opis2) : opis2(opis2) {};
    string prezentujPostac() override { return opis2; }
};
class Ogr : public Postac {
private:
    string opis3;
public:
    Ogr(string opis3) : opis3(opis3) {};
    string prezentujPostac() override { return opis3; }
};
string przelaczPostac(Postac& Obiekt) {
    return  Obiekt.prezentujPostac();
};
int main()
{
    cout << "Zad4\n";
    Krasnal kras("Mały krasnal");
    Ksiezniczka ksie("Piekna ksiezniczka");
    Ogr ogr("Duży ogr");

    cout << "Krasnal: " << przelaczPostac(kras) << endl;
    cout << "Ksieznczka: " << przelaczPostac(ksie) << endl;
    cout << "Ogr: " << przelaczPostac(ogr) << endl;
}

