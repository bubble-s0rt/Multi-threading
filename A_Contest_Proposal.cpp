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
#define pb push_back


int32_t main()
{
    FastIO;

    
    int t;cin>>t;
    w(t)
    {
        int n,cnt=0;
        cin>>n;
        vector<int>v1(n); vector<int>v2(n);
       for(auto &i:v1)
       cin>>i;
       for(auto &i:v2)
       cin>>i;

       int i=0,j=0;
      while(i<n && j<n)
      {
         if(v1[i]<=v2[j])
         {
            i++;
            j++;
         }
         else
         {
            cnt++;
            j++;
         }

      }
      cout<<cnt<<endl;
    }



    return 0;
}
