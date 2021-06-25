#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n1,n2,sum;
    cin>>a>>b;

    n1 = min(a,b);
    n2 = max(a,b);

    sum = (n2-n1)/2;

    cout<<n1<<" "<<sum<<endl;

    return 0;
}
