
#include <iostream>
using namespace std;
int main()
{
	double suma = 0, srednia, wynik;
	double tablica[3] = { 10.3,23.5,44.56 };

	int ile = sizeof(tablica) / sizeof (double);

	for (int i = 0; i < ile; i++)
	{
		suma += tablica[i];
	}

	wynik = suma / ile;

	cout << "Srednia arytmetyczna zaokragl w gora = " << ceil(wynik) << endl;
	cout << "Srednia arytmetyczna zaokragl w dol = " << floor(wynik) << endl;
	cout << "Srednia arytmetyczna zaokragl w 3 miejsc  = "; printf("%.3f", wynik);
	cout << "\n";
	cout << "Srednia arytmetyczna zaokragl w 5 miejsc  = "; printf("%.5f", wynik);
	cout << "\n";
	return 0;
}
