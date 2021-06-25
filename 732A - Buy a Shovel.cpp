#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int k,r,i,ans;
    cin>>k>>r;

    for(i=1;;i++)
    {
        ans = i*k;
        if(ans%10==r || ans%10==0)
        {
            cout<<i<<endl;
            break;
        }
    }

    return 0;
}
