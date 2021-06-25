#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,t;
    cin>>t;

    for(i=0;i<t;i++)
    {
        long long a,b;
        cin>>a>>b;
        if(a%b==0)
        {
            cout<<"0 \n";
        }
        else
        {
            cout<<b-(a%b)<<endl;
        }
    }

    return 0;
}
