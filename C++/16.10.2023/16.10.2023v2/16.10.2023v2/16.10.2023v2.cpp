// sprawdz za pomoca wyr skr. czy liczba podana miesci sie w zakresie
// 1-10

#include <iostream>
using namespace std;

void sprawdz(int liczba);
int main()
{
	int liczba;
	cout << "Podaj ocene do sprawdzenia = "; cin >> liczba;
	sprawdz(liczba);

	system("pause");
	return 0;
}

void sprawdz(int liczba)
{
	liczba == 6 ? cout << "celujacy"
		: (liczba == 5 ? cout << "bdb"
			: (liczba == 4 ? cout << "db"
				: (liczba == 3 ? cout << "dost"
					: (liczba == 2 ? cout << "dop"
						: (liczba == 1 ? cout << "niedostateczny"
							: cout << "nie ma takiej oceny")))));
		  cout << endl;
}
