#include <iostream>
using namespace std;

int main()
{
    try
    {
        int numerator = 10;
        int denominator = 0;
        int res;

        if (denominator == 0){
            throw runtime_error("Division by zero");
        }

        res = numerator / denominator;
        cout << "Result: " << res << endl;


    }

    catch (const exception& e)
    {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}