#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n,x,y,c,d,i;
    scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            scanf("%d %d",&x,&y);
            if(x>=y&&(x+y)%2==0)
            {
                c=(x+y)/2;
                d=(x-y)/2;
                printf("%d %d\n",c,d);
            }
            else
            {
                printf("impossible\n");
            }
        }
    return 0;
}
