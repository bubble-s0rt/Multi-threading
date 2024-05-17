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
    
    int t;
    cin>>t;
    while(t--)
    {
        int k,cnt=0,i=1;
        cin>>k;

        while(true)
        {
            
            
            if(i % 10 != 3 && i % 3 != 0)
            {
                cnt++;
                if(cnt==k) 
                {
                    cout<<i<<endl;
                    break;
                }
            }
            
           
           i++;

        }
       
        

    }
    
    
   
           
        
    
    
   


   return 0;
}
