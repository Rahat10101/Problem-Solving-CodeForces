#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,i,a,b,c,d,flag=0;
    cin>>n;
    for(i=n+1; i<=9012; i++)
    {
        a=i%10;
        b=(i/10)%10;
        c=(i/100)%10;
        d=(i/1000)%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            flag = 1;
        }

        else
        {
            flag = 0;
        }

        if(flag == 1)
        {
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}
