#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int i,n,s=0;
    char x[4];
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        if((strcmp(x,"X++")==0)||(strcmp(x,"++X")==0))
        {
            s=s+1;
        }
        else if((strcmp(x,"X--")==0)||(strcmp(x,"--X")==0))
        {
            s=s-1;
        }
        s=s;
    }

    cout<<s<<endl;

    return 0;
}
