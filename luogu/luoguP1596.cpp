#include<bits/stdc++.h>
using namespace std;

char a[110][110];
bool v[110][110];
int h[8]={-1,-1,0,1,1,1,0,-1};
int l[8]={0,1,1,1,0,-1,-1,-1};
int n,m;
void findwater(int x,int y)
{
    for(int i=0;i<=8;i++)
    {
        int X=x+h[i];
        int Y=y+l[i];
        if(X>=1&&X<=n&&Y>=1&&Y<=m)
        {
            if(v[X][Y]==1)
            {
                v[X][Y]=0;
                findwater(X,Y);
            }
        }
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
            if(a[i][j]=='W')
            {
                v[i][j]=1;
            }
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(v[i][j]==1)
            {
                ans++;
                v[i][j]=0;
                findwater(i,j);
            }
        }
    }
    cout<<ans;
    return 0;

}
