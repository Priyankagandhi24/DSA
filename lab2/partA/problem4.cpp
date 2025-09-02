#include <iostream>
using namespace std;

int main()
{
    int mat[2][2],i,j,det;

    cout<<"\ninput elements for the matrix : \n";
    for(i = 0;i < 2;i++)
    {
        for(j = 0;j < 2;j++)
        {
            cout<<"enter for element at "<<i<<j<<" : ";cin>>mat[i][j];
        }
        cout<<endl;
    }

    cout<<"\nORIGINAL ARRAY : \n";
    for(i = 0;i < 2;i++)
    {
        for(j = 0;j < 2;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    det = mat[0][0]*mat[1][1] - mat[0][1]*mat[1][0];
    cout<<"\ndeterminant = "<<det;
    return 0;
}
