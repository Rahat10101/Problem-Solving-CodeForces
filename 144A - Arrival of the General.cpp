#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,maxx,minn,index_max,index_min,ans;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    maxx=0;
    minn=10000;
    for(i=0; i<n; i++)
    {
        if(a[i]>maxx)
        {
            maxx=a[i];
            index_max=i;
        }
        if(a[i]<=minn)
        {
            minn=a[i];
            index_min=i;
        }
    }
    if(index_max>index_min)
    {
        index_min++;
    }
    ans = index_max+n-1-index_min;
    cout<<ans;
    return 0;
}
