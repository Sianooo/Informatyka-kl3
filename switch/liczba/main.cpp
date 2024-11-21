#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Wprowadz a :";
    cin>>a;

    if(a%3==0&&a%5==0){
        cout<<"Liczba jest podzielna przez 3 i 5";
    }else{
        cout<<"Liczba nie jest podzielna przez 3 i 5";
    }
    if(a%3==0){
        cout<<"Liczba jest podzielna przez 3";
    }else{
    cout<<"Liczba jest podzielna przez 3";
    }



    return 0;
}
