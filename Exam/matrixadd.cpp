
#include <iostream>
using namespace std;
int main()
{
    int a[3][3] = {{6, 3, 2}, {2, 6, 8}, {1, 3, 3}};
    int b[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int c[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    cout<<"The addition of the matrix:"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {   
            
            cout << c[i][j] << " ";
            
        }
        
        cout << endl;
        
    }
    return 0;
}