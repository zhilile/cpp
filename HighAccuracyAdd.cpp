#include <iostream>
#include <string>
using namespace std;
string B;
string A;

int a[31];
int b[31];
int ans[32];
int k

int main()

{
	int lena =A.length();
	int lenb =B.length();
	cin >>A;
	cin >>B;
	for(int i =0;i<lena;i++)
	{
		a[lena-1-i]=A[i]-'0';
	}
	for(int i =0;i<lenb;i++)
	{
		b[lenb-1-i]=B[i]-'0';
	}
	for (int i =0;i<max(lena,lenb);i++)
	{
		ans [i]=a[i]+b[i]+k;
		k =ans[i]/10
		ans[i]=ans[i]%10;
	}

	int x=max(lena,lenb)-1;
	if(k>0)
	{
		x++;
		ans[x]=k
	}
	for(int i=x;i>=0;i--){
	cout <<ans[i]
	}
	return 0;



}
