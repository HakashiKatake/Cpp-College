//check wheater it is leap year or not

#include <iostream>
using namespace std;

int main(){
    int year;
    cout<<"Enter a year: ";
    cin>>year;
    if (year%4==0){
        cout<<"The year is "<<year<<" and it is leap year"<<endl;
    } else {
        cout<<"The year is "<<year<<" and it is not leap year"<<endl;
    }
    return 0;
}