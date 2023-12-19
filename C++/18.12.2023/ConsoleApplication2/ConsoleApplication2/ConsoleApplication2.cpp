#include <iostream>
#include <stack>
using namespace std;

struct DaneStruktura {
    int liczba;
    string opis;
};
class DaneKlasa {
    private: 
        DaneStruktura tablica[2];
    public: 
        DaneStruktura& PodajDane(int index) {
            return tablica[index];
        }


};
s


int main()
{
    stack <DaneStruktura> mojaStruktura;
    stack <DaneKlasa> mojaKlasa;

    DaneStruktura pierwszyWpis = { 1,"Jeden" };
    mojaStruktura.push(pierwszyWpis);


    DaneStruktura DrugiWpis = { 2,"Dwa" };
    mojaStruktura.push(DrugiWpis);



    return 0;
}