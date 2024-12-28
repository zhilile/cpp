#include<bits/stdc++.h>
using namespace std;
struct node
{
	int x,y;
};
queue<node>q;
char a[1010][1010];
int R,C;
int ans=0;
int fx[]={0,1,0,-1,0};
int fy[]={0,0,1,0,-1};
bool judge(int minx,int miny,int maxx,int maxy)
{
	for(int i=minx;i<=maxx;i++)
	{
		for(int j=miny;j<=maxy;j++)
		{
			//cout<<a[i][j];
			if(a[i][j]=='.')
			return 0;
			
		}
	}
	return 1;
}
void bfs(int x,int y)
{
	int minx=0x7fffffff;
	int miny=0x7fffffff;
	int maxx=0;
	int maxy=0;
	q.push({x,y});
	
	while(!q.empty())
	{
		node pastTop =q.front();
		minx=min(minx,pastTop.x);
		miny=min(miny,pastTop.y);
		maxx=max(maxx,pastTop.x);
		maxy=max(maxy,pastTop.y);
		q.pop();
		for(int i=1;i<=4;i++)
		{
			//cout <<  "3: " << pastTop.x+fx[i] << " " << pastTop.y+fy[i] << " " << a[pastTop.x+fx[i]][pastTop.y+fy[i]] << endl;
			if(pastTop.x+fx[i]>=1&&pastTop.x+fx[i]<=R&&pastTop.y+fy[i]>=1&&pastTop.y+fy[i]<=C&&a[pastTop.x+fx[i]][pastTop.y+fy[i]]=='#')
			{
				minx=min(minx,pastTop.x+fx[i]);
				miny=min(miny,pastTop.y+fy[i]);
				maxx=max(maxx,pastTop.x+fx[i]);
				maxy=max(maxy,pastTop.y+fy[i]);
				//cout<<"x"<<minx<<endl<<miny<<endl<<maxx<<endl<<maxy<<endl; 
				q.push({pastTop.x+fx[i],pastTop.y+fy[i]});
				a[pastTop.x+fx[i]][pastTop.y+fy[i]]='0';
			}
		}
	}
	//cout<<"y"<<minx<<endl<<miny<<endl<<maxx<<endl<<maxy<<endl; 
	if(judge(minx,miny,maxx,maxy))
	{
		ans++;
		//cout<<ans<<endl;
		return;
	}
	cout<<"Bad placement.";
	exit(0);
}
int main()
{
	cin>>R>>C;
	for(int i=1;i<=R;i++)
	{
		for(int j=1;j<=C;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=R;i++)
	{
		for(int j=1;j<=C;j++)
		{
			if(a[i][j]=='#')
			bfs(i,j);
		}
	}
	printf("There are %d ships.",ans);
	return 0;
}
