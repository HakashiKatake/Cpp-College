//synatax

//try {
// code that might throw an exception
//}
//catch (exception_type1 e1) {
// code to handle exception_type1
//}
//catch (exception_type2 e2) {
// code to handle exception_type2
//}
//catch (...) {
// code to handle all other exceptions
//}

#include <iostream>
using namespace std;

int main(){
    int a,b,c;

    cout<<"Enter Numerator & denomerator for division: \n";
    cin>>a>>b;

    try{
        if(b==0)
        {
            throw b;
        }
        else 
        {
            c = a/b;
            cout<<"Division: "<<c<<endl;
        }
    }
    catch(int e){
        cout<<"Exception caught: "<<e<<endl;
    }
    return 0;

    
}