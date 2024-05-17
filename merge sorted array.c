#include <stdio.h>

int main()
{
    int a[]={1,4,5,8},b[]={2,3,6,8},l1,l2,l3,temp;
    l1=sizeof(a)/sizeof(a[0]);
    l2=sizeof(b)/sizeof(a[0]);
    l3=l1+l2;
   int c[l3];

    for(int i=0;i<l1;i++)
    {
       c[i]=a[i];
    }
    int j=l1;

    for(int i=0;i<l2;i++)
    {
        c[j]=b[i];
        j++;
    }
    for(int i=0;i<l3;i++)
    {
         printf("%d ",c[i]);
    }


    for(int i=0;i<l3-1;i++)
    {
        for(int j=0; j<l3-i-1 ;j++)
        {
            if(c[j]>c[j+1])
            {
                temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }
    }
    printf("\n--------------\n");
    printf("After ascending sort\n");

    for(int i=0 ; i<l3 ; i++)
    {
        printf(" %d ",c[i]);
    }
    return 0;
}
