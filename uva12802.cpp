#include<iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n, r = 0, t;
    while(scanf("%d", &n)!=EOF)
    {
        t = n;

        while (n != 0)
        {
            r = r * 10;
            r = r + t%10;
            t = t/10;
        }

        if (n != r)
            {
               cout<<n*2<<endl;
            }
        else
        {
            break;
        }
    }
    return 0;
}
