#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[10001];
    gets(s);
    int l,c=0,i,x=0;
    l=strlen(s);
    sort(s,s+l);
    for(i=0; i<l-1; i++)
    {
        if(s[i]>=97&&s[i]<=122)
        {
            c++;
            if(s[i]==s[i+1])
            {
                c--;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}
