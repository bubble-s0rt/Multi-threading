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

string mul(string s1, string s2)
{
    if (s1 == "0" || s2 == "0")
        return "0";

    vector<int> res(s1.size() + s2.size(), 0);

    for (int i = s1.size() - 1; i >= 0; i--)
    {
        for (int j = s2.size() - 1; j >= 0; j--)
        {
            res[i + j + 1] += (s1[i] - '0') * (s2[j] - '0');
            res[i + j] += res[i + j + 1] / 10;
            res[i + j + 1] %= 10;
        }
    }

    int i = 0;
    while (i < res.size() && res[i] == 0)
        ++i;

    string prod = "";
    while (i < res.size())
    {
        prod.push_back(res[i] + '0');
        i++;
    }

    return prod;
}

int32_t main()
{
    FastIO;
    string s, s2;
    cin >> s;

    int start = 0;
    int end = s.size() - 1;

    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }

    while (start < end)
    {
        if (s[start] != s[end])
            return false;

        start++;
        end--;
    }
    return true;

    return 0;
}
