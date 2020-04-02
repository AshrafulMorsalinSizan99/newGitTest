#include<stdio.h>

int main()
{
    int i, j;
    int n, m,ans=0,p;

    scanf("%d",&n);

    ans = 0, p = 1;
    for(i = 1; i <= n - 1; i++)
    {
        ans += p * 2;
        p += 2;
    }

    ans += p;

    printf("%d\n",ans);

    return 0;
}
