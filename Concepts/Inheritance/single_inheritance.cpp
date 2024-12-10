#include <iostream> 
using namespace std;

class stream {
    string sname;
    string department;

    public:
    void setStream(string s, string d)
    {

        sname = s;
        department = d;
    }

    void getStream()
    {
        cout << "Stream: " << sname << endl;
        cout << "Department: " << department << endl;
    }

};

class student:public stream {
    int roll;
    string sname;
    public:
    void setdata(int r, string n) {
        roll = r;
        sname = n;
    }
    void getdata() {
        cout << "Roll: " << roll << endl;
        cout << "Name: " << sname << endl;
    }
};

int main() {
    student s1;
    s1.setStream("Btech", "CSE");
    s1.setdata(1, "Saurabh");
    s1.getStream();
    s1.getdata();
    return 0;
}