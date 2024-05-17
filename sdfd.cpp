#include<bits/stdc++.h>
using namespace std;
#define fpr(i,n) for(i=1;i<=n;i++)
#define fors(i,s) for(i=0;s[i]!='\0';i++)
#define w(n) while(n--)
#define FastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int main()
{
    FastIO;
    int n,i;
    cin>>n;
    int ara[1000];
    fpr(i,n)
    {
        cin>>ara[i];
    }
   int c;
    fpr(i,n)
    {
        if(ara[i]!=ara[i-1])
        {
         c=ara[i+1];
         cout<<c;
         break;
        }


    }














      return 0;

}


