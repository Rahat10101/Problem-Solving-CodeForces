#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j;
    char a[101];

    cin>>t;

    for(i=0;i<t;i++)
    {
        cin>>a;
        int l=strlen(a);
        cout<<a[0];
        for(j=1;j<l;j=j+2)
        {
            cout<<a[j];
        }
        cout<<endl;
    }

    return 0;
}
