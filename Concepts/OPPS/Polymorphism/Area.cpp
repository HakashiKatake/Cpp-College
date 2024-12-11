
#include <iostream>
using namespace std;

int area(int a, int b) {
    return (0.5 * a*b);
}

int area(int a, int b, int c) {
    return (a*b*c)/2;
}


int main() {
    
    cout<<"Area of two triangle "<<area(8,10)<<endl;
    cout<<"Area of three triangle "<<area(8,10,5)<<endl;


}

