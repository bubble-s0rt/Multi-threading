#include<bits/stdc++.h>
using namespace std;
#define FastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define for(i,n) for(i=1;i<=n;i++)
#define fors(i,s) for(i=0;s[i]!='\0';i++)
int main()
{
    FastIO;
    long long n,i,s,c=0;
    cin>>n>>s;
    int ara[n];
    for(i,n)
    {
        cin>>ara[i];
        if(ara[i]%s==0)
            c++;
    }
    cout<<c;




      return 0;

}

