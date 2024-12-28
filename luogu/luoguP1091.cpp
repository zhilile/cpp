#include<bits/stdc++.h>
using namespace std;
int a[1000];
int f1[1000];
int f2[1000];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        f1[i]=1;
        f2[i]=1;
    }
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=i-1;j++)
        {
            if(a[i]>a[j])
            {
                f1[i]=max(f1[i],f1[j]+1);
            }
        }
    }
    for(int i=n-1;i>=1;i--)
    {
        for(int j=n;j>=i;j--)
        {
            if(a[i]>a[j])
            {
                f2[i]=max(f2[i],f2[j]+1);
            }
        }
    }
    int ans =n;
    for(int i=1;i<=n;i++)
    {
        int k=f1[i]+f2[i]-1;
        ans=min(n-k,ans);
    }
    cout<<ans;
    return 0;
}
