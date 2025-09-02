#include <iostream>
using namespace std;

int main()
{
    int row,col;
    cout<<"enter the number of rows for the matrices : ";cin>>row;
    cout<<"enter the number of cols for the matrices : ";cin>>col;

    int ar1[row][col],ar2[row][col],i,j,ar3[row][col];


    cout<<"\nINPUT FOR ARRAY A : \n";
    for(i = 0;i < row;i++)
    {
        for(j = 0;j < col;j++)
        {
            cout<<"enter for index "<<i<<j<<" : ";cin>>ar1[i][j];
        }
        cout<<endl;
    }

    cout<<"\nINPUT FOR ARRAY B : \n";
    for(i = 0;i < row;i++)
    {
        for(j = 0;j < col;j++)
        {
            cout<<"enter for index "<<i<<j<<" : ";cin>>ar2[i][j];
        }
        cout<<endl;
    }

    cout<<"\nFIRST MATRIX : \n";
    for(i = 0;i < row;i++)
    {
        for(j = 0;j < col;j++)
        {
            cout<<ar1[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\nSECOND MATRIX : \n";
    for(i = 0;i < row;i++)
    {
        for(j = 0;j < col;j++)
        {
            cout<<ar2[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\nADDITION MATRIX C : \n";
    for(i = 0;i < row;i++)
    {
        for(j = 0;j < col;j++)
        {
            ar3[i][j] = ar1[i][j] + ar2[i][j];
            cout<<ar3[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
