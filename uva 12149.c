#include<stdio.h>
int main()
{
    int x,i;
    unsigned long long int s,sum=0;
    while(scanf("%d",&x)==1 && x!=0)
    {
        sum=0;
        for(i=1;i<=x;i++)
        {
            s=i*i;
            sum+=s;
        }
        printf("%llu\n",sum);
    }
    return 0;
}
