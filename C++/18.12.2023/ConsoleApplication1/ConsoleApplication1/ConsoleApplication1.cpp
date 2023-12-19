#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack <int> stosLiczby;

	stosLiczby.push(10);
	stosLiczby.push(20);
	stosLiczby.push(30);
	stosLiczby.push(40);
	stosLiczby.push(50);
	if (!stosLiczby.empty()) {stosLiczby.pop();}
	else { cout << "stos pusty"; }

	cout <<
	

	cout << stosLiczby.top();


	return EXIT_SUCCESS;
}

