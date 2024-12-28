#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,ans=0;
    cin>>a>>b;
    for(int i =a+1;i<b;i++)
    {
        if(i%4==0&&i%100!=0)
        {
            ans+=i;
        }
        else if(i%400==0)
        {
            ans+=i;
        }
    }
    cout<<ans;
    return 0;
}
