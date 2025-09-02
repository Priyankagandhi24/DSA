#include <iostream>
using namespace std;

int main()
{
    int m,n,i,j;

    cout<<"enter the rows for the matrix : ";cin>>m;
    cout<<"enter the cols for the matrix : ";cin>>n;

    int arr[m][n];

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

    bool gotcha = false;
    for(i = 0;i < m;i++)
    {
        int rowmin = arr[i][0];
        int colindex = 0;

        for(j = 0;j < n;j++)
        {
            if(arr[i][j] < rowmin)
            {
                rowmin = arr[i][j];
                colindex = j;
            }
        }

        bool saddle = true;
        for(int k = 0;k < m;k++)
        {
            if(arr[k][colindex] > rowmin)
            {
                saddle = false;
                break;
            }
        }

        if(saddle)
        {
            cout<<"\nSaddle point : "<<rowmin<<endl;
            gotcha = true;
        }
    }

    if(gotcha != true)
    {
        cout<<"\nno saddle points in the matrix !!";
    }

    return 0;
}
