#include<iostream>
using namespace std;
int main()
{
    string s;
    while(cin>>s && s!=".")
    {
        int max=1;
        int len=s.length();
        for(int i=1;i<len;i++)
            while(s[i]!=s[i%max])
                max++;
        if(len%max!=0)
            cout<<"1"<<endl;
        else
            cout<<len/max<<endl;
    }
}

