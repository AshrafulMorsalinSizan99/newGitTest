#include<iostream>

using namespace std;

int main()
{
    long long int r,b,g,n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>r>>b>>g;
        if(r/2>=1)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }
    return 0;
}
