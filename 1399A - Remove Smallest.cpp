#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int j=0; j<n; j++)
        {
           cin>>a[j];
        }
        sort(a,a+n);
        int flag = 0;
        for(int k=1; k<n; k++)
        {
            int x = a[k] - a[k-1];
            if(x>1)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            cout<<"YES \n";
        }
        else
        {
            cout<<"NO \n";
        }

    }
    return 0;
}
