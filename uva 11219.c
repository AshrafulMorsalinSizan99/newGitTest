#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int nd,nm,ny,bd,bm,by;
        char c;
        cin>>nd>>c>>nm>>c>>ny;
        cin>>bd>>c>>bm>>c>>by;
        int age=ny-by;
        age-=(bm>nm);
        age-=((bm==nm)&&(bd>nm));
        if(age<0)cout<<" Invalid birth date"<<endl;
        else if(age>130)cout<<" Check birth date"<<endl;
        else cout<<" "<<age<<endl;
    }
    return 0;
}
