#include <iostream>
using namespace std;

int main() {
    int a[] = {10,20,30,40,50};
    void display(int n[], int size);
    display(a,5);
}

void display(int n[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout << "The value of n[" << i << "] is: " << n[i]<< endl;
    }
}