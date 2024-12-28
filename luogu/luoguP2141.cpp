#include <iostream>
using namespace std;

int main()

{
	int ans=0;
	int num;
	cin>>num;
	int numlist[101]={};
	bool bl[101]={};
	for (int i=0;i<num;i++)
	{
		cin>>numlist[i];
	}

	for(int c=0;c<num;c++)
	{
		for(int k=0;k<num;k++)
		{
			for(int f=0;f<num;f++)
			{
				if(numlist[c]+numlist[k]==numlist[f]&&k!=c&&bl[f]==0)
				{
					ans+=1;
					bl[f]=1;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
