//sum of three number

#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"Enter three numbers: "<<endl;
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<"Maximum number is: "<<a<<endl;
    } else if (b>a && b>c){
        cout<<"Maximum number is: "<<b<<endl;
    } else {
        cout<<"Maximum number is: "<<c<<endl;
    }
    return 0;

    //even odd
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if (num%2==0){
        cout<<"Your given number "<<num<<" is even"<<endl;
    } else {
        cout<<"Your given number "<<num<<" is odd"<<endl;
    }

    //leap year
    int year;
    cout<<"Enter a year: ";
    cin>>year;
    if (year%4==0){
        cout<<"The year is "<<year<<" and it is leap year"<<endl;
    } else {
        cout<<"The year is "<<year<<" and it is not leap year"<<endl;
    }
    return 0;

    //Write a program to input month number and print number of days in that month.
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

    //number positive or negative
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if (num>0){
        cout<<"The number is positive"<<endl;
    } else if (num<0){
        cout<<"The number is negative"<<endl;
    } else {
        cout<<"The number is zero"<<endl;
    }
    return 0;


    //basic salary
    int basic;
    cout<<"Enter the basic salary: ";
    cin>>basic;
    if(basic<=10000){
        cout<<"HRA: "<<basic*0.2<<endl;
        cout<<"DA: "<<basic*0.8<<endl;
    }
    else if(basic<=20000){
        cout<<"HRA: "<<basic*0.25<<endl;
        cout<<"DA: "<<basic*0.9<<endl;
    }
    else{
        cout<<"HRA: "<<basic*0.3<<endl;
        cout<<"DA: "<<basic*0.95<<endl;
    }
    return 0;
    

}

