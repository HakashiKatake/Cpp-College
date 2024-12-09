//types of constructor 

//1. default constructor
//2. parameterized constructor
//3. copy constructor

#include <iostream>
using namespace std;    

class student {
    public:
        int roll;
        string sname;
        student() {
            cout<<"Default constructor called";
        }
        student(int r, string n) {
            roll = r;
            sname = n;
        }
        student(student &s) {
            roll = s.roll;
            sname = s.sname;
        }

};