#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,a,b,m=0;
    string s;
    cin>>s;
    a=s.length()-1;
    for(i=0;i<s.length()/2;i++)
    {
        if(s[i]==s[a])
            a--;
        else
        {
            cout<<s.length();
            return 0;
        }
    }
    b=s.length();
    for(i=0;i<b-1;i++)
    {
        for(j=i+1;j<b;j++)
        {
            a=j;
            k=i;
            while(k<a)
            {
                if(s[k]!=s[a])
                {
                    m=max(m,j-i+1);
                    break;
                }
                a--;
                k++;
            }
        }
    }
    cout<<m<<endl;
    return 0;
}
