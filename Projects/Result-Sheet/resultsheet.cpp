// create result sheet for student using student class having data roll, name, sub1, sub2, sub3  and total

//create 5 student objects using array


#include <iostream>
using namespace std;


class student
{
    public:
    int roll;
    string name;
    int sub1;
    int sub2;
    int sub3;
    int total;

};

int main()
{
    student s[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter roll no: ";
        cin >> s[i].roll;
        cout << "Enter name: ";
        cin >> s[i].name;
        cout << "Enter marks in sub1: ";
        cin >> s[i].sub1;
        cout << "Enter marks in sub2: ";
        cin >> s[i].sub2;
        cout << "Enter marks in sub3: ";
        cin >> s[i].sub3;
        s[i].total = s[i].sub1 + s[i].sub2 + s[i].sub3;
        cout << "=====================================" << endl;

    }

    for (int i = 0; i < 5; i++)
    {
        cout << "Roll no: " << s[i].roll << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Marks in sub1: " << s[i].sub1 << endl;
        cout << "Marks in sub2: " << s[i].sub2 << endl;
        cout << "Marks in sub3: " << s[i].sub3 << endl;
        cout << "Total: " << s[i].total << endl;
        cout << "=====================================" << endl;
       
}