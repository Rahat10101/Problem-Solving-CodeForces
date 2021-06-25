#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int sum=0,step=0;

    for(int i=0; i<s.length(); i++)
    {
        if(i==0)
        {
            step=min(abs(s[i]-'a'),26-abs(s[i]-'a'));
        }
        else
        {
            step=min(abs(s[i]-s[i-1]),26-abs(s[i]-s[i-1]));
        }
        sum+=step;
    }

    cout<<sum<<endl;

    return 0;
}
