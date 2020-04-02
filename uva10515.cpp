#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a[10],x,y,rem;
    while(1)
    {
        cin>>x>>y;
        if(x==0 && y==0) break;
        else
        {
            a[]=pow(x,y);
            rem=a[]%10;
            if(a[]!=0)
                cout<<a<<endl;
            else
                cout<<rem<<endl;

        }
    }
    return 0;
}
