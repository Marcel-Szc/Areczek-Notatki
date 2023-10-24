// sprawdz za pomoca wyr skr. czy liczba podana miesci sie w zakresie
// 1-10

#include <iostream>
using namespace std;

void sprawdz(int liczba);
int main()
{
	int liczba;
	cout << "Podaj liczbe do sprawdzenia = "; cin >> liczba;
	sprawdz(liczba);

	system("pause");
	return 0;
}

void sprawdz(int liczba)
{
	(liczba >= 1 && liczba <= 10) ? cout << "Ok " : cout << "Error ";
	cout << endl;
}
