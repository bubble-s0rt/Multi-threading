#include <bits/stdc++.h>
using namespace std;

long long int us(long long int n);

int main()
{


 long long int sum=0,n,m,l;
  cin>>l;
  while(l--)
  {
    cin>>n;
    int sum=(n*(n+1))/2;
    m=us(n);; //sum of natural numbers




  cout<<sum-m-m;
  }


}


long long int us(long long int n)
{
  long long int x=log2(n)+1;
  long long int i,sm=0,ara[x],ar;
  for(i=0;i<x;i++)
  {
      ar=pow(2,i);
      ara[i]=ar;
  }
 for(i=0;i<x;i++)
 {
     sm+=ara[i]; //sum of series of power of 2 (1,2,4,8...etc)
 }


return sm;


}
