#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t,x;
    cin>>s>>t>>x;
    int c=0;
    int l=s-t;

if(l<0)
{
  for(int i=s;i<=t;i++)
  {
      if(i==x)
      {
          c++;
      }
  }
}
else
{

for(int i=s;i>=t;i++)
  {
      if(i==x)
      {
          c++;
      }
  }
}


if(c==1)
{
    cout<<"Yes";
}
else
{
   cout<<"No";
}


}
