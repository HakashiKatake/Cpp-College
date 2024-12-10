#include <iostream> 
using namespace std;

class stream {
    protected:
    string stname;
    string dept;
    
};

class student:public stream {
    int roll;
    string sname;
    public:
    void setStudent(string st, string d,int r, string n) {
        roll = r;
        sname = n;
        stname = st;
        dept = d;
    }
    void getdata() {
        cout << "Stream: " << stname << endl;
        cout << "Department: " << dept << endl;
        cout << "Roll: " << roll << endl;
        cout << "Name: " << sname << endl;
        
    }
};

int main() {
    student s1;
    s1.setStudent("Btech", "CSE", 1, "Saurabh");
    s1.getdata();
    return 0;
}