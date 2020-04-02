#include<stdio.h>
int main()
{
   long long int n,i,s=1;
    while(scanf("%lld",&n)!=EOF)
    {




                for(i=1;i<=n;i++)
        {
            s=s*i;
            printf("%d\n",s);
        }

       // if(s>!6227020800)
        //
          //{
            //  printf("Overflow!\n");
         // }
      //  else if(s<!10000)
      //     {
            //   printf("Underflow!\n");
        //   }
       // else
       //    {
        //       printf("%d\n",s);
         //  }
//}
   // printf("%lld",s);}
   }
    return 0;
}
