#include <iostream>

using namespace std;

int main()
{
    float c;
    cout << "Wprowadz temperature w C: ";
    cin >> c;
    cout << "Fahrenheit: " << (c * 1.8) + 32 << endl;
    cout << "Kelvin: " << c + 273.15 << endl;
    return 0;
}

