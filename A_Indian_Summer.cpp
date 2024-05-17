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

int32_t main()
{
    FastIO;
 
   
        
        int n;cin>>n;

        vector<pair<string,string>>v(n);

        for(int i=0;i<n;i++)
        {
            cin>>v[i].first>>v[i].second;

        }
        sort(v.begin(),v.end());
        int sz = unique ( v.begin(), v.end() ) - v.begin();
        cout<<sz;

        
    

   

    return 0;
}
