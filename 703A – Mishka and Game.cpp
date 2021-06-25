#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c_m=0,c_c=0,i;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        if(a>b)
        {
            c_m++;
        }
        else if(a<b)
        {
            c_c++;
        }
    }
    if(c_m>c_c)
    {
        cout<<"Mishka\n";
    }
    else if(c_c>c_m)
    {
        cout<<"Chris\n";
    }
    else
    {
        cout<<"Friendship is magic!^^\n";
    }

    return 0;
}
