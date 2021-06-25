#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,i,n;
    cin>>t;

    while(t--)
    {
        int a[51] = {0};
        cin>>x;
        for(i=0; i<2*x; i++)
        {
            cin>>n;
            if(a[n]==0)
            {
                cout<<n<<" ";
                a[n]++;
            }
        }
        cout<<endl;
    }
    return 0;
}
