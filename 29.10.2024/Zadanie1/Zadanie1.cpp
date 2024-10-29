#include <iostream>
#include <string>
using namespace std;
class Address {
public:
    string miasto;
    string ulica;
    int nr_domu;
    Address() : miasto(""), ulica(""), nr_domu(0) {};
    Address(const string& m, const string& u, const int& nr) {
        this->miasto = m;
        this->ulica = u;
        this->nr_domu = nr;
    }
    void display() {
        cout << "Address = " << miasto << " " << ulica << " " << nr_domu << endl;
    }
};
class Person {
public:
    string imie;
    string nazwisko;
    Address adres;
    Person(const string &i, const string &n, const Address &adres){
        this->imie = i;
        this->nazwisko = n;
        this->adres = adres;
    }
    void Display() {
        cout << "Imie: " << imie << ", Nazwisko: " << nazwisko << endl;
    }
};
int main()
{
    cout << "Hello, Dexter Morgan\n";

    Address adres("Floryda", "103rd Street",1155);
    Person person("Dexter", "Morgan", adres);

    person.Display();
    adres.display();


}

