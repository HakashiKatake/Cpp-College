//mark checker

#include <iostream>
using namespace std;

int main() {
    int mark;
    cout<<"Enter your mark: ";
    cin>>mark;
    if (mark==100){
        cout<<"You got full score"<<endl;
    } else if (mark>=80 && mark<100){
        cout<<"You got A grade"<<endl;
    } else if (mark>=60 && mark<80){
        cout<<"You got B grade"<<endl;
    } else if (mark>=40 && mark<60){
        cout<<"You got C grade"<<endl;
    } else {
        cout<<"You failed"<<endl;
    } 
    return 0;
}