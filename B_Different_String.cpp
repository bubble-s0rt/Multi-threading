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
        string s;cin>>s;
        string t;
        t=s;
        sort(t.begin(),t.end());
        if(t[0]==t.back())
        cout<<"NO"<<endl;
        else
        {
            for(int i=1;i<s.length();i++)
            {
                if(s[i]!=s[0])
                {
                    swap(s[i],s[0]);
                    cout<<"YES\n"<<s<<endl;
                    break;
                }
            }
            
        }
    }
    
    return 0;
}