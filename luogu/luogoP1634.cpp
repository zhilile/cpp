#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long x,n,num;
	cin >>x>>n;
	num=1;
	for(int i=0;i<n;i++)
	{
		num=num*x+num;
	}
	cout <<num;
	return 0;
}

