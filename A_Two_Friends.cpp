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
    cout.tie(0);
#define endl '\n'
#define pb push_back

bool cmp(const pair<int,int> &p1, const pair<int,int> &p2)
{
   if(p1.first>p2.first) return 1;
   else if(p1.first==p2.first) return (p1.second < p2.second);
   return 0;
}



int32_t main()
{
    FastIO;
    int t;cin>>t;
    w(t)
    {
       int n;cin>>n;
       vector<int> v(n);
       for(int i=0;i<n;i++) 
       {
            cin>>v[i];
            v[i]--;

        }
        int cnt=3;
       for(int i=0;i<n;i++)
       {
           if(v[v[i]]==i)
           cnt=2;
       }
       cout<<cnt<<endl;
       

    }
    
   
 
   

    return 0;
}
