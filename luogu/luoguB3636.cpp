#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans=0;
    while(n!=1)
    {
        if(n%2==1)
        {
            n--;
            ans++;
            cout<<n<<'\n'<<ans;
        }
        else
        {
            n/=2;
            ans++;
            cout<<n<<'\n'<<ans;
        }
    }
    cout<<ans;
    return 0;
}
