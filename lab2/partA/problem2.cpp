#include <iostream>
using namespace std;

int main()
{
    int m,n,o,p;
    

    cout<<"enter the rows for the first matrix : ";cin>>m;
    cout<<"enter the cols for the first matrix : ";cin>>n;

    cout<<"enter the rows for the second matrix : ";cin>>o;
    cout<<"enter the cols for the second matrix : ";cin>>p;

    if(n == o)
    {
        cout<<"\nmatrix dimensions are same, multiplication is possible !!\n";
        int a[m][n],b[o][p],i,j,k,c[m][p];

        cout<<"\nINPUT FOR FIRST ARRAY : \n";
        for(i = 0;i < m;i++)
        {
            for(j = 0;j < n;j++)
            {
                cout<<"enter for index "<<i<<j<<" : ";cin>>a[i][j];
            }
        }

        cout<<"\nINPUT FOR SECOND ARRAY : \n";
        for(i = 0;i < o;i++)
        {
            for(j = 0;j < p;j++)
            {
                cout<<"enter for index "<<i<<j<<" : ";cin>>b[i][j];
            }
        }

        cout<<"\nFIRST ARRAY : \n";
        for(i = 0;i < m;i++)
        {
            for(j = 0;j < n;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }

        cout<<"\nSECOND ARRAY : \n";
        for(i = 0;i < o;i++)
        {
            for(j = 0;j < p;j++)
            {
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }

        for(i = 0;i < m;i++)
        {
            for(j = 0;j < p;j++)
            {
                c[i][j] = 0;
            }
        }

        cout<<"\nMULTIPLIED ARRAY : \n";
        for(i = 0;i < m;i++)
        {
            for(j = 0;j < p;j++)
            {
                for(k = 0;k < n;k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        for(i = 0;i < m;i++)
        {
            for(j = 0;j < p;j++)
            {
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"\nmatrix dimensions not matched, therefore no multiplication poassible !!!";
    }
    return 0;
}
