#include<iostream>
using namespace std;
int main()
{
    long long int n,s,i,a[1000],d=0;
    cin>>n;
    cin>>s;
    for(i=1;i<=s;i++)
    {
        cin>>a[i];
        if(a[i]>a[i+1])
        {
          d=a[i]-a[i+1];
        }
        else if(a[i]<a[i+1])
        {
            d=a[i+1]-a[i];
        }
        cout<<d<<endl;
    }
    //cout<<d<<endl;
    return 0;
}
