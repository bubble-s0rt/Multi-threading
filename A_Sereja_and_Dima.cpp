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
    int n; cin>>n;
    vector <int> v;
    //Leetcode-peak index in a mountain array
    fpr(i,n)
    {
        int x;cin>>x;
        v.push_back(x);
    }
   int sereja=0,dim=0,l=0,r=n-1;
   
    for(int i=0;i<v.size();i++)
    {
        if(i%2==0)
        {
            if(v[l]>v[r])
            {
                sereja+=v[l];
                l++;

            }
            else
            {
                sereja+=v[r];
                r--;
            }
        }
        else
        {
            if(v[l]>v[r])
            {
                dim+=v[l];
                l++;
            }
            else
            {
                dim+=v[r];
                r--;
            }
        }

    }
    
    cout<<sereja<<" "<<dim<<" ";
    
   return 0;
}
