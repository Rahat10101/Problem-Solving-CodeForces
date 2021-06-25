#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,x,y,n,t;

    cin>>t;

    while(t--)
    {
        long long int ans=0;
        cin>>x>>y>>n;
        ans = n - n % x + y;
        if(ans <= n)
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<(n - n % x - (x - y))<<endl;
        }
    }

    return 0;
}
