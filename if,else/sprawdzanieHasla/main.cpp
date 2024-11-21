#include <iostream>

using namespace std;

int main()
{
    cout << "Podaj login" << endl;
    string login;
    cin>>login;
    cout<<"Podaj haslo"<<endl;
    string haslo;
    cin>>haslo;

    cout<<((login=="admin"&&haslo=="123")?"Zalogowano" : "Nie zalogowano");


    return 0;
}
