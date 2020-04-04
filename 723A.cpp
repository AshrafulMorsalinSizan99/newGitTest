#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[3],d;
    cin >> a[0]>>a[1]>>a[2];
    sort(a,a+3);
    d=a[2]-a[0];
    cout<<d<<endl;
    return 0;
}
