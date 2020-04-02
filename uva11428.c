#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b;
    while(scanf("%d",&n)!=EOF)
    {
        if(n>0 && (a*a*a)-(b*b*b)==n)
        {
         //   n=a*a*a - b*b*b;
            printf("%d %d\n",a,b);
        }
    }

}
