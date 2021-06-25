#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,a,b,ans;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a>b)
        {
            ans = a-b;
            if(ans%2 == 0)
            {
                cout<<"1"<<endl;
            }
            else if(ans%2 != 0)
            {
                cout<<"2"<<endl;
            }
            else
            {
                cout<<"0"<<endl;
            }
        }
        else if(b>a)
        {
            ans = b-a;
            if(ans%2 == 0)
            {
                cout<<"2"<<endl;
            }
            else if(ans%2 != 0)
            {
                cout<<"1"<<endl;
            }
            else
            {
                cout<<"0"<<endl;
            }
        }
        else
            {
                cout<<"0"<<endl;
            }
    }

    return 0;
}
