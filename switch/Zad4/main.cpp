#include <iostream>

using namespace std;

int main()
{
    int a, zadanie;
    cout << "Podaj dwie liczby: ";
    cin >> a;
    cout << "Wybierz zadanie (1. euro, 2. dolary): ";
    cin >> zadanie;

    switch (zadanie) {
    case 1:
        cout << "Euro: " << a * 4.50;
        break;
    case 2:
        cout << "Dolary: " << a * 4;
        break;
    default:
        cout << "Nie ma takiego wyboru";
    }

    return 0;
}
