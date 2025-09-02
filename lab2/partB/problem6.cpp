#include <iostream>
using namespace std;

int main()
{
    int mat[2][3][4],i,j,k;

    cout<<"input elements for the 3D matrix : \n";
    for(i = 0;i < 2;i++)
    {
        for(j = 0;j < 3;j++)
        {
            for(k = 0;k < 4;k++)
            {
                cout<<"enter element for "<<i<<j<<k<<" : ";cin>>mat[i][j][k];
            }
        }
        cout<<endl;
    }

    cout<<"\n3D matrix : \n";
    for(i = 0;i < 2;i++)
    {
        for(j = 0;j < 3;j++)
        {
            for(k = 0;k < 4;k++)
            {
                cout<<mat[i][j][k]<<"\t";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    cout<<"\n3D matrix with layers : \n";
    for(i = 0;i < 2;i++)
    {
        cout<<"2D matrix "<<i+1<<endl;
        for(j = 0;j < 3;j++)
        {
            for(k = 0;k < 4;k++)
            {
                cout<<mat[i][j][k]<<"\t";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
