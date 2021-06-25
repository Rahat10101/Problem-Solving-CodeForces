#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;

        cin >> n;
        cin >> s;

        for (int i = 1; i <= n; i++)
        {
            cout << s[n - 1];
        }
        cout << "\n";
    }

    return 0;
}
