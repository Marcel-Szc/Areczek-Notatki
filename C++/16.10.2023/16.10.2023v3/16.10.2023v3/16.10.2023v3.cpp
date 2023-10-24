// sprawdz za pomoca wyr skr. czy liczba podana miesci sie w zakresie
// 1-10

#include <iostream>
using namespace std;

void sprawdz(int liczba);
int main()
{
	int liczba;
	cout << "Podaj liczbe = "; cin >> liczba;
	sprawdz(liczba);

	system("pause");
	return 0;
}

void sprawdz(int liczba)
{
	liczba == 1 ? cout << "Szkola na medal"
		: (liczba == 5 ? cout << "Szkola na kazdy czas"
			: (liczba == 10 ? cout << "Szkola to moje hobby"
				: (liczba <=0 ? cout << "Wiezienie"
				   : cout << "Kaj ty chodzisz")));
	cout << endl; 
}