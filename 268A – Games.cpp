#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,x,y,c=0;
    cin>>n;

    int a[n],b[n];

    for(i=0; i<n; i++)
    {
        cin>>x>>y;
        a[i]=x;
        b[i]=y;
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i]==b[j])
            {
                c++;
            }
        }
    }

    cout<<c<<endl;

    return 0;
}
