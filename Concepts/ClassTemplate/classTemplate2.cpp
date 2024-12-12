#include <iostream>
#include <string>

using namespace std;

template<class T1, class T2>

void display(T1 a, T2 b) {
    cout<<a<<" "<<b<<endl;
}

int main() {
    display(1, "Hello");
    display(12, "Yo");
    return 0;
}