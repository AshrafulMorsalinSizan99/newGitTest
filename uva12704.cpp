#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int n,x,y,r,i;
    float X,Y,length;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d %d %d",&x,&y,&r);
        length=sqrt(pow(x,2)+pow(y,2));
        X=r-length;
        Y=r+length;
        printf("%.2f %.2f\n",X,Y);
    }
    return 0;
}
