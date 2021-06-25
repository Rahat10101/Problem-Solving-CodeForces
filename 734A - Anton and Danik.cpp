#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n,i,s1=0,s2=0;
    cin>>n;
    char a[n];
    cin>>a;

    for(i=0; i<=n; i++)
    {
        if(a[i]=='A')
        {
            s1++;
        }
        else if(a[i]=='D')
        {
            s2++;
        }
    }

    if(s1>s2)
    {
        cout<<"Anton\n";
    }
    else if(s1<s2)
    {
        cout<<"Danik\n";
    }
    else
    {
        cout<<"Friendship\n";
    }

    return 0;
}
