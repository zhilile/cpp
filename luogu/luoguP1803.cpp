#include<bits/stdc++.h>
#define db double
using namespace std;
int ans=1;
struct bs
{
    int k;
    int j;
}sai[1000010];
bool cmp(bs x,bs y)
{
    return x.j<y.j;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>sai[i].k>>sai[i].j;
    }
    sort(sai+1,sai+n+1,cmp);
    int t=sai[1].j;
    for(int i=2;i<=n;i++)
    {
        if(sai[i].k>=t)
        {
            ans++;
            t=sai[i].j;
        }
    }
    cout << ans;
    return 0;
}
