//multiple inheritance
#include <iostream>
using namespace std;
class A {
    private:
    int a;
    public:
    void get_a(int val_a) {
        a = val_a;
    }
    void put_a(){
        cout<<"value of a: "<<a<<endl;
    }
};

class B {
    private:
    int b;
    public:
    void get_b(int val_b) {
        b = val_b;
    }
    void put_b(){
        cout<<"value of b: "<<b<<endl;
    }
};

class C {
    private:
    int c;
    public:
    void get_c(int val_c) {
        c = val_c;
    }
    void put_c(){
        cout<<"value of a: "<<c<<endl;
    }
};

class final:public A, public B, public C {
    public:
    void printValues(){
        put_a();
        put_b();
        put_c();
    }
};

int main(){
    final obj;
    obj.get_a(10);
    obj.get_b(20);
    obj.get_c(30);
    obj.printValues();
}
