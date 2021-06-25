#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n;

    cin>>a>>b>>n;

    while(1)
    {
        n -= __gcd(a,n);
        if(n < 1)
        {
            cout<<"0";
            return 0;
        }
        n -= __gcd(b,n);
        if(n < 1)
        {
            cout<<"1";
            return 0;
        }
    }

    return 0;
}
