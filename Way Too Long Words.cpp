#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    char s[100];
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cin>>s;
        int l = strlen(s);

        if(l>10)
        {
            int x=l-2;
            cout<<s[0]<<x<<s[l-1]<<endl;
        }

        else
        {
            cout<<s<<endl;
        }

    }
}
