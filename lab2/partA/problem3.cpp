#include <iostream>
using namespace std;

int main()
{
    int m,n,i,j;

    cout<<"enter the rows for the matrix : ";cin>>m;
    cout<<"enter the cols for the matrix : ";cin>>n;

    int arr[m][n],tr[n][m] = {0};

    cout<<"\ninput elements for the matrix : \n";
    for(i = 0;i < m;i++)
    {
        for(j = 0;j < n;j++)
        {
            cout<<"enter for element at "<<i<<j<<" : ";cin>>arr[i][j];
        }
        cout<<endl;
    }

    cout<<"\nORIGINAL ARRAY : \n";
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\nTRANSPOSE MATRIX : \n";
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < m;j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
