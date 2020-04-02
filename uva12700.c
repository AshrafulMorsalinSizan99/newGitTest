#include<stdio.h>
int main()
{
    int n=0,cases=1;
    scanf("%d",&n);
    while(n--)
    {
        int m=0,i=0;
        scanf("%d",&m);
        char s[11];
        scanf("%s",s);
        int A=0,B=0,T=0,W=0;
        for(i=0;i<m;i++)
        {
            if(s[i]=='A')
                A++;
            else if(s[i]=='B')
                B++;
            else if(s[i]=='T')
                T++;
            else if(s[W]==0)
                W++;
        }
        if((B+A==m) && B!=0)
            printf("Case %d: BANGLAWASH\n",cases);
        else if((W+A==m) && W!=0)
            printf("Case %d: WHITEWASH\n",cases);
        else if(A==m)
            printf("Case %d: ABANDONED\n",cases);
        else if(B>W)
            printf("Case %d: BANGLADESH %d - %d\n",cases,B,W);
        else if(B<W)
            printf("Case %d: WWW %d - %d\n",cases,W,B);
        else if(B==W)
            printf("Case %d: DRAW %d %d\n",cases,B,T);
        cases++;
    }
    return 0;
}
