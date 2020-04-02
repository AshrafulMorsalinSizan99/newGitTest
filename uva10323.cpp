#include<iostream>
using namespace std;
#include<stdlib.h>
#include<math.h>
int main()
{
    long long int x,i,fact;
    while(cin>>x)
    {
        if(x>=8&&x<=13)
        {
            for(i=1,fact=1; i<=x; i++)
            {
                fact=fact*i;
            }
            cout<<fact<<endl;
        }
        else if(x>=0&&x<=7||x<0&&x%2==0)
        {
            cout<<"Underflow!"<<endl;
        }
        else if(x>=14||x<0&&x%2!=0)
        {
            cout<<"Overflow!"<<endl;
        }

    }
    return 0;
}

