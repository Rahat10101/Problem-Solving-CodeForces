#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for (auto &x : a)
        {
            cin >> x;
        }

        if (a[0] + a[1] <= a.back())
        {
            cout << "1 2 " << n << endl;
        }

        else
        {
            cout << "-1\n";
        }
    }

    return 0;
}
