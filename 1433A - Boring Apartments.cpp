#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int A=n;
        int digit = n%10;
        int c=0;
        while(n>0)
        {
            n = n/10;
            c++;
        }
        if(c==1)
        {
            cout<<((digit*10)-10)+1<<endl;
        }
        else if(c==2)
        {
            cout<<((digit*10)-10)+3<<endl;
        }
        else if(c==3)
        {
            cout<<((digit*10)-10)+6<<endl;
        }
        else if(c==4)
        {
            cout<<(digit*10)<<endl;
        }
    }

    return 0;
}
