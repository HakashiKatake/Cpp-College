//ifelse statement

//syntax
//if-else statement

////if (condition 1) {
// code to be executed if both conditions are true
// } else {
// code to be executed if both conditions are false
// }

#include <iostream>
using namespace std;    

int main() {
    int number = 10;
    cout << "Enter a number: ";
    cin >> number;
    if (number > 0) {
        cout << "The number is positive." << endl;
    } else {
        cout << "The number is negative." << endl;
    }
    return 0;
}
