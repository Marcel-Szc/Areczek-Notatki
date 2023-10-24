#include <iostream>
using namespace std;

int main()
{
	int zmienna = 3;
	switch (zmienna)
	{
	case 1:
		cout << "godosz po polsku " << endl;
	case 2:
		cout << "godosz po Izraelsku" << endl;
	case 3:
		cout << "godosz po Rumunsku " << endl;
		break;
	case 4:
		cout << "godosz po angielsku chopie" << endl;
	default:
		cout << "godosz gupoty..." << endl;
		break;
	}
}
