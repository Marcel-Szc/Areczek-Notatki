/*#include <iostream>
using namespace std;

class Pojazdy {
	private:
		string nazwa;
	public:
		Pojazdy(string nazwa) {
			this->nazwa = nazwa;
		}
		void prezentacjaPojazdu() {
			cout << "Moj ulubiony pojazd to: " << this->nazwa << endl;
		}
};
class Samochod : public Pojazdy {
	private:
		string marka;
		int iloscDrzwi;
		string nazwaSamochodu;
	public:
		Samochod(string marka, int iloscDrzwi, string nazwa):Pojazdy(nazwa) {
			this->marka = marka;
			this->iloscDrzwi = iloscDrzwi;
			this->nazwaSamochodu = nazwa;
		}
		void prezentacjaSamochodu() {
			cout << "Nazwa pojazdu: " << this->nazwaSamochodu << "\n";
			cout << "Marka: " << this->marka << "\n";
			cout << "Ilosc drzwi: " << this->iloscDrzwi << "\n";
		}
};
int main()
{

	Samochod vw = Samochod("VW", 5, "Passat");
	vw.prezentacjaPojazdu();
	vw.prezentacjaSamochodu();

	return EXIT_SUCCESS;
} */
#include <iostream>
using namespace std;

class Gady {
private:
	string nazwa;
	int wiek;
public:
	Gady(string nazwa, int wiek) {
		this->nazwa = nazwa;
		this->wiek = wiek;
	}
	void prezentacjaGada() {
		cout << "rodzaj gada: " << this->nazwa << ", wiek Gada: " << this->wiek << endl;
	}
};
class Krokodyl : public Gady {
private:
	string imie;
	bool plec;
	string lokalizacja;
	string nazwa;
	int wiek;
public:
	Krokodyl(string imie, bool plec, string lokalizacja, string nazwa, int wiek ) :Gady(nazwa, wiek) {
		this->imie = imie;
		this->plec = plec;
		this->lokalizacja = lokalizacja;
		this->nazwa = nazwa;
		this->wiek = wiek;
	}
	void prezentacjaKrokodyla() {
		string gender = " ";
		if (plec == 0) {
			 gender = "kobieta";
		}
		else if (plec == 1) {
			 gender = "chop";
		}
		else {
			gender = "Problem psychiczny";
		}
		cout << "nazwa Gada: " << this->nazwa << "\n";
		cout << "Imie Krokodyla: " << this->imie << "\n";
		cout << "Plec: " << gender << "\n";
		cout << "Lokalizacja: " << this->lokalizacja << "\n";
		cout << "wiek: " << this->wiek << "\n";
	}
};
int main()
{

	Krokodyl michal = Krokodyl("Anastazja", 2, "Vice City", "kroko", 52);
	michal.prezentacjaGada();
	michal.prezentacjaKrokodyla();

	return EXIT_SUCCESS;
}


