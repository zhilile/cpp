#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	int a[1000010];
	cin>>n>>k;
	int l=0,r=0,ans;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]>r)
		{
			r=a[i];
		}
	}
	int m=(l+r)/2;
	
	while(l<=r)
	{
		long long sum = 0;
		for(int i=1;i<=n;i++)
		{
			if(a[i]>m)
			{
                sum+=a[i]-m;
            }
		}
		if(sum<k)
		{
			r=m-1;
		}
		if(sum>=k)
		{
			l=m+1;
			ans=m;
		}
		m=(l+r)/2;
	}
	cout<<ans;
	return 0;
}

