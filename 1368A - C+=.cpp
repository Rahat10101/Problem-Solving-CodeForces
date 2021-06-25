#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,c,n;

    cin>>t;

    while(t--)
    {
        cin>>a>>b>>n;

        c=0;

        while(max(a, b) <= n)
        {
            if(a > b)
            {
                b += a;
            }
            else
            {
                a += b;
            }
            c++;
        }

        cout<<c<<endl;
    }

    return 0;
}
