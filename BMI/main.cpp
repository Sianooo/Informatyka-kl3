#include <iostream>

using namespace std;

int main()
{
    float wzrost, waga, BMI;
    cout << "Podaj wzrost w metrach: " << endl;
    cin >> wzrost;
    cout << "Podaj wage w kilogramach: " << endl;
    cin >> waga;

    BMI = waga / (wzrost * wzrost);
    cout << "Twoje BMI wynosi: " << BMI << endl;

    return 0;
}
