#include <iostream>
#include <string>
using namespace std;
class Silnik {
public:
	int pojemnosc;
	int moc;
	Silnik() : pojemnosc(0), moc(0) {};
	Silnik(const int& p, const int& m) {
		this->pojemnosc = p;
		this->moc = m;
	}
	void Wyswietl() {
		cout << "Pojemnosc silnika: " << pojemnosc << "cm^3, moc silnika: " << moc << " koniów mechanicznych" << endl;
	}
};
class Samochod {
public:
	string marka;
	string model;
	Silnik silnik;
	Samochod(const string& ma, const string& mo, const Silnik& s) {
		this->marka = ma;
		this->model = mo;
		this->silnik = s;
	}
	void Wyswietl() {
		cout << "Marka smochodu: " << marka << ", Model samochodu: " << model << endl;
	}
};
int main()
{
	Silnik silnik(900, 900);
	Samochod samochod("Fiat", "seicento", silnik);

	silnik.Wyswietl();
	samochod.Wyswietl();
}
