#include <iostream>
using namespace std;

int main() {
    int liczba;
    cout << "Podaj liczbe do sprawdzenia" << endl;
    cin >> liczba;

    if (liczba >= 10) {
        cout << "Liczba " << liczba << " jest >= 10" << endl;
    }
    if (liczba >= 50) {
        cout << "Liczba " << liczba << " jest >= 50" << endl;
    }
    if (liczba <= 100) {
        cout << "Liczba " << liczba << " jest <= 100" << endl;
    }

    return 0;
}
