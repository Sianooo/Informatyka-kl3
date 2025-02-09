#include <iostream>

using namespace std;

int main()
{
    int liczba;
    cout<<"Podaj liczbe";
    cin>>liczba;

    for(int i=0;i<=liczba;i++){
        if(i%2==0){
        cout<<i<<endl;
        }
    }

    return 0;
}
