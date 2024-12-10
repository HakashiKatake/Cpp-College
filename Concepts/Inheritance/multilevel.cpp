//multilevel inheritance

//multiple inheritance
#include <iostream>
using namespace std;

class A {
    public:
    int a;
    void getA() {
        cout<<"Enter the value of a: ";
        cin>>a;
    }
};

class B: public A {
    public:
    int b;
    void getB() {
        cout<<"Enter the value of b: ";
        cin>>b;
    }
};

class C: public B {
    public:
    int c;
    void getC() {
        cout<<"Enter the value of c: ";
        cin>>c;
    }
};

int main() {
    C obj;
    obj.getA();
    obj.getB();
    obj.getC();
    cout<<"The value of a is: "<<obj.a<<endl;
    cout<<"The value of b is: "<<obj.b<<endl;
    cout<<"The value of c is: "<<obj.c<<endl;
}



