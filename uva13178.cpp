#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    unsigned long long int num,i,n,j;
    cin>>n;
    for(j=1;j<=n;j++)
    {
        cin>>num;
        i=num*(num+1);
        i=i/2;
        if(i%3==0)
            cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}

