#include<bits/stdc++.h>
int main()
{
    long long a,b,i,x,count,temp;
    while(scanf("%lld %lld",&a,&b)==2)
    {
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        if(a+b==0)
            break;
        long long max=0,value=0;
        for(i=a; i<=b; i++)
        {
            x=i;
            count=0;
            while(1)
            {
                count++;
                if(x%2!=0)
                    x=3*x+1;
                else
                    x=x/2;
                if(x==1)
                    break;
            }
            if(count>max)
            {
                max=count;
                value=i;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,value,max);
    }
    return 0;
}
