#include<bits/stdc++.h>
using namespace std;

bool g[1010][1010];
int n,m;
int num,ans;
int sum[1010];
bool f[1010];
void dfs(int u,int v)
{
	f[u]=1;
	//cout<<u<<" "<<v<<'\n'; 
	if(u==v)
	{
		num++;
		for(int i=1;i<=n;i++)
		{
			if(f[i])
			{
				sum[i]++;
			}
		}
		return;
	}
	for(int i=1;i<=n;i++)
	{
		//cout<<g[u][i]<<'\n';
		if(g[u][i]&&!f[i])
		{
			f[i]=1;
			//cout<<i<<'\n';
			dfs(i,v);
			f[i]=0; 
		}
	}
}

int main()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int u,v;
		cin>>u>>v;
		g[u][v]=g[v][u]=1;
	}
	int u,v;
	cin>>u>>v;
	dfs(u,v);
	//cout<<num;
	for(int i=1;i<=n;i++)
	{
		if(num==sum[i]&&i!=u&&i!=v)
		{
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
