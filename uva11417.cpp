#include<iostream>
#include<cstdio>
using namespace std;
int gcd(int x, int y)
{

    int temp;
    while (y != 0)
    {
        temp = x % y;
        x = y;
        y = temp;
    }
    return x;
}

int main()
{

    int N,G;
    while(scanf("%d",&N) == 1)
    {
        if(N == 0)
            break;
        G = 0;
        for(int i = 1; i < N; i++)
        {
            for(int j = i+1; j <= N; j++)
            {
                G+=gcd(i,j);
            }
        }
        printf("%d\n",G);
    }
    return 0;
}

