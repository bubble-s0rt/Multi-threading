#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fpr(i,n) for(int i=0;i<n;i++)
#define fors(i,s) for(i=0;s[i]!='\0';i++)
#define w(t) while(t--)
#define forv(i,v) for(i=0 ; i< v.size() ; ++i)
#define vect vector <int> v
#define FastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int32_t main()
{
    FastIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,k;

        cin>>n>>m>>k;
        ll z=ceil(static_cast<double>(n) / m);

        if(n-z<=k)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }


   return 0;
}
