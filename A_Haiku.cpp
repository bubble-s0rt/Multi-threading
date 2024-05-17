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

bool vow(char c)
{
    return ( c=='a' || c=='e' || c=='i'|| c=='o'|| c=='u');
}

int32_t main()
{
    FastIO;

    
    int cn[]={5,7,5};

    vector<string>v;

    for(int i=0;i<3;i++)
    {
        string s;
        char c;cin>>c;
        getline(cin,s);
        s=s+c;
        v.pb(s);  
    }
    for(int i=0;i<3;i++)
    {
       int cnt=0;
       for(auto it:v[i])
       {
         if(vow(it))
         cnt++;
       }
      if(cnt!=cn[i])
      return cout<<"NO",0;
    }

    cout<<"YES";
     
  
    


   

    return 0;
}
