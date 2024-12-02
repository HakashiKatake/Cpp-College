//switch statement
//synatax
//switch (expression) {

//case value1:
// code to be executed if expression is equal to value1
// break;
//case value2:
// code to be executed if expression is equal to value2
// break;
//default:
// code to be executed if expression is not equal to any of the above values
// break;
//}


#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter a number: ";
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "You selected option 1." << endl;
            break;
        case 2:
            cout << "You selected option 2." << endl;
            break;
        case 3:
            cout << "You selected option 3." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
    }
    return 0;
}

