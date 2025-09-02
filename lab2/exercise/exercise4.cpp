#include <iostream>
using namespace std;

int main()
{
    int arr[10][10],row,col,i,j,id = 0;

    cout<<"enter the number of rows in the matrix : ";cin>>row;
    cout<<"enter the number of cols in the matrix : ";cin>>col;

    if(row != col)
    {
        cout<<"given matrix is not a squere matrix, therefore it cannot be an identity matrix !!";
        goto end;
    }

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
        if(arr[i][i] == 1)
        {
            id++;
        }
    }

    if(id != 0)
    {
        cout<<"given matrix is an identity matrix !!";
    }
    else
    {
        cout<<"given matrix is not an identity matrix !!";
    }

    end:
    return 0;
}
