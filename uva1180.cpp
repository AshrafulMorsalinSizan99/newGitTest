#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,p,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>p;
        getchar();
         if(p== 2 || p == 3 || p == 5 || p == 7 || p == 13 || p == 17 || p == 19 || p == 31)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
