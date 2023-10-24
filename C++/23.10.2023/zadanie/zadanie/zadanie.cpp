#include <iostream>
using namespace std;
float E(float m, float c);
float Ek(float m, float V);
float Ep(float m, float h, float g);
float Em(float m, float V, float h, float g);
void menu();

int main()
{
	int operacja;
	float m, c = 300000, h, V, g = 10 ;
	menu();
	cout << "Wybierz operacje = "; cin >> operacja;
	cout << "Podaj m: "; cin >> m;
	switch (operacja)
	{
	case 1:
		cout << "Energia: " << E(10, 300000) << endl;
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	default:
		cout << "Nie ma takiej operacja" << endl;
		break;
	}
}

float E(float m, float c)
{
	return m * pow(c,2);
}

float Ek(float m, float V)
{
	return (m * pow(V,2)) / 2;
}

float Ep(float m, float h, float g)
{
	return m * h * g;
}

float Em(float m, float V, float h, float g)
{
	return Ek(m,h,g) + Ep(m,V);
}

void menu()
{
}
