#include <iostream>
using namespace std;

int main()
{
    int arr[4][4] = {0},i,j;

    for(i = 0;i < 4;i++)
    {
        arr[i][i] = 1;
    }

    cout<<"IDENTITY MATRIX : \n";
    for(i = 0;i < 4;i++)
    {
        for(j = 0;j < 4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
