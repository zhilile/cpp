#include<bits/stdc++.h>
using namespace std;

int main()
{
    bool Prime[100000050];
    int N;
    cin>>N;
    int ans=0;
    Prime[0]=Prime[1]=1;
    for (int i=2;i*i<=N;i++)
    {
        if (!Prime[i])
        {
            for (int j=i*i;j<=N;j+=i) 
            { 
                Prime[j]=1;
            }
        }
    }
    for(int i=1;i<=N;i++)
    {
        if(!Prime[i])
        {
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
