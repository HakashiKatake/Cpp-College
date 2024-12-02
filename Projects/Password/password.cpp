//password checker

#include<iostream>
using namespace std;
int main(){
    string password, username;
    cout<<"Enter your user name: ";
    cin>>username;
    cout<<"Enter the password"<<endl;
    cin>>password;
    if(password=="1234" || password=="123" && username=="saurabh"){
        cout<<"Password is correct"<<endl;
        cout<<"Login Success"<<endl;
    }
    else{
        cout<<"Password is incorrect"<<endl;
        cout<<"Login Failed"<<endl;
    }
    return 0;
}