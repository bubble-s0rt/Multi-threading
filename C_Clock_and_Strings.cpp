#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fpr(i, n) for (int i = 0; i < n; i++)
#define fors(i, s) for (i = 0; s[i] != '\0'; i++)
#define w(t) while (t--)
#define forv(i, v) for (i = 0; i < v.size(); ++i)
#define vect vector<int> v
#define srt sort(v.begin(), v.end())
#define FastIO                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define endl '\n'


int32_t main()
{
    FastIO;
    int n;
    cin>>n;
    while(n--)
    {
       int a,b,c,d,cnt=0;
       cin>>a>>b>>c>>d;
       for(int i=min(a,b) ; i<=max(a,b) ; i++)
       {
          if(i==c)
          cnt++;
          if(i==d)
          cnt++;
    
       }
       if(cnt==1)
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;
      
    
    }
    
    return 0;
}
