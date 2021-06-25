#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        vector<int>v;
        int n,count=0;
        cin>>n;

        if(n%10 != 0)
        {
            v.push_back(n%10);
        }
        int ans = n%10;
        n = n - ans;

        if(n%100 != 0)
        {
            v.push_back(n%100);
        }
        ans = n%100;
        n = n - ans;

        if(n%1000 != 0)
        {
            v.push_back(n%1000);
        }
        ans = n%1000;
        n = n - ans;

        if(n%10000 != 0)
        {
            v.push_back(n%10000);
        }

        if(n%10000 == 0 && n>=10000)
        {
            v.push_back(n);
        }

        cout<<v.size()<<endl;
        for(int j=0 ; j<v.size(); j++)
        {
            cout<<v[j]<<" ";
        }
    }
}
