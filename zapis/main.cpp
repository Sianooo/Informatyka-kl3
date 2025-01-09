#include <iostream>
#include <fstream>
using namespace std;

string imie,nazwisko, nr_nip;
int main()
{

    //ZAPIS DO PLIKU

    cout << "Podaj imie :"; cin>>imie;
    cout << "Podaj nazwisko :"; cin>>nazwisko;
    cout << "Podaj numer NIP(10 cyfr) :"; cin>> nr_nip;

    fstream zapis;
    zapis.open("wynik.txt",ios::app);

    if(nr_nip.length()!=10){
        cout<<"Za krotki numer NIP";
    }

    if(zapis.is_open()){
    zapis<<imie<<endl;
    zapis<<nazwisko<<endl;
    zapis<<nr_nip<<endl;

    zapis<<"--------------"<<endl;
    }


    //ODCZYT Z PLIKU
    /*
    int a ,b;
    ifstream odczyt("odczyt.txt");
    odczyt>>a>>b;


    cout<<"Mnozenie wszysticgh liczb; "<<a*b<<endl;
    cout<<"Dzielenie wszysticgh liczb: "<<a/b<<endl;
    cout<<"Suma wszytskich liczb wynosi: "<<a+b;
    odczyt.close();
    */

    return 0;
}
