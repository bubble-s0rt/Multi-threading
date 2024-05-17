#include<bits/stdc++.h>
using namespace std;
#define FastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define for(i,n) for(i=0;i<n;i++)
#define fors(i,s) for(i=0;s[i]!='\0';i++)
void sss(int arr[], int l, int r, int sum = 0);
int main()
{
    FastIO;
    int t,i;
    cin>>t;
    int n,l,r,k,ara[1000],y;
    while(t--)
    {
        cin>>n>>l>>r>>k;
        for(i,n)
        {
            cin>>ara[i];
        }
        int c=0,mx=0;
         for(i,n)
         {
             if(ara[i]>=l && ara[i]<=r)
             {

                 if(sss(ara,0,n-1)<=k)
                 {
                     c++;
                     mx=(mx,c);
                 }

             }
         }
         cout<<c-n;



    }















      return 0;

}
void sss(int arr[], int l, int r, int sum = 0)
{

    if (l > r) {
        return;
    }


 subsetSums(arr, l + 1, r, sum + arr[l]);
 subsetSums(arr, l + 1, r, sum);
}



