#include <iostream>
using namespace std;

class employee{
    public:
    int id;
    string name;
    float salary;

    void setData(int a, string b, float c){
        id = a;
        name = b;
        salary = c;
    }
    void getData(){
        cout<<"The id of this employee is "<<id<<endl;
        cout<<"The name of this employee is "<<name<<endl;
        cout<<"The salary of this employee is "<<salary<<endl;
        cout<<"======================================"<<endl;
    }
};

int main(){
    employee e1;
    e1.setData(1, "Saurabh", 50000);
    e1.getData();
    employee e2;
    e2.setData(2, "Yash", 60000);
    e2.getData();
    return 0;
}