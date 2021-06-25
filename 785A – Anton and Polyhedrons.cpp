#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0,i;
    cin>>n;

    for(i=1; i<=n; i++)
    {
        char s[20];
        cin>>s;

        if(s[0]=='T')
        {
            c = c + 4;
        }
        else if(s[0]=='C')
        {
            c = c + 6;
        }
        else if(s[0]=='O')
        {
            c = c + 8;
        }
        else if(s[0]=='D')
        {
            c = c + 12;
        }
        else if(s[0]=='I')
        {
            c = c + 20;
        }
    }
    cout<<c<<endl;
    return 0;
}
