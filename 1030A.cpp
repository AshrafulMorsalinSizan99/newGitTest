#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,x=0,y=0,a[105];
    while(cin>>n)
    {
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0)
            {
                x++;
            }
            else
            {
                y++;
            }
        }
        if(y>0)
            cout<<"HARD\n";
        else
            cout<<"EASY\n";
    }
    return 0;
}
