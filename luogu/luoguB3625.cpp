#include<bits/stdc++.h>
using namespace std;
int fx[]={0,1,0,-1,0};
int fy[]={0,0,1,0,-1};
int n,m;
struct node
{
	int x , y; 
};
queue<node>q;
char a[110][110];
int v[110][110];

void bfs()
{
	while(!q.empty())
	{
		node nowNode=q.front();
		q.pop();
		if(nowNode.x==n&&nowNode.y==m)
		{
			cout<<"Yes";
			return;
		}
		for(int i=1;i<=4;i++)
		{
			int nowX,nowY;
			nowX=nowNode.x+fx[i];
			nowY=nowNode.y+fy[i];
			if(nowX<=n&&nowX>=1&&nowY<=m&&nowY>=1&&v[nowX][nowY]==0)
			{
				v[nowX][nowY]=1;
				q.push({nowX,nowY});
			}
		}
	}
	cout<<"No";
}

int main()
{
    cin >> m >> n;
    for(int i=1 ; i<=m ; i++)
    {
        for(int j=1 ; j<=n ; j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='.')
            {
                v[i][j]=0;
            }
            else
            {
                v[i][j]=1;
            }
        }
    }
    q.push({1,1});
    v[1][1]=1; 
    bfs();
    return 0;
}
