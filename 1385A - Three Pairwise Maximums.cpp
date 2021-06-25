#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if(a[1]==a[2])
        {
            cout<<"YES \n";
            cout<<a[2]<<" "<<a[0]<<" "<<a[0]<<endl;
        }
        else
        {
            cout<<"NO \n";
        }
    }

    return 0;
}

