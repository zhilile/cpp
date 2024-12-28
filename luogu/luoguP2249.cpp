#include<bits/stdc++.h>
using namespace std;
struct number
{
	int yuan;
	int zhi;
};
number num[10000000];
int b[1000000];
int main()
{
    int f=-1;
	int n,m;
	cin>>n>>m;
	cin >> num[1].zhi;
	num[1].yuan=1;
	int k=2;
	for(int i=2;i<=n;i++)
	{
		int x;
		cin >> x;
		if(x!=num[k-1].zhi)
		{
			num[k].zhi=x;
			num[k].yuan=i;
			k++;
		}
	

	}
	for(int i=1;i<=m;i++)
	{
		cin>>b[i];
	}
	for(int i=1;i<=m;i++)
	{	
		
		int left =1,right=k-1;
		int mid=(left+right)/2;
        while(right>=left)
			{
				if(b[i]>num[mid].zhi)
				{
					left=mid+1;
				}
				if(b[i]<num[mid].zhi)
				{
					right=mid-1;
				}
				if(b[i]==num[mid].zhi)
				{
					f=num[mid].yuan;
					break;
				}
				mid=(left+right)/2;
			}
			cout<<f<<" ";
            f=-1;
	}
	return 0;
}

