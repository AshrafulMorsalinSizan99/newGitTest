#include<iostream>

using namespace std;

int min(int x, int y)
{
    if(x<y) return x;
    else return y;
}
int main()
{
    int n,a,b,c,d,s;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        s=0;
        d=min(b,c/2);
        s+=3*d;
        b-=d;
        c-=(2*d);
        d=min(a,b/2);
        s+=3*d;
        a-=d;
        b-=(2*d);
        cout<<s<<endl;
    }
    return 0;
}
