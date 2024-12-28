#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s;
    cin >>s;
    int a,b,ans=0;
    for(a=1;a<=sqrt(s);a++)
    {
        if(s%a==0)
        {
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
