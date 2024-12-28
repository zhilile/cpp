#include<bits/stdc++.h>
using namespace std;
int a[1000010];
int ans=0;
int day=1;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(int k=1;k<=n;k++)
    {
        if(day<=a[k])
        {
            ans++;
            day++;
        }
    }
    cout<<ans;
    return 0;
}
