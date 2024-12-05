#include <iostream>
using namespace std;

int main() { 
    int* p = NULL;
    p = new int;
    if(!p) {  
        cout << "Memory allocation failed" << endl;
        return 1;
    } else {
        *p = 29;
        cout<<"Value of p: "<<*p<<endl;
    }

    delete p;
    cout<<"Value of p: "<<*p<<endl;
    return 0;
}