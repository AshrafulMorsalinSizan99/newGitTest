#include<stdio.h>
int main()
{
    int n,k,i,a[60],count=0;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>k)
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
