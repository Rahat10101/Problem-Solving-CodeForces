#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,a,s;
    cin >> n;

    for(i = 1; i<=n; i++)
    {
        cin>>a;
        if(a%2==0)
        {
            s = (a/2)-1;
            cout<<s<<endl;
        }
        else
        {
            s = (a/2);
            cout<<s<<endl;
        }
    }

    return 0;
}
