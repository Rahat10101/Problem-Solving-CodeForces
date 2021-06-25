#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,x,sum=0,c=0;
    cin>>n;
    x=n;

    for(i=1 ; i<=n ; i++)
    {
        sum +=i;
        if(x>=sum)
        {
            x = x-sum;
            c++;
        }
    }
    cout<<c<<endl;

    return 0;
}
