#include <cstdio>
#include <cstring>
#include<iostream>
using namespace std;

int main()
{
    int n, x;
    long long sum=0;
    char s[20];

    scanf("%d", &n);
    while (n--)
    {
        gets(s);
        sum=0;
        if (strcmp(s, "donate") == 0)
        {
            scanf("%d", &x);
            sum += x;
        }
        else
        {
            printf("%lld\n", sum);
        }
    }

    return 0;
}
