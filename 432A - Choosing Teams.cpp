#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i,o,count=0,ans;
    cin>>n>>k;
    int a[n];
    o = 5 - k;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=o)
        {
            count++;
        }
    }

    ans = count/3;
    cout<<ans<<endl;

    return 0;
}
