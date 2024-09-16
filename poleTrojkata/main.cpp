#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a,b,c;
    cout<<"Podaj boki trojkata : "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    float x=((a+b+c)/2);
    cout<<sqrt(x*(x-a)*(x-b)*(x-c))<<endl;

    return 0;
}
