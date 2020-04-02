#include<iostream>
using namespace std;

int main()
{
    int n,i,a,b;
    string s;
    while(cin>>n)
    {
        a=0;
        for(i=1;i<=n;i++)
        {
            cin>>s;
            if(s[2]=='X')
            {
                if(s[0]=='+')
                    ++a;
                else
                    --a;
            }
            else if(s[0]=='X')
            {
                if(s[1]=='+')
                    ++a;
                else
                    --a;
            }
        }
        cout<<a<<endl;
    }
    return 0;
}
