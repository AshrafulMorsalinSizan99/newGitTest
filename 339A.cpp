#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l,i,j;
    char a[100];
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i+=2){
        for(j=0;j<l-i-2;j+=2){
            if(a[j]>a[j+2]){
                swap(a[j],a[j+2]);
            }
        }
    }
    puts(a);
    return 0;
}
