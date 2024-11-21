#include <iostream>

using namespace std;

int main()
{
    int a, b, zadanie;
    cout << "Podaj dwie liczby: ";
    cin >> a >> b;
    cout << "Wybierz zadanie (1. dodawanie, 2. odejmowanie, 3. mnozenie, 4. dzielenie): ";
    cin >> zadanie;

    switch (zadanie) {
    case 1:
        cout << "Wynik: " << a + b;
        break;
    case 2:
        cout << "Wynik: " << a - b;
        break;
    case 3:
        cout << "Wynik: " << a * b;
        break;
    case 4:
        if (b != 0)
            cout << "Wynik: " << a / b;
        else
            cout << "Blad: dzielenie przez zero";
        break;
    default:
        cout << "Nie ma takiego wyboru";
    }

    return 0;
}
