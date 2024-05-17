#include<bits/stdc++.h>
using namespace std;

int main()
{
      int n,i;
    cin>>n;
    int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    int c;
     for(i=0;i<n;i++)
     {

        if(ara[i]!=ara[i-1])
        {
         c=ara[i]-10;
         cout<<c;
        }
     }
}
