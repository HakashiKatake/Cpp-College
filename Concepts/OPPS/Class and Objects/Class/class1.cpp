#include <iostream>
using namespace std;

class student
{
    private:
        int roll;
        string sname;

    public:
        void setdata() 
        {
            cout << "Enter your roll no and name: " << endl;
            cin >> roll >> sname;
        }

        void getdata() 
        {

            cout << "Roll: " << roll << endl;
            cout << "Name: " << sname << endl;
          
        }
};

int main() 
{   
     
    student s1,s2;
    cout<<"\n-------Student Details-------\n"<<endl;
    s1.setdata();
    s1.getdata();

   
    s2.setdata();
    s2.getdata();
    return 0;
}