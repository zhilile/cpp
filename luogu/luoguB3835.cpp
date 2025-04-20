#include<bits/stdc++.h>
using namespace std;
int d[]={31,0,31,30,31,30,31,31,30,31,30,31};
int main()
{
	int y,m;
	cin>>y>>m;
	if(m!=2)
	{
		cout<<d[m];
	}
	else
	{
		if(y%4==0&&!(y%100==0))
		{
			cout<<"29";
		}
		else if(y%4==0&&y%400==0)
		{
			cout<<"29";
		}
		else
		{
			cout<<"28";
		}
	}
	return 0;
} 
