#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c,X=0,Y=0,Z=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        X+=a;
        Y+=b;
        Z+=c;
    }
    if(X==0 && Y==0 && Z==0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}
