#include <iostream>
using namespace std;

int main() {
    int sum(int a, int b);
    int a,b;
    cout<<"Enter the two number: "<<endl;
    cin>>a>>b;
    cout<<"The sum is: "<<sum(a,b)<<endl;
}

int sum(int a, int b) {
    int c;
    c = a + b;
    return c;
}