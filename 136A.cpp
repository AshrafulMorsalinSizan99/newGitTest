#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j,ar[n];

    for ( i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    for ( j=1; j<=n; j++)
    {
        for ( i=0; i<n; i++)

        {
            if(ar[i]==j)
            {
                cout<<(i+1)<<" ";
                break;
            }
        }
    }
    return 0;
}
