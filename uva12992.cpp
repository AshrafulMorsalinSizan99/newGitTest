#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,i,a;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> a;
        printf("Case #%d: %d\n", i, 2*(a-1)+1);
    }
    return 0;
}
