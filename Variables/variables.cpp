#include <iostream>

using namespace std;

int main() {
    int roll;
    string sname;
    float fees;
    long contact;

    cout << "Enter your roll no, name, contact no and Fees :" << endl;
    cin >> roll >> sname >> contact >> fees;

    cout << "==============================================" << endl;
    cout << "\t Student's Details :" << endl;
    cout << "==============================================" << endl;
    cout << "Roll: " << roll << endl;
    cout << "Name: " << sname << endl;
    cout << "Fees: " << fees << endl;
    cout << "Fees: " << contact << endl;
    cout << "==============================================" << endl;
    return 0;
}
