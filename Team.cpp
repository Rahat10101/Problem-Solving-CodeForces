#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n,i,j,a[3],sum=0,count=0;
    cin>>n;

    for(i=1; i<=n; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>a[j];
        }

        sum=0;
        for(j=0; j<3; j++)
        {
            if(a[j]==1)
            {
                sum++;
            }
        }
        if(sum>=2)
        {
            count++;
        }
    }

    cout<<count<<endl;

    return 0;
}
