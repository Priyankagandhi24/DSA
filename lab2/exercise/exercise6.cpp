#include <iostream>
using namespace std;

int main()
{
    int arr[10][10],row,col,i,j;

    cout<<"enter the number of rows in the matrix : ";cin>>row;
    cout<<"enter the number of cols in the matrix : ";cin>>col;

    for(i = 0;i < row;i++)
    {
        for(j = 0;j < col;j++)
        {
            cout<<"enter for index "<<i<<j<<" : ";cin>>arr[i][j];
        }
        cout<<endl;
    }

    for(i = 0;i < row;i++)
    {
        for(j = 0;j < col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
