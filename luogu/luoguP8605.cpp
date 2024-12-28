#include<bits/stdc++.h>
using namespace std;
int d[10010],u[100010],v[100010];
int main()
{
    int n,m;
    long long ans=0;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>u[i]>>v[i];
        d[u[i]]++;
        d[v[i]]++;
    }
    for(int i=1;i<=m;i++)
    {
        if(d[u[i]]>1&&d[v[i]]>1)
        {
            ans+=(d[u[i]]-1)*(d[v[i]]-1)*2;
        }
    }
    cout<<ans;
    return 0;
}
