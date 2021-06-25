#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,f=1;
    cin>>n;
    string s[n];
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(s[i][j]=='O' && s[i][j+1]=='O')
            {
                s[i][j]='+';
                s[i][j+1]='+';
                cout<<"YES "<<endl;
                f=0;
                for(int k=0; k<n; k++)
                {
                    cout<<s[k]<<endl;
                }
                break;
            }
        }
        if(f==0)
        {
            break;
        }
    }
    if(f==1)
    {
        cout<<"NO \n";
    }

    return 0;
}
