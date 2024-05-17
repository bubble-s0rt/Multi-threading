#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a;
    int x,g;
    cin>>a;
     g=a;
    a*=1000;
   x=(int)a%1000;
    if(x>=500)
    {
        cout<<++g;
    }
    else
    {
        cout<<g;
    }


}

