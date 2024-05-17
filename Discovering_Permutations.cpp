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
    int t;cin>>t;
    for(int i=1; i<=t;i++)
    {
        int n,k;cin>>n>>k;
        string s;
        int x='A'+ n;
        for(char c='A'; c<x ; c++)
        {
            s=s+c;
        }
        cout<<"Case "<<i<<":"<<endl;
       string t=s;
       while(k--)
       {
            cout<<s<<endl;
            next_permutation(s.begin(),s.end());
            if(s==t)
            break;
       }
        
       

    }
   

    return 0;
}
