#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,i,n;
    cin>>t;
    while(t--)
    {
        long long int sum=0,e=0,o=0;
        cin>>n;
        int a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                e++;
            }
            else
            {
                o++;
            }
            sum = sum + a[i];
        }
        if(sum%2!=0)
        {
            cout<<"YES \n";
        }
        else
        {
            if(o!=0 && e!=0)
            {
                cout<<"YES \n";
            }
            else
            {
                cout<<"NO \n";
            }
        }
    }
    return 0;
}
