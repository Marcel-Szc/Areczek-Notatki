/*#include <iostream>
   #include<string>
   #include<iomanip> // biblioteka potrzebna aby wyświetlić liczbę po przecinku
   using namespace std;

class Samochody {
     private:
         string nazwa;
         float pojemnosc;
         string kolor;
         float cena;
     public:
         Samochody(string n, float p, string k, float c) {
             this->nazwa = n;
             this->pojemnosc = p;
             this->kolor = k;
             this->cena = c;
         }
         void prezentacjaSamochdu() {
             setlocale(LC_ALL, "");
             cout << "Marka: " << this->nazwa << "\n";
             cout << "Pojemnosc: " << this->pojemnosc << "\n";
             cout << "Kolor: " << this->kolor << "\n";
             cout << "Cena: ";printf("%.3f",this->cena); cout << endl;
         }
};

int main()
{
    Samochody fiat = Samochody("FIAT", 1.9, "zolty", 1.45896784564569457890);
    fiat.prezentacjaSamochdu();

    Samochody vw = Samochody("PASSERATI", 2.0, "czarny", 10.54616459);
    vw.prezentacjaSamochdu();

    return EXIT_SUCCESS;
} */
/*
    Zwierzatka jez = Zwierzatka("Jezyk", "Czarny", 1);
    jez.prezentacjaZwierzeta();

    Zwierzatka Szczur = Zwierzatka("Szczurek", "Szary", 1);
    Szczur.prezentacjaZwierzeta();

    Zwierzatka ReaktorNrCzteryWCzarnobylu = Zwierzatka("Króliko-Kot z 7 nogami", "Niebieski", 0 );
    ReaktorNrCzteryWCzarnobylu.prezentacjaZwierzeta();

    Zwierzatka Komunista = Zwierzatka("Emily LGTV+", "Czerwony", 0);
    Komunista.prezentacjaZwierzeta();
    */
/*#include <iostream>
#include<string>
#include<iomanip> // biblioteka potrzebna aby wyświetlić liczbę po przecinku
using namespace std;

class Zwierzatka {
private:
    string nazwa;
    string kolor;
    bool plec;
public:
    Zwierzatka(string n, string k, bool p) {
        this->nazwa = n;
        this->kolor = k;
        this->plec = p;
    }
    void prezentacjaZwierzeta() {
        setlocale(LC_ALL, "");
        cout << "Nazwa: " << this->nazwa << "\n";
        cout << "Kolor: " << this->kolor << "\n";
        cout << "Plec: " << this->plec; cout << endl;
        cout << "__________________________________________" << endl;
    }
};

int main()
{
    

    string tablicanazwa[4] = { "Jezyk", "Szczurek", "Króliko-Kot z 7 nogami", "Emily LGTV" };
    string tablicakolor[4] = { "Czarny", "Szary", "Niebieski", "Czerwony" };
    bool tablicaplec[4] = { 1 , 1, 1, 0 };

    for (size_t i = 0; i < 4; i++) {
        Zwierzatka zwierze(tablicanazwa[i], tablicakolor[i], tablicaplec[i]);
        zwierze.prezentacjaZwierzeta();
    }

    return EXIT_SUCCESS;
} */
#include <iostream>
#include<string>
#include<iomanip> // biblioteka potrzebna aby wyświetlić liczbę po przecinku
using namespace std;

class Klasa {
private:
    string imie;
    bool plec;
public:
    Klasa(string i, bool p) {
        this->imie = i;
        this->plec = p;
    }
    void przedstawienieKlasy() {
        setlocale(LC_ALL, "");
        cout << "Nazwa: " << this->imie << "\n";
        cout << "Plec: " << this->plec << "\n";
        cout << "__________________________________________" << endl;
    }
};

int main()
{


    string tablicaimie[10] = { "Jezyk", "Szczurek", "Adam", "Bambik","Cyprian", "Denis", "Esteban", "Franek", "Gandalf", "Henrich"};
    bool tablicaplec[10] = { 1 , 1, 1, 1, 1, 1 ,1 ,1,1, 1 };

    for (size_t i = 0; i < 10; i++) {
        Klasa uczen(tablicaimie[i], tablicaplec[i]);
        uczen.przedstawienieKlasy();
    }

    return EXIT_SUCCESS;
}


