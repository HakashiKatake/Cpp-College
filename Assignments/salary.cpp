//Write a program to input basic salary of an employee and calculate its Gross salary according to following:
//Basic Salary <= 10000 : HRA = 20%, DA = 80%
//Basic Salary <= 20000 : HRA = 25%, DA = 90%
//Basic Salary > 20000 : HRA = 30%, DA = 95%


#include <iostream>
using namespace std;
int main(){
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