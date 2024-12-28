#include<bits/stdc++.h>
using namespace std;
int ans=0;
struct milk
{
    int p;
    int a;
}mi[2000010];
bool cmp(milk x,milk y)
{
    return x.p<y.p;
}
int main()
{
    int n,m;
    cin>>m>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>mi[i].p>>mi[i].a;
    }
    int k=1;
    sort(mi+1,mi+n+1,cmp);
    while(m)
    {
        if(m>=mi[k].a)
        {
            ans+=mi[k].p*mi[k].a;
            m-=mi[k].a;
        }
        else
        {
            ans+=m*mi[k].p;
            m=0;
        }
        k++;
    }
    cout<<ans;
    return 0;
}
