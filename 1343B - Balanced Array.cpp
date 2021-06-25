#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,a,j,k;
    cin>>n;

    for(i=1; i<=n; i++)
    {
        long int sum1=0,sum2=0;
        vector<int>v;
        cin>>a;

        if(a%4!=0)
        {
            cout<<"NO \n";
        }
        else
        {
            cout<<"YES \n";

            for(j=2;j<=a;j=j+2)
            {
                v.push_back(j);
                sum1 = sum1 + j;
            }
            for(j=1;j<=a;j=j+2)
            {
                v.push_back(j);
                sum2 = sum2 + j;
            }

            int c = sum1 - sum2;
            int x = v.back();
            v.back() = x+c;

            for(k=0;k<a;k++)
            {
                cout<<v[k]<<" ";
            }

            cout<<endl;
        }
    }

    return 0;
}
