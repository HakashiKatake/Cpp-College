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
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number > 0) {
        cout << "The number is positive." << endl;
    } else {
        cout << "The number is negative." << endl;
    }
    return 0;
}

int test(){
    int a,b;
    cout<<"Enter the two number"<<a<<b<<endl;
    cin>>a>>b;
    if(a>b){
        cout<<"a is greater than b"<<endl;
    }
    else{
        cout<<"b is greater than a"<<endl;
    }
    return 0;

}

