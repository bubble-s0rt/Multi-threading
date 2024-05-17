#include<stdio.h>
#include<math.h>
int main()
{
    int n=23,i,flag=0,j;
    for(i=0;i<=n;i++)
    {
          if (i == 1 || i == 0)
            continue;

        flag=0;
       for(j=2;j<=i/2;j++)
       {
           if(i%j==0)
           {
               flag=1;
               break;
           }

       }
       if(flag==0)
       {
           printf("%d\t\n",i);
       }

    }




}
