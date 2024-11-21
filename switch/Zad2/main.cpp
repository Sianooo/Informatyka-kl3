#include <iostream>

using namespace std;

int main()
{
    int points;
    cin>>points;
    switch(points){
    case 0 ... 10:
        cout<<"jedynka";
        break;
    case 11 ... 13:
        cout<<"dwojka";
        break;
    case 14 ... 16:
        cout<<"trojka";
        break;
    case 17 ... 18:
        cout<<"czworka";
        break;
    case 19:
        cout<<"piatka";
        break;
    default:
        cout<<"Nie ma takiego przedzialu";
    }
    return 0;
}
