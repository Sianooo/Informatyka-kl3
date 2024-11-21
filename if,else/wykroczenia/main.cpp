#include <iostream>

using namespace std;

int main()
{
    float a;
    cout << "Podaj liczbe w km/h" << endl;
    cin>>a;

    if(a<=10){
        cout<<"100";
    }else if(a>10 && a<=30){
        cout<<"200";
    }else{
        cout<<"400";
    }
    return 0;
}
