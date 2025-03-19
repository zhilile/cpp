#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int a[1000010];
    int b[1000010]={};
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[i]=a[i]+b[i-1];
    }
    int maxx=0;
    for(int i=1+k;i<=n;i++)
    {
        maxx=max(maxx,b[i]-b[i-k-1]);
    }
    cout<<maxx<<endl;
    return 0;
}
