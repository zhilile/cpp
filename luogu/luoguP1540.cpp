#include<bits/stdc++.h>
using namespace std;

int main()
{
    int M,N;
    cin>>M>>N;
    queue<int>q;
    bool f[1010]={};
    int ans=0;
    for(int i=1;i<=N;i++)
    {
        int x;
        cin>>x;
        if(!f[x])
        {
            if(q.size()>=M)
            {
                f[q.front()]=0;
                q.pop();
                q.push(x);
            }
            else
            {
                q.push(x);             
            }
            f[x]=1;
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
