#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[3],i;

    for(i=0;i<3;i++)
    {
        cin>>a[i];
    }
    sort(a,a+3);

    int n1 = a[2]-a[1];
    int n2 = a[1]-a[0];

    cout<<n1+n2<<endl;

    return 0;
}
