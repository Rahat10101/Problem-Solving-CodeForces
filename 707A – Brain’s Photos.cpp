#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,c=0;
    cin>>n>>m;
    char s[n][m];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>s[i][j];
            if(s[i][j]=='C'||s[i][j]=='M'||s[i][j]=='Y')
            {
                c++;
            }
        }
    }
    if(c)
    {
        cout<<("#Color \n");
    }
    else
    {
        cout<<"#Black&White \n";
    }

    return 0;
}
