#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,a,b,c,n,ans,m;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>n;
        ans = a+b+c+n;
        m = max(a, max(b,c));
        if(ans%3 == 0 && ans/3>=m)
        {
            cout<<"YES \n";
        }
        else
        {
            cout<<"NO \n";
        }
    }

    return 0;
}

