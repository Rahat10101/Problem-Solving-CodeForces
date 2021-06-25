#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int h,m;
        cin>>h>>m;
        int ans = ((24-h)*60)-m;
        cout<<ans<<endl;
    }

    return 0;
}

