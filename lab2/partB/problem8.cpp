#include <iostream>
using namespace std;

int main()
{
    int i,j,k,n;
    cout<<"enter the size of 3D matrix : ";cin>>n;
    int mat[n][n][n],sum = 0;

    for(i = 0;i < n;i++)
    {
        for(j = 0;j < n;j++)
        {
            for(k = 0;k < n;k++)
            {
                cout<<"enter element for "<<i<<j<<k<<" : ";cin>>mat[i][j][k];
                sum = sum + mat[i][j][k];
            }
        }
        cout<<endl;
    }

    cout<<"\n3D matrix : \n";
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < n;j++)
        {
            for(k = 0;k < n;k++)
            {
                cout<<mat[i][j][k]<<"\t";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    cout<<"\nthe sum of all elements present in the 3D matrix is : "<<sum;
    return 0;
}
