#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {0},i,j;

    cout<<"NULL MATRIX : \n";
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
