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

bool isPalindrome(string str)
{
    for(int i = 0; i <= str.length()-1; i++)
    {
        if(str[i] != str[str.length()-1-i])
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}





int32_t main()
{
    FastIO;
    int n;
    cin>>n;
    while(n--)
    {
        string s;cin>>s;
        if(isPalindrome(s))
        cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            
        }
    }
    
    return 0;
}
