#include <iostream>
using namespace std;

class MyClass {
    int n;

public:
    MyClass() {
        cout<<"Enter the data";
        cin>>n;
        count++;
    }

    void getNumber() {  
        
        cout<<"\n Data: "<<n;
    }

    static int count;

    static void getCount() {
        cout<<"\n Count: "<<count;
    }


};

int MyClass::count = 0;

int main() {
    MyClass obj1, obj2;
    obj1.getNumber();
    obj2.getNumber();
    MyClass::getCount();
    return 0;
}