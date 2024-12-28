#include<bits/stdc++.h>
using namespace std;

int ans=0;

int v[110][110];
int n,m;
void findcell(int x,int y)
{
    v[x][y]=0;
    if(x+1<=n&&v[x+1][y]!=0)
    {
        v[x+1][y]=0;
        findcell(x+1,y);
    }
    if(y+1<=m&&v[x][y+1]!=0)
    {
        v[x][y+1]=0;
        findcell(x,y+1);
    }
    if(x-1>=1&&v[x-1][y]!=0)
    {
        v[x-1][y]=0;
        findcell(x-1,y);
    }
    if(y-1>=1&&v[x][y-1]!=0)
    {
        v[x][y-1]=0;
        findcell(x,y-1);
    }
}

int main()
{
	cin>>n>>m; 
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            char c;
            cin>>c;
            v[i][j]=c-'0';
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(v[i][j]!=0)
            {
                ans++;
                findcell(i,j);
            }
        }
    }
    cout<<ans;
    return 0;

}
