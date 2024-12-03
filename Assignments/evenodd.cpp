//check even or odd

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if (num%2==0){
        cout<<"Your given number "<<num<<" is even"<<endl;
    } else {
        cout<<"Your given number "<<num<<" is odd"<<endl;
    }
}