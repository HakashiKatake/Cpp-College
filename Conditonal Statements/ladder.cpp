//lader statement
#include <iostream>
using namespace std;
int main() {
    string ans;
    cout<<"What is your current mood?"<<endl;
    cin>>ans;
    if (ans=="happy" || ans=="Happy")
    {
        cout<<"Keep smiling :)"<<endl;
    } else if (ans=="sad" || ans=="Sad")
    {
        cout<<"Aww why are you sad? :("<<endl;
    } else if (ans=="angry" || ans=="Angry")
    {
        cout<<"Don't be angry"<<endl;
    } else {
        cout<<"Please enter a valid mood"<<endl;
    }
}