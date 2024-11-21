#include <iostream>

using namespace std;

int main()
{
    int liczba;
    cout << "Podaj liczbe do sprawdzenia" << endl;
    cin>> liczba;
    if(liczba==0){
        cout<<"Liczba == 0 ";
    }
    if(liczba >0){
        cout<<"Liczba > 0";
    }
    if(liczba <0){
        cout<<"Liczba < 0";
    }


    return 0;
}
