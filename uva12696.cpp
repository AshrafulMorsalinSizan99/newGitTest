#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    double a,b,c,d;
    int n,i,x;
    cin>>n;
    x=0;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b>>c>>d;
        if(((a<=56 && b<=45 && c<=25) || (a+b+c)<=125) && d<=7)
        {
            cout<<"1"<<endl;
            x++;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
    printf("%d\n",x);
    return 0;
}
