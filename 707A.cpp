#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,a,b;
    cin>>a>>b;
    char s[a][b];
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            cin>>s[i][j];
        }
    }
     for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            if(s[i][j]=='C'||s[i][j]=='M'||s[i][j]=='Y')
            {
                cout<<"#Color\n";
                return 0;
            }
        }
    }
    cout<<"#Black&White\n";
    return 0;
}
