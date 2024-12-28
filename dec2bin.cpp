#include<iostream>
using namespace std;
int ans[1000];
int b=0;
int main()
{
	int a;
	cin>>a;
	while(a)
	{
		ans[b]=a%2;
		b++;
		a/=2;

	}
	for(int c=b-1;c>=0;c--)
	{
		cout<<ans[c];
	}
	return 0;
}
