#include<bits/stdc++.h>
using namespace std;
#define FastIO ios_base::sync_with_stdio(0); cin.tie(0)
int main()
{
    FastIO;
    int n;
    cin>>n;
    int ara[n],sum=0,h;
     for(int i=0;i<n;i++)
      {
        cin>>ara[i];
      }
      for(int i=0;i<n;i++)
      {
          int h=find(ara,ara+n,i)-ara;
      }
      cout<<h;

}
