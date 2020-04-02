#include <bits/stdc++.h>

using namespace std;

bool vow(char x)
{
    if(x=='a' || x=='e' || x=='o' || x=='u' || x=='i')
        return true ;
    return false;
}
string a;
int s;

int main()
{
    cin>>a;
    a+='x';
    s=a.size();

    for(int i=0; i<s-1; i++)
    {
        if (( vow(a[i+1])==1) )
            i++;
        else if (( vow(a[i])!=1)&& (a[i]!='n'))
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
