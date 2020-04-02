#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,a=0,b=0,c=0,d=0,e=0,f=0,t=0;
    cin>>n;
    a=n/5;
    b=n%5;
    if(b%4==0)
    {
        c=b/4;
    }
    else if(b%3==0)
    {
        d=b/3;
    }
    else if(b%2==0)
    {
        e=b/2;
    }
    else if(b%1==0)
    {
        f=b/1;
    }
    t=a+c+d+e+f;
    cout<<t<<endl;
    return 0;
}
