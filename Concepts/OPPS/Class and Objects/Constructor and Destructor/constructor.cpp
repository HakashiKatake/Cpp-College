#include <iostream>
using namespace std;

class student 
{
    private:
        int roll;
        string sname;

    public:
        student() {
            cout<<"Enter the roll no & name";
            cin>>roll>>sname;
        }

        void getdata() {
            cout << "Roll: " << roll << endl;
            cout << "Name: " << sname << endl;
        }

};

int main() {
    student s1;
    s1.getdata();
    return 0;
}