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
     
    student s[3];
    cout<<"\n-------Student Details-------\n"<<endl;
   
    for(int i=0;i<3;i++)
    {
        s[i].setdata();
        s[i].getdata();
        cout<<"\n===============================\n"<<endl;
        
    }
    return 0;
}