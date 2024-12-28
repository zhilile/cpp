#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    a%=10000;
    stack<int> num;
    num.push(a);
    char b;
    int c;
    while(cin>>b>>c)
    {
        c%=10000;
        if(b=='*')
        {
            int top=num.top();
            num.pop();
            int k=top*c;
            k%=10000;
            num.push(k);
        }
        else
        {
            num.push(c);
        }
    }
    int ans=0;
    while(!num.empty())
    {
        ans+=num.top();
        num.pop();
        ans%=10000;
    }
    cout<<ans;
    return 0;
}
