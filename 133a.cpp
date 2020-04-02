#include<bits/stdc++.h>

using namespace std;

int main()
{
    int l=0,i;
    string s;
    cin>> s;
    l = s.length();
    for(i=0;i<l;i++)
    {
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;

}
