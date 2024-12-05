#include <iostream>
using namespace std;

int main() {
    int n, f=1;
    int fact(int i);
    cout << "Enter a number: ";
    cin >> n;
    f = fact(n);
    cout << "Factorial of " << n << " is: " << f;
    return 0;
}

int fact(int x) {
    if (x == 0) {
        return 1;
    } else {
        return x * fact(x - 1);
    }
}