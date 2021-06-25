#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,a,b,ans,i,n;
    cin>>t;

    for(i=1; i<=t; i++)
    {
        cin>>a>>b;
        if(a>b)
        {
            n = a-b;
            if(n%10==0)
            {
                ans = n/10;
                cout<<ans<<endl;
            }
            else if(n%10!=0)
            {
                ans = (n/10)+1;
                cout<<ans<<endl;
            }
        }
        else if(a<b)
        {
            n = b-a;
            if(n%10==0)
            {
                ans = n/10;
                cout<<ans<<endl;
            }
            else if(n%10!=0)
            {
                ans = (n/10)+1;
                cout<<ans<<endl;
            }
        }
        else
        {
            cout<<"0 \n";
        }
    }

    return 0;
}
