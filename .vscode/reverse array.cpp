#include<bits/stdc++.h>
using namespace std;
#define fpr(i,n) for(i=0;i<n;i++)
#define fors(i,s) for(i=0;s[i]!='\0';i++)
#define w(t) while(t--)
#define forv(i,v) for(i=0 ; i< v.size() ; ++i)
#define vect vector <int> v
#define FastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int32_t main()
{
    FastIO;
    const int mx=100123;
    int n;
    cin>>n;
    int ara[mx];
    int freq[mx];
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    for(int i=0,j=n;i<j;i++,j--)
    {
        int temp=ara[i];
        ara[i]=ara[j];
        ara[j]=temp;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<ara[i]<<" ";
    }

   

 



    
    
    
   
           
        
    
    
   


   return 0;
}
