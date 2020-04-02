#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long int a,s=0;
    while(scanf("%lld",&a)!=EOF)
    {
        s=((a*(a+2)/2)*3-6);
        cout<<s<<endl;
    }
    return 0;
}
