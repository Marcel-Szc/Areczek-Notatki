#include <iostream>
using namespace std;

int tab1[10] = {7,3,1,6,9,5,4,10,2,2};
int tab2[10];
int tab3[10];
int main()
{
    
    
    for (int i = 0; i < 5; i++)
    {
        cout << tab1[i] << endl;
    };

    tab1[6] = 12;
    cout << tab1[6] << endl;

    for (int i = 0; i < 10; i++) 
    {
       tab2[i] = tab1[i];
    };
    for (int i = 0; i < 10; i++)
    {
        tab3[i] = tab1[i] + tab2[i];
    };
    for (int i = 9; i > 0; i--)
    {
        tab2[i] = tab1[i];
        cout << tab2[3];
    };
}