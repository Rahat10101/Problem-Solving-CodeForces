#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n,ans, left;

    cin>>n;

    ans = n/100;
    left = n%100;

    ans = ans + left/20;
    left = left%20;

    ans = ans + left/10;
    left = left%10;

    ans = ans + left/5;
    left = left%5;

    ans = ans + left/1;

    cout<<ans<<endl;

    return 0;
}
