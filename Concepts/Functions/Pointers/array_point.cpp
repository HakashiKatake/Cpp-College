#include <iostream>
using namespace std;

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int *p;
    p = &a[0];
    for (int i = 0; i < 5; i++)
    {
        cout <<"\n Address of a[" << i << "] is: " << p << " And Value is: " << *p << endl;
        p++;
    }
    return 0;
}