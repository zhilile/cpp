#include <bits/stdc++.h>
using namespace std;

int a[100],b[100],ans[100];
string A,B;

int main()
{
	cin>>A>>B;
	int lena =A.length(),lenb=B.length();
	if (A=="0"||B=="0")
	{
		cout <<0;
		return 0;
	}
	for (int i =0;i<lena;i++)
	{
		a[lena-1-i]=A[i]-'0';
	}
	for (int i =0;i<lenb;i++)
	{
		b[lenb-1-i]=B[i]-'0';
	}
	for (int i =0;i<lenb;i++)
	{
		int k =0;
		int x=b[i];
		for (int j =0;j<lena;j++)
		{
			ans[i+j]+=a[j]*x+k;
			k=ans[i+j]/10;
			ans[i+j]=ans[i+j]%10;
		}
		if(k>0)
		{
			ans[i+lena]=k;
		}
	}
	int lenans=lena+lenb;
	while(ans[lenans]==0)
	{
		lenans--;
	}
	for(int i=lenans;i>=0;i--)
	{
		cout <<ans[i];
	}
	return 0;
}
