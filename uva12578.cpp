#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
using namespace std;
#define PI acos(-1.0)

int main()
{
    int t;
    double width, len, r, aG, aR;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%lf", &len);
        width=(len*6)/10;
        r=(len/5);
        aR= (PI*r*r);
        aG= (len*width)-aR;
        printf("%0.2lf %0.2lf\n", aR, aG);
    }
    return 0;
}

