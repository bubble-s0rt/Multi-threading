#include <bits/stdc++.h>
using namespace std;
int add(int n,int t);

int main()
{
    int s,t,i,j,k;
    cin>>s>>t;
    j=add(s,t);
    cout<<j;

}



int add(int s,int t)
{
    int i,j,k,c=0,sm=0,mult=0;
    for(i=0;i<=1000;i++)
    {
        for(j=0;j<=1000;j++)
        {
            for(k=0;k<=1000;k++)
            {
                if(i+j+k<=s && i*j*k<=t)
                {
                    c++;
                }
            }
        }

    }
    return c;
}
