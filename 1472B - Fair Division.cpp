#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,n,i,j;

    cin>>t;

    for(i = 1 ; i<=t ; i++)
    {
        long int sum = 0,one=0,two=0;
        cin>>n;
        int a[n];
        for(j=0; j<n; j++)
        {
            cin>>a[j];
            sum = sum + a[j];

            if(a[j]==1)
            {
                one++;
            }
            else if(a[j]==2)
            {
                two++;
            }
        }

        if(two%2==0)
        {
            if(one%2==0)
            {
                cout<<"YES \n";
            }
            else
            {
                cout<<"NO \n";
            }
        }
        else
        {
            if(one>=2&&one%2==0)
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
