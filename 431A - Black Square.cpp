#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[4];
    int result=0;
    for(int i=0; i<4; i++)
    {
        cin>>a[i];
    }

    string s;
    cin>>s;
    int l=s.length();
    for(int i=0; i<l; i++)
    {
        int z=s[i]-'0';
        result+=a[z-1];

    }
    cout<<result<<endl;

    return 0;
}
