#include<bits/stdc++.h>
using namespace std;
int a[40][40];
int n;
struct node
{
	int x,y;
};
int fx[]={0,0,1,0,-1};
int fy[]={0,1,0,-1,0};
queue <node>q;
void bfs()
{
	while(!q.empty())
	{
		node pastTop=q.front();
		q.pop();
		for(int i=1;i<=4;i++)
		{
			if(pastTop.x+fx[i]>=0&&pastTop.x+fx[i]<=n+1&&pastTop.y+fy[i]>=0&&pastTop.y+fy[i]<=n+1&&a[pastTop.x+fx[i]][pastTop.y+fy[i]]!=-1&&a[pastTop.x+fx[i]][pastTop.y+fy[i]]!=1)
			{
				q.push({pastTop.x+fx[i],pastTop.y+fy[i]});
				a[pastTop.x+fx[i]][pastTop.y+fy[i]]=-1;
			}
		}
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			int x;
			cin>>x;
			if(x==0)
			a[i][j]=2;
			else
			a[i][j]=x; 
		}
	}
	q.push({0,0});
	bfs();
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]==-1)
			cout<<0;
			else 
			cout<<a[i][j]; 
			cout<<" ";
		}
		cout<<"\n"; 
	}
	return 0;
}
