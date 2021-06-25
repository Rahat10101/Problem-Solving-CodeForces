#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    string s;
    cin >> n;
    cin >> s;

    set<char> l;

    for (int i = 0; i < s.length(); ++i)
    {
        char c = tolower(s[i]);
        l.insert(c);
    }
    if (l.size() == 26)
    {
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}
