#include<stdio.h>
int main()
{
    int i,j,m=0,a[1000],x,n;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j+1<n;j++)
            {
                if(a[j]>a[j+1])
                {
                    x=a[j];
                    a[j]=a[j+1];
                    a[j+1]=x;
                    m++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n",m);
    }
    return 0;

}
