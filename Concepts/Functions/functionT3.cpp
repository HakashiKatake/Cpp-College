#include <iostream>
using namespace std;

int main() {
    int sum();
    int c=sum();
    cout<<"The sum is: "<<c<<endl;
}

int sum() {
    int a, b,c;
    cout<<"Enter the two number: "<<endl;
    cin>>a>>b;
    c=a+b;
    return c;
}
