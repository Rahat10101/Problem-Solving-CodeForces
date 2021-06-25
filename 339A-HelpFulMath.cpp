#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[1001];
    string s;
    cin>>s;
    int count=0;
    int l = s.length();
    for(int i=0; i<l; i++)
    {
        if(s[i]=='+')
        {
            continue;
        }
        else
        {
            arr[count++]=s[i]-'0';
        }
    }
    sort(arr,arr+count);
    for(int i=0; i<count; i++)
    {
        cout<<arr[i];
        if(i==count-1)
        {
            break;
        }
        cout<<"+";
    }
    return 0;
}
