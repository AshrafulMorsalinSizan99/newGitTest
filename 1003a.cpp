#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,l;
    cin>>n;
    vector<int>a(100);
    int ans=0;
    for(i=0;i<n;i++)
    {
        cin>>l;
        a[l-1]++;
        ans=max(ans,a[l-1]);
    }
    cout<<ans<<endl;
    return 0;
}
