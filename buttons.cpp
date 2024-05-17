#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x;
    cin>>a>>b;
    if(a>b)
    {
       x=a+(a-1);
    }
    else if(a<b)
    {
        x=b+(b-1);
    }
    else
    {
        x=2*a;
    }
    cout<<x;
}
