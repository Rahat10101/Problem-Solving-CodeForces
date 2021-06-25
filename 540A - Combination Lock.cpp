#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,total=0;
    cin>>n;
    char a[n],b[n],x[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }

    for(int i=0; i<n; i++)
    {

        x[i]=min(abs(a[i]-b[i]),10-abs(a[i]-b[i]));
        total = total + x[i];
    }

    cout<<total<<endl;

    return 0;
}
