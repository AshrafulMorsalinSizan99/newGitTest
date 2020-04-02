#include<stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        if(a+b>c)
        {
            printf("Hunters win!\n");
        }
        else if(a+b<c || a+b==c)
        {
            printf("Props win!\n");
        }
    }
    return 0;
}
