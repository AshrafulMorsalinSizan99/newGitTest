#include<stdio.h>
int main()
{
    int d1,d2,m1,m2,y1,y2,a,n,i;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%d/%d/%d",&d2,&m2,&y2);
            scanf("%d/%d/%d",&d1,&m1,&y1);
            if(d1>d2)
            {
                d2=d2+30;
                m1=m1+1;
            }
            if(m1>m2)
            {
                m2=m2+12;
                y1=y1+1;
            }
            a=y2-y1;
            if(a<0)
                printf("Case #%d: Invalid birth date\n",i);
            else if(a>130)
                printf("Case #%d: Check birth date\n",i);
            else
                printf("Case #%d: %d\n",i,a);
        }
    }
    return 0;
}
