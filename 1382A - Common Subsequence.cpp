#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> one(n);
        vector<int> two(m);
        for(auto &x : one)
            cin >> x;
        for(auto &x : two)
            cin >> x;

        int ans = -1;

        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
            {
                if(one[i] == two[j])
                {
                    ans = one[i];
                    break;
                }
            }

        if(ans == -1)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES \n1 ";
            cout << ans << "\n";
        }
    }

    return 0;
}
