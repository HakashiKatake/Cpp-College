//Write a program to input month number and print number of days in that month.

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a month number: ";
    cin>>num;
    if (num==1 || num==3 || num==5 || num==7 || num==8 || num==10 || num==12){
        cout<<"The month has 31 days"<<endl;
    } else if (num==4 || num==6 || num==9 || num==11){
        cout<<"The month has 30 days"<<endl;
    } else {
        cout<<"The month has 28 days"<<endl;
    }
    return 0;
}