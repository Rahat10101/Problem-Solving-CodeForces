#include <bits/stdc++.h>
using namespace std;

deque <int> d;
int ans[2];

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int a;
        cin >> a;
        d.push_back(a);
    }
    int i=0;
    while(!d.empty())
    {
        if(d.back() > d.front())
        {
            ans[i]+=d.back();
            d.pop_back();
        }
        else
        {
            ans[i]+=d.front();
            d.pop_front();
        }
        i=(i+1)%2;
    }
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}
