#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ans=0;
    int w,n;
    int a[30010];
    cin>>w>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    int i=1,j=n;
    while(i<=j)
    {
        if(i==j)
        {
            ans++;
            break;
        }
        if(a[i]+a[j]<=w)
        {
            ans++;
            i++;
            j--;
        }
        else
        {
            ans++;
            j--;
        }
    }
    cout<<ans;
    return 0;
}
