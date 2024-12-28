#include <bits/stdc++.h>
using namespace std;
int ans[101];
int overturn(int a)
{
	return (a%10)*10+a/10;
}

bool determine(int a)
{
	bool f =1;
	for(int i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)
		{
			f=0;
		}
	}
	return f;
}
int main()

{
	int a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++)
	{
		if(determine(i)&&determine(overturn(i)))
		{
			cout<<i<<'\n';
		}
	}
	return 0;
}
