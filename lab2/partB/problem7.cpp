#include <iostream>
using namespace std;

int main()
{
    int i,j,k,n,p,q,r;
    cout<<"enter the size of 3D matrix : ";cin>>n;
    int mat[n][n][n],el,flag = 0;

    cout<<"input elements for the 3D matrix : \n";cin>>el;
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < n;j++)
        {
            for(k = 0;k < n;k++)
            {
                cout<<"enter element for "<<i<<j<<k<<" : ";cin>>mat[i][j][k];
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
                if(mat[i][j][k] == el)
                {
                    flag++;
                    p = i;
                    q = j;
                    r = k;
                }
            }
            cout<<endl;
        }
        cout<<endl;
    }

    if(flag != 0)
    {
        cout<<"\nelement "<<el<<" is found in this matrix !";
        cout<<"\nat layer: "<<p<<"\nrow: "<<q<<"\ncolumn: "<<r;
    }
    else{
        cout<<"\nelement "<<el<<" is not to be found in this matrix !!";
    }

    return 0;
}
