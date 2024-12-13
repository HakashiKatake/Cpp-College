//write a program to accept an array as an function template and print it

#include <iostream>
using namespace std;    

template <class T>
void print(T arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[5] = {1, 2, 3, 4, 5};
    print(arr1, 5);
    double arr2[3] = {1.1, 2.2, 3.3};
    print(arr2, 3);
    return 0;
}