#include <iostream>
#include <string>
using namespace std;

class student {

    public: 
        int rollno, sub1, sub2, sub3, total;
        string name;
        void setSub() {
            cout<<"Enter your name: "<<endl;
            cin>>name;
            cout<<"Enter your rollno: "<<endl;
            cin>>rollno;
            cout<<"Enter subject 1: "<<endl;
            cin>>sub1;
            cout<<"Enter subject 2: "<<endl;
            cin>>sub2;
            cout<<"Enter subject 3: "<<endl;
            cin>>sub3;
            total = (sub1+sub2+sub3)/3;
        }

        void getSub() {
            cout<<"Your ResultSheet for the following exam";
            cout<<"================================"<<endl;
            cout<<"RollNo  Name  S1  S2  S3  Total"<<endl;
            cout<<rollno << "   "<< name << "   "<< sub1 << "   "<< sub2 << "   "<< sub3 << "   "<< total<< endl;
            cout<<"================================"<<endl;
            
        }
    
};

int main () {
    student stud;
    stud.setSub();
    stud.getSub();
    return 0;
}