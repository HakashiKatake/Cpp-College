//nested if statement

//syntax
//nested if

////if (condition 1) {
// code to be executed if both conditions are true
// } elseif (condition 2) {
// code to be executed if both conditions are false
// } else {
// code to be executed if both conditions are false}


#include <iostream>
using namespace std;

int main() {
    int number = 10;
    cout << "Enter a number: ";
    cin >> number;
    if (number > 0) {
        cout << "The number is positive." << endl;
    } else if (number < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }
    return 0;
}
