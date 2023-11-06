#include <iostream>
#include<fstream>
using namespace std;
// zadanie1: zapis do pliku txt linii wczytaniej z klawiatury
int main()
{
	char znaki[100];
	fstream plik;
	plik.open("marcel.txt", ios::in | ios::out | ios::trunc);

	cout << "podaj wpis: " << "\n";
	cin.getline(znaki, 10, '\n');
	plik << znaki;

	plik.close();
	system("pause");

	EXIT_SUCCESS;
   
}
