#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,c=0,maxx,minn;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];

        if(i==0)
        {
            maxx=a[0];
            minn=a[0];
        }

        if(a[i]>maxx)
        {
            maxx=a[i];
            c++;
        }
        else if(a[i]<minn)
        {
            minn=a[i];
            c++;
        }
    }

    cout<<c<<endl;

    return 0;
}
