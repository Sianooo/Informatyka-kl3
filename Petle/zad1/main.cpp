#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    for(int i=1;i<=20;i++){
        cout<<i<<endl;
        Sleep(1000); //wyswietlanie co sekunde
        system("cls"); //usuwa co sekunde poprzednia liczbe
    }
    return 0;
}
