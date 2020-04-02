#include<iostream>
using namespace std;
int main()
{
    long long int t,n,k,i,sum=0,j,a[100],b[100],x;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n>>k;
        for(j=1; j<=n; j++)
        {
            if(n%j==0)
            {
                a[j]=j;
                if(a[j]%k==0)
                {
                    b[j]=a[j];
                    sum+=b[j];
                }
            }
        }


        for(x=0; x<100; x++)
        {
            cout<<b[x]<<endl;
        }
    }
    return 0;
}
