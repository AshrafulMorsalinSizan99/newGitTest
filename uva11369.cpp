#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int n,t,p[20001],i,j;
    long long int d;

    scanf("%d",&t);

    for(i=0; i<t; i++)
    {
        d=0;
        scanf("%d",&n);
        for(j=0; j<n; j++)
            scanf("%d",&p[j]);

        sort(p,p+n);
        for(j=n-3; j>=0; j=j-3)
            d=d+p[j];

        printf("%lld\n",d);
    }
    return 0;
}
