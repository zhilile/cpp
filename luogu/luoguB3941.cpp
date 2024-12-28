#include<bits/stdc++.h>
using namespace std;
int a[20];

int gcd(int x,int y)
{
    if(x<y)
    {
        swap(x,y);
    }
    int c=x%y;
    while(c)
    {
        x=y;
        y=c;
        c=x%y;
    }
    return y;
}

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    long long ans=a[1];
    for(int i=2;i<=n;i++)
    {
        int k=gcd(ans,a[i]);
        ans=ans*a[i]/k;
    }
    cout<<ans;
    return 0;
}
