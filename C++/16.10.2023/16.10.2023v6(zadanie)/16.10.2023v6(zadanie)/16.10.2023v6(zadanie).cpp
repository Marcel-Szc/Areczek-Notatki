#include <iostream>
using namespace std;

float iloczyn(int tablica[]);
float iloraz(int tablica[]);
float roznica(int tablica[]);
float suma(int tablica[]);

int main()
{
	int nazwa[] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "suma elemntow tablicy = " << suma(nazwa);
	cout << "suma elemntow tablicy = " << roznica(nazwa);
	cout << "suma elemntow tablicy = " << iloczyn(nazwa);
	cout << "suma elemntow tablicy = " << iloraz(nazwa);
	return 0;
	

	
}

float iloczyn(int tablica[])
{   
	return 0;
}

float iloraz(int tablica[])
{
	return 0.0f;
}

float roznica(int tablica[])
{
	int suma = 0;
	for (int i = 0; i < 9; i++)
	{
		suma = suma * tablica[i];
	}
	return suma; 
}

float suma(int tablica[])
{
	int suma = 0;
	for (int i = 0; i < 9; i++)
	{
		suma = suma + tablica[i];
	}
	return suma;
}
