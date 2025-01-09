#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //odczytywanie bez spacji
    /*
    int a,b;
    ifstream odczyt("ala ma kota.txt");
    if(odczyt.is_open()){
        char znak;
        while(odczyt>>znak){
            cout<<znak;
        }
    }else{
    cout<<"Nie udalo sie zapisac pliku!";
    }
    */

    //uwzglednia spacje(wyraz po wyrazie)
    /*
    int a,b;
    ifstream odczyt("ala ma kota.txt");
    if(odczyt.is_open()){
        char wyraz[100];
        while(odczyt>>wyraz){
            cout<<wyraz<<" ";
        }
    }else{
    cout<<"Nie udalo sie zapisac pliku!";
    }
    */

    //wyraz po wyrazie
    /*
    int a,b;
    ifstream odczyt("ala ma kota.txt");
    if(odczyt.is_open()){
        char wyraz[1000];
        while(odczyt.getline(wyraz,1000)){
            cout<<wyraz<<endl;
        }
    }else{
    cout<<"Nie udalo sie zapisac pliku!";
    }
    */



    return 0;
}
