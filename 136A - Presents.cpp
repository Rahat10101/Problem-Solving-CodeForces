#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    int a[n+10];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(j=1; j<=n; j++)
    {
        for(i=0; i<n; i++)
        {
            if(a[i]==j)
            {
                cout<<i+1<<" ";
            }
        }

    }

    return 0;
}
