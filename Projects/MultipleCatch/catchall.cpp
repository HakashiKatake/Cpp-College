//factorial in multiple catch

#include <iostream>
using namespace std;

int main(){

    try{
        cout<<"Enter the number: ";
        int num;
        cin>>num;
        if (num<0){
            throw num;
        }
        if (num==0){
            throw 0;
        }
        if (num>0){
            int fact=1;
            for (int i=1; i<=num; i++){
                fact=fact*i;
            }
            cout<<"The factorial of "<<num<<" is: "<<fact<<endl;
        }
    }
    catch (...){
        cout<<"caught an expection"<<endl;
    }
   
    return 0;
}