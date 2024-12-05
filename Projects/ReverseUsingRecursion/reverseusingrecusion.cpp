//reverse of a number using recursion

#include <iostream>
using namespace std;

int main() {
    int reverse(int num);
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"The reverse of "<<num<<" is: ";
    reverse(num);
    return 0;
}


int reverse(int num){
    if (num>0){
        cout<<num%10;
        reverse(num/10);
    }
}
