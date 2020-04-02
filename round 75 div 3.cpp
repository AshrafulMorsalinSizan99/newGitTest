#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int i,n,a,b,c,sum=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b>>c;
        sum=(a+b+c)/2;
        cout<<sum<<endl;
    }
    return 0;
}
