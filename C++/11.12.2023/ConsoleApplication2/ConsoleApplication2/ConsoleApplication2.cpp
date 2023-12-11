#include <vector>
#include <iostream>
#include <time.h>
#include <algorithm>
using namespace std;

int main()
{
    srand(time(NULL));

    vector<int> tab_los;

    for (size_t i = 0; i < 100; i++)
    {
        int los = rand() % 100 + 1;
        tab_los.push_back(los);
    }

    sort(tab_los.begin(), tab_los.end());

    for (size_t i = 0; i < tab_los.size(); i++)
    {
        cout << tab_los[i] << " ";
    }

    return EXIT_SUCCESS;
}
