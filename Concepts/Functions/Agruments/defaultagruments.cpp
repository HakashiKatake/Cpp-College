#include <iostream>
using namespace std;

int main() {
    void SI(float p, float r, int n=1);
    SI(1000, 8.5,2);
    SI(1000, 8.5);
}

void SI(float p, float r, int n) {
    cout << "The simple interest is: " << (p * r * n) / 100 << endl;
}