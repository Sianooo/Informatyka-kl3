#include <iostream>
#include <fstream>
using namespace std;

string imie,nazwisko;
int nr_tel;
int main()
{

    //ZAPIS DO PLIKU
    /*
    cout << "Podaj imie :"; cin>>imie;
    cout << "Podaj nazwisko :"; cin>>nazwisko;
    cout << "Podaj numer telefonu :"; cin>> nr_tel;

    fstream zapis;
    zapis.open("wynik.txt",ios::app);

    zapis<<imie<<endl;
    zapis<<nazwisko<<endl;
    zapis<<nr_tel<<endl;
    */

    //ODCZYT Z PLIKU
    int a ,b;
    ifstream odczyt("odczyt.txt");
    odczyt>>a>>b;


    cout<<"Mnozenie wszysticgh liczb; "<<a*b<<endl;
    cout<<"Dzielenie wszysticgh liczb: "<<a/b<<endl;
    cout<<"Suma wszytskich liczb wynosi: "<<a+b;
    odczyt.close();

    return 0;
}
