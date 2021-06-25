#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int t,i,n,x;
    cin>>t;

    for(i=1; i<=t; i++)
    {
        cin>>n>>x;

        if(n<=2)
        {
            cout<<1<<"\n";
        }
        else
        {
            cout<<((n-3)/x)+2<<"\n";
        }
    }

    return 0;
}
