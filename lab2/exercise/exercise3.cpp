#include <iostream>
using namespace std;

int main()
{
    int arr[10][10],row,col,i,j;

    cout<<"enter the number of rows for the matrix : ";cin>>row;
    cout<<"enter the number of cols for the matrix : ";cin>>col;

    if(row == col)
    {
        cout<<"\ngiven matrix is a squere matrix !!";
    }
    else
    {
        cout<<"\ngiven matrix is not a squere matrix !!!";
    }
    return 0;
}
