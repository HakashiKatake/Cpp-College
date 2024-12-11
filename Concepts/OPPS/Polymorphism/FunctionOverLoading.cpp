//to achieve function overloading function should follow the following ceriteria 
//mutiple function should carry same name
//they should have different numbers of agruments or different types of arguments
// or sequence of agruments



#include <iostream> 
using namespace std;

int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

float add(float a, float b) {
    return a + b;
}

int main() {
    
    cout<<"Sum of 2 int: "<<add(8,10)<<endl;
    cout<<"Sum of 3 int: "<<add(8,10,5)<<endl;
    cout<<"Sum of 2 float "<<add(8.5f,10.6f)<<endl;

}
