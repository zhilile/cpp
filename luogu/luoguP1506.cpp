#include<bits/stdc++.h>
using namespace std;

char a[550][550];
bool v[550][550];
int n,m;
void dfs(int x,int y)
{
    if(x+1<=n+1&&v[x+1][y]==0)
    {
        v[x+1][y]=1;
        dfs(x+1,y);
    }
    if(y+1<=m+1&&v[x][y+1]==0)
    {
        v[x][y+1]=1;
        dfs(x,y+1);
    }
    if(x-1>=0&&v[x-1][y]==0)
    {
        v[x-1][y]=1;
        dfs(x-1,y);
    }
    if(y-1>=0&&v[x][y-1]==0)
    {
        v[x][y-1]=1;
        dfs(x,y-1);
    }
}

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='*')
            {
                v[i][j]=1;
            }
        }
    }
    v[0][0]=1;
    dfs(0,0);
    int ans=0;
    for(int i=0;i<=n+1;i++)
    {
        for(int j=1;j<=m+1;j++)
        {
            if(v[i][j]==0)
            {
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}
