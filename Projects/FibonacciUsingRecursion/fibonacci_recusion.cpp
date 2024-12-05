//fibonacci n terms with recursion

#include <iostream>
using namespace std;



int fibonacci(int n) {
    if (n == 1) {
        return 1;
    } else if(n == 2) {
        return 1;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Fibonacci series: ";
    for (int i = 1; i <= n; i++) {
        cout << fibonacci(i) << " ";
    }
    return 0;
}