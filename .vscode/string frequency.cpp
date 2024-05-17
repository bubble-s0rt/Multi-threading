#include<bits/stdc++.h>
using namespace std;
#define fpr(i,n) for(int i=0;i<n;i++)
#define fors(i,s) for(i=0;s[i]!='\0';i++)
#define w(t) while(t--)
#define forv(i,v) for(i=0 ; i< v.size() ; ++i)
#define vect vector <int> v
#define FastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
//this code doesnt run on vs code but works on other IDEs.
int32_t main()
{
    FastIO;
    const int mx=1e5+234;

      string s;
      cin>>s;
      int i,freq[27];
      while(i != 0)
      {
         int number=s[i]-'a';
         freq[number]++;
         i++;
      }

      fpr(i,26)
      {
         if(freq[i]>0)
         {
            char c=i+'a';
            cout<<c<<" : "<<freq[i]<<endl;
         }
      }

    

   

 



    
    
    
   
           
        
    
    
   


   return 0;
}
