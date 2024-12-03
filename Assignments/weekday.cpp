//Write a program to input week number and print week day.

#include <iostream>
using namespace std;
int main(){
    int week;
    cout<<"Enter week numer: ";
    cin>>week;
    switch (week)
    {
    case 1:
        cout<<"Monday"<<endl;
        break;
    case 2:
        cout<<"Tuesday"<<endl;
        break;
    case 3:
        cout<<"Wednesday"<<endl;
        break;
    case 4:
        cout<<"Thursday"<<endl;
        break;
    case 5:
        cout<<"Friday"<<endl;
        break;
    case 6:
        cout<<"Saturday"<<endl;
        break;
    case 7:
        cout<<"Sunday"<<endl;
        break;
    default:
        cout<<"Invalid week number"<<endl;
        break;
    }
    return 0;
}