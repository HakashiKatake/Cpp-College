#include <iostream>
using namespace std;

int main() {
    int a,b;
    void swap(int a, int b);
    cout<<"Enter the two number: "<<endl;
    cin>>a>>b;
    cout<<"Before swap: "<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"After swap: "<<a<<" "<<b<<endl;
}

void swap(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp; 
    cout<<"\n Swap: "<<x<<" "<<y<<endl;
}   