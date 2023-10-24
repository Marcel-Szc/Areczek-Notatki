
#include <iostream>
using namespace std;
int main()
{
	float srednia;
	float suma = 0;
	float sumap = 0;
	float sumanp = 0;
	int tablica[] = { 1,2,3,4,5,6,7,8,9 };
	int rozmiarT = sizeof(tablica) / sizeof(int);
	//srednia
	for (int i = 0; i < rozmiarT; i++) {
		suma = suma + tablica[i];
		if (tablica[i] % 2 == 0) {
			sumap = sumap + tablica[i];
		}
		else {
			sumanp = sumanp + tablica[i];
		}
	}
	cout << "Srednia liczb = " << suma / rozmiarT << endl;
	cout << "suma liczb = " << suma << endl;
	cout << "suma liczb parzystych = " << sumap << endl;
	cout << "suma liczb nieparzystych = " << sumanp << endl;
}
