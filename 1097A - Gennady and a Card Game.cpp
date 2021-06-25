#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str,s;
    int k=0;

    cin>>str;

    for(int i=0; i<5; i++)
    {
        cin>>s;
        if (str[0] == s[0] || str[1] == s[1])
        {
             k = 1;
        }
    }
    if(k)
    {
        cout<<"YES \n";
    }
    else
    {
        cout<<"NO \n";
    }

    return 0;
}
