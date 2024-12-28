#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h,m,s;
    char t;
    cin>>h>>m>>s>>t;
    int ans=0;
    ans+=h*3600;
    ans+=m*60;
    ans+=s;
    if(t=='P')
    {
        ans+=12*3600;
    }
    cout<<ans;
    return 0;
}
