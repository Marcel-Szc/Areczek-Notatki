#include <iostream>

using namespace std;

int main()
{
    int* wsk;
    int liczba=2;
    cout << "Wskazniki" << endl;
    wsk = &liczba;
    cout << "Wsk=" <<(int)wsk << endl;
    cout << "*Wsk=" << *wsk << endl;
    cout << "Liczba=" <<liczba << endl;
    cout << "&Liczba=" << (int)&liczba << endl;
    cout << "&Wsk=" << (int)&wsk << endl;
    return 0;
}

