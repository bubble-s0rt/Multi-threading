#include <bits/stdc++.h>
using namespace std;
bool is(long long int n);
int main()
{
   int n;
   cin>>n;

  long long int i,sm=0;
  int x=log2(n)+100;
  for(i=1;i<=x;i++)
  {

    if(is(i))
    {
      sm+=i;
    }
  }

 cout<<sm;




}
bool is(long long int n)
{
      if(n==1)
      return 1;
    else if(n%2!=0||n==0)
      return 0;
    return is(n/2);
}
