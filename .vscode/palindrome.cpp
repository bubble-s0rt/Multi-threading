#include<bits/stdc++.h>
using namespace std;
#define fpr(i,n) for(int i=0;i<n;i++)
#define fors(i,s) for(i=0;s[i]!='\0';i++)
#define w(t) while(t--)
#define forv(i,v) for(i=0 ; i< v.size() ; ++i)
#define vect vector <int> v
#define FastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int32_t main()
{
    FastIO;
    const char mx=123;
    char s[mx], tmp[123];
    cin>>s;
    int len=0;
    while(s[len]!= 0)
    {
        tmp[len]=s[len];
        len++;
    }
    for(int i=0,j=len-1;i<j;i++,j--)
    {
        int x=tmp[i];
        tmp[i]=tmp[j];
        tmp[j]=x;
    }
    bool check=true;

    for(int i=0;i<len;i++)
    {
        if(s[i] != tmp[i])
        {
            check=false;
            break;
        }
    }
    if(check)
    cout<<"Palindrome"<<endl;
    else
    cout<<"not palindrome"<<endl;



   return 0;
}
