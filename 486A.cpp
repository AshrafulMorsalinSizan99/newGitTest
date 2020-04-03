#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,a;
    cin>>n;
    if(n%2==0)
    {
        a=n/2;
    }
    if(n%2==1)
    {
        a=(n-1)/2-n;
    }
    cout<<a<<endl;
    return 0;
}
