#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,sum=0;
    cin>>n;
    int a[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    for(i=0;i<n-1;i++)
    {
        sum = sum + (a[n-1]-a[i]);
    }

    cout<<sum<<endl;

    return 0;
}
