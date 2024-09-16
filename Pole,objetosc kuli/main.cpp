#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float pi = 3.14;
    float r, pole, objetosc;

    cout << "Podaj promien kuli: ";
    cin >> r;

    // Obliczanie pola powierzchni kuli: 4 * pi * r^2
    pole = 4 * pi * pow(r, 2);

    // Obliczanie objetosci kuli: (4/3) * pi * r^3
    objetosc = (4.0 / 3.0) * pi * pow(r, 3);

    cout << "Pole powierzchni kuli: " << pole << endl;
    cout << "Objetosc kuli: " << objetosc << endl;

    return 0;
}
