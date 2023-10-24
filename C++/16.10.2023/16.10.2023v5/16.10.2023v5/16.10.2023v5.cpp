#include <iostream>
using namespace std;

int main()
{
    /*
    string nazwa[3] = { "Arkadiusz","Dariusz","Mariusz" };
    
    for (size_t i = 0; i < 3; i++)
    {
        cout << nazwa[i] << endl;
    } 
    */
    string imie = "Arkadiusz";
    for (size_t i = 0; i < imie.length(); i++)
    {
        cout << imie[i] << endl;
    }
    return 0;
}

