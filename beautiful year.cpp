#include <bits/stdc++.h>
using namespace std;
int main()
{
  int y=0,a,b,c,d;
  cin>>y;

   while(1){

        y++;

        a=y/1000;

        b=y/100;

        b=b%10;

        c=y/10;

        c=c%10;

        d=y%10;

        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)

            break;

     }


    cout<<y;

    return 0;
}
