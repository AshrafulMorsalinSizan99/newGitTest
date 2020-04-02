#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,a,b,d,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        if(a%b==0)
        {
            cout<<"0\n";
        }
        else
        {
            d=b-(a%b);
            cout<<d<<endl;
        }
    }
    return 0;
}
