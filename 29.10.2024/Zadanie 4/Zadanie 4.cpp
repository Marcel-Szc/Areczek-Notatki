#include <iostream>
#include <string>
using namespace std;
class Screen {
public:
    int wys;
    int dl;
    Screen() : wys(0), dl(0) {};
    Screen(const int w, const int& d) {
        this->wys = w;
        this->dl = d;
    }
    void Wyswietl() {
        cout << "Rodzielczosc: " << wys << "x" << dl << endl;
    }
};
class Laptop {
public:
    Screen screen;
    string nazwa;
    Laptop(const Screen& a, const string& s) {
        this->screen = a;
        this->nazwa = s;
    }
    void Wyswietl() {
        cout << "Model laptopa: " << nazwa << endl;
    }
};

int main()
{
    Screen screen(1200, 1920);
    Laptop laptop(screen, "Acer nitro 5");

    screen.Wyswietl();
    laptop.Wyswietl();
}
