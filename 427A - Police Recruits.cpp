#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
    int count=0;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if(x>0)
        {
            sum = sum + x;

        }
        else
        {
            if(sum<1)
            {
                count++;
            }
            else
            {
                sum = sum - 1;
            }
        }
    }
    cout<<count<<endl;

    return 0;
}
