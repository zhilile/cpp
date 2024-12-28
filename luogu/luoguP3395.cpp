#include<bits/stdc++.h>
using namespace std;
struct node
{
	int x,y;
};
int main()
{
	int t;
	cin >> t;
	//int ANS[20]={};
	//int T=t;
	cout<<t;
	while (t--)
	{
    	int v[1010][1010]={};
    	int n;
    	cin >> n;
   /* 	int gx[2000];
		int gy[2000];
    	for (int i = 1; i <= 2 * n - 1; i++)
    	{
        	cin>>gx[i]>>gy[i];
    	}
		queue<node> q;
		q.push({1,1});
		int fx[]={0,0,1,0,-1};
		int fy[]={0,1,0,-1,0};
		while(!q.empty())
		{
			node pastTop=q.front();
			q.pop();
			if(pastTop.x==n&&pastTop.y==n)
			{
				ANS[T]=1;
			}
			int j=1;
			for(int i=1;i<=4;i++)
			{
				int newTopx=pastTop.x+fx[i];
				int newTopy=pastTop.y+fy[i];
				if(newTopx>=1&&newTopy<=n&&newTopy>=1&&newTopy<=n&&v[newTopx][newTopy])
				{
					q.push({pastTop.x+fx[i],pastTop.y+fy[i]});
					v[pastTop.x][pastTop.y]=1;
				}
			}
			v[gx[j]][gy[j]]=1;
			j++;
		}
		*/
		cout<<n;
		//T--;
	}
	/*for(int i=1;i<=t;i++)
	{
		cout<<(ANS[i]?"Yes":"No")<<endl;
	}
	*/
	cout<<t;
	return 0;
}
