#include<stdio.h>
int main()
{
    long long int n,next,t,i;
    while(scanf("%lld",&n)>=0)
    {
        if(n<0)
            break;
        int first=0,second=1;
        for(i=0; i<=n; i++)
        {
            if(i<=1)
                next=i;
            else
            {
                next=first + second +1;
                first=second;
                second=next;
            }
            if(next<2)
            {
                t=next + second;
            }
            else
            {
                t=next+second-(second-(first+1));
            }
        }
        printf("%lld %lld\n",next,t);
    }
    return 0;
}
