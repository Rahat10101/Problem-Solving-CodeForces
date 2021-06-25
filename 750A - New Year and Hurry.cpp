#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n1,n2,sum=0,i,count=0;
    cin>>a>>b;

    n1 = 240 - b;

    for(i=1; i<=a; i++)
    {
        sum = sum + 5*i;
        if(n1>=sum)
        {
            count++;
        }
    }

    cout<<count<<endl;

    return 0;
}
