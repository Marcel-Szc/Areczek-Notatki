#include <iostream>
using namespace std;

/*
class Zwierze {
public:
    Zwierze() { cout << "Zwierze stworzone" << endl; }
    ~Zwierze() { cout << "Zwierze zniszczone" << endl; }
}; */


static class Matematyka {
public:
    static constexpr double PI = 3.14159;
    static int silnia(int n) {
        if (n <= 1) return 1;
        return n * silnia(n - 1);
    }
};

int main()
{
   /* cout << "Konstruktor i Destruktor\n";

    Zwierze z;*/


    return EXIT_SUCCESS;
}