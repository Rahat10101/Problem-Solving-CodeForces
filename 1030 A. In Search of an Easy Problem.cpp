#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,flag=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            flag = 1;
        }
    }
    if(flag)
    {
        cout<<"HARD \n";
    }
    else
    {
        cout<<"EASY \n";
    }
    return 0;
}
