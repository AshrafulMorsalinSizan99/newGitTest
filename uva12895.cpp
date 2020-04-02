#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    long long int n,i,N,t,a,digit;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>N;
        n=0;
        a=N;
        while(N>0)
        {
            N=N/10;
            n++;
        }
        N=a;
        while(N>0)
        {
            digit=N%10;
            N=N/10;
            a=a-pow(digit,n);
        }
        if(a==0)
            cout<<"Armstrong\n";
        else
            cout<<"Not Armstrong\n";
    }
    return 0;
}
