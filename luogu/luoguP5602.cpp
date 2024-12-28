#include<bits/stdc++.h>
#define db double
using namespace std;
int a[300010];
db sum=0,ans=0;
int k=0;
bool cmp(int a,int b)
{
    if(a>b)
        return 1;
    return 0;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1,cmp);
    for(int j=1;j<=n;j++)
    {
        sum+=a[j];
        k++;
        ans = max(sum*sum/k,ans);
    }
    printf("%.6lf",ans);
    return 0;
}
