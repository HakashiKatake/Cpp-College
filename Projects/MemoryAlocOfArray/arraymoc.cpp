//create an array of 5 int allocate the memory and display the array and delete the array

#include <iostream>
using namespace std;

int main() {
    int *ptr;
    ptr = new int[5];
    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1;
    }
    for (int i = 0; i < 5; i++) {
        cout << ptr[i] << " ";
    }
    delete[] ptr;
    return 0; 
}