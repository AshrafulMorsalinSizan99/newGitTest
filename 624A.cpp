#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,d;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        d=a-b;
        if(d==0)
        {
            cout<<"0\n";
        }
        else if(d<0)
        {
            if(d%2==0)
            {
                cout<<"2\n";
            }
            else
            {
                cout<<"1\n";
            }
        }
        else if(d>0)
        {
            if(d%2==0)
            {
                cout<<"1\n";
            }
            else
            {
                cout<<"2\n";
            }

        }
    }
    return 0;
}
