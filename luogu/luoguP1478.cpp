#include<bits/stdc++.h>
using namespace std;
struct tree
{
    int h;
    int l;
};
bool cmp(tree a,tree b)
{
    return a.l<b.l;
}
tree t[5010];
int main()
{
    int n,s,a,b;
    cin>>n>>s>>a>>b;
    for(int i=1;i<=n;i++)
    {
        cin>>t[i].h>>t[i].l;
    }
    sort(t+1,t+n+1,cmp);
    int ans = 0;
    for(int i=1;i<=n;i++)
    {
        if(a+b>=t[i].h &&s>=t[i].l)
        {
            ans++;
            s-=t[i].l;
        }
    }
    cout<<ans;
    return 0;
}
