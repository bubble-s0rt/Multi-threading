#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i,x=0;
    cin>>a>>b>>c;
    for(i=a;i<=b;i++)
    {
       if(i%c==0)
        {
            x++;
        }

    }
    if(x==0)
    {
        cout<<-1;
    }
    else
    {
        for(i=a;i<=b;i++)
        {
            if(i%c==0)
            {
                cout<<i;
                break;
            }

        }
    }


}
