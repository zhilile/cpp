#include<bits/stdc++.h>
using namespace std;
int li[100010];
int main()
{
    int n,dist;
    int ans=0;
    cin>>n>>dist;
    for(int i=1;i<=n;i++)
    {
        cin>>li[i];
    }
    sort(li+1,li+n+1);
    for(int i=2;i<n;i++)
    {
        if((li[i+1])-(li[i-1])<=dist)
        {
            li[i]=li[i-1];
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
