#include<iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n,i,a,count = 0,sum=0;

    while (scanf("%d", &n), n)
    {
        count++;
        sum = 0;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a);
            if (a > 0)
                sum++;
            else
                sum--;
        }
        printf("Case %d: %d\n", count, sum);
    }

    return 0;
}
