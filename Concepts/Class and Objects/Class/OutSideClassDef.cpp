//Name_of_the_class :: function_name

//syntax     
//out of the class syntaxx

//syntax
//class_name :: function_name


#include <iostream>
using namespace std;

class student
{
    private:
        int roll;
        string sname;

    public:
        void setdata();
        void getdata(); 
        
};

void student :: setdata()
{
    cout << "Enter your roll no and name: " << endl;
    cin >> roll >> sname;
}

void student :: getdata()
{
    cout << "Roll: " << roll << endl;
    cout << "Name: " << sname << endl;
}

int main()
{
    student s1;
    s1.setdata();
    s1.getdata();
    return 0;
}

