#include <iostream>
using namespace std;

int main() {
    void sum(int, int);
    sum(10, 20);
}

void sum(int a, int b) {
    cout << "The sum is: " << a + b << endl;
}