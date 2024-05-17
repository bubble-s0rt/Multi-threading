#include<stdio.h>
#include<math.h>
void fact(int ara[],int sz);
int main()
{
    int i,sum=0,n;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",ara[i]);
    }
    fact(ara[n],n);

}
void fact(int ara[],int sz)
{
    int i,j,temp;
    for(i=0;i<sz;i++)
    {
        for(j=0;j<sz-i-1;j++)
        {
            if(ara[j]>ara[j+1])
            {
                temp=ara[j];
                ara[j]=ara[j+1];
                ara[j]=temp;
            }
        }
    }
     printf( "Largest element : %d", ara[sz-1]);
     printf( "smallest element : %d", ara[0]);


}
