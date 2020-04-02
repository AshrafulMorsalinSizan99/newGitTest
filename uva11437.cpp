#include<bits/stdc++.h>
typedef unsigned int uint;
typedef long long int64;
typedef unsigned long long uint64;
typedef long double ldouble;
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
                  ldouble Ax,Ay,Bx,By,Cx,Cy;
                  cin>>Ax>>Ay>>Bx>>By>>Cx>>Cy;
                  ldouble A,B,C;
                  A=sqrt((Ax-Bx)*(Ax-Bx) + (Ay-By)*(Ay-By));
                  B=sqrt((Bx-Cx)*(Bx-Cx) + (By-Cy)*(By-Cy));
                  C=sqrt((Ax-Cx)*(Ax-Cx) + (Ay-Cy)*(Ay-Cy));
                  ldouble peri=(A+B+C)/2;
                  ldouble area=peri*(peri-A)*(peri-B)*(peri-C);
                  area=sqrt(area)/7;
                  cout<<(long long)area<<endl;
    }
    return 0;
}
