#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int l=0;
    cin>>s;
    while(s[l]!='\0')
    {
        l++;
    }
   int res=4-l;
   if(res<4)
   {
      for(int i=0;i<res;i++)
   {
       cout<<0;
   }
   cout<<s;
   }

   else
    cout<<s;


}
