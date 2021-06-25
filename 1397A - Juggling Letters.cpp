#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,n;
    string str;
    cin>>t;
    while (t--)
    {
        long long b[1005]= {0};
        cin>>n;
        int flag=0;
        for (i=1; i<=n; i++)
        {
            cin>>str;
            for (j=0; j<str.length(); j++)
            {
                b[str[j]-'a']++;
            }
        }
        for (i=0; i<=25; i++)
        {
            if (b[i]%n!=0)
            {
                flag=1;
                break;
            }
        }
        if (flag)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}

