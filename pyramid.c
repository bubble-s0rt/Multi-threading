#include<stdio.h>
int main()
{
    int i,j,n=5,k=0;

    for(i=1;i<=n;++i,k=0)
    {
        for(j=1;j<=n-i;++j)
        {
             printf("  ");

        }
         while(k!=2*i-1)
            {
               printf("* ");
               ++k;
            }

        printf("\n");
    }
}
