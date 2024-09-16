#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float wynik =34.0*sqrt(34.0)/(cbrt(125)+34.0-0.5*(sqrt(12.0-0.5)));
    float x=round(wynik*1000)/1000;
    cout << "Wynik: "<<wynik<<"  "<<x ;
    return 0;
}
