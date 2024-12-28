#include<bits/stdc++.h>
using namespace std;

int a[12]={0,-1,1,7,4,2,6,8,10,18,22,20}; 
int main() 
{
	int T;
	cin>>T;
	for(int i=1;i<=T;i++)
	{
		int n;
		cin>>n;
		if(n<=11)
		{
			cout<<a[n];
		}
		else
		{
			int d=n%7;
			if(!d)
			{
				for(int j=1;j<=n/7;j++)
				{
					cout<<8;
				}
			}
			if(d==1)
			{
				cout<<10;
				for(int j=1;j<n/7;j++)
				{
					cout<<8;
				}
			}
			if(d==2)
			{
				cout<<1;
				for(int j=1;j<=n/7;j++)
				{
					cout<<8;
				}
			}
			if(d==3)
			{
				cout<<200;
				for(int j=1;j<=n/7-2;j++)
				{
					cout<<8;
				}
			}
			if(d==4)
			{
				cout<<20;
				for(int j=1;j<n/7;j++)
				{
					cout<<8;
				}
			}
			if(d==5)
			{
				cout<<2;
				for(int j=1;j<=n/7;j++)
				{
					cout<<8;
				}
			}
			if(d==6)
			{
				cout<<6;
				for(int j=1;j<=n/7;j++)
				{
					cout<<8;
				}
			}
		}
		cout<<endl; 
	}
	return 0;
}
