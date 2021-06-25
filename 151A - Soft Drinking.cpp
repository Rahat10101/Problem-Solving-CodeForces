#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np,M;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    c*=d;
    k*=l;
    k/=nl;
    p/=np;
    M=min(c,k);
    M=min(M,p);
    cout<<M/n<<endl;


    return 0;

}
