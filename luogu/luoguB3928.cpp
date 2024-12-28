#include<bits/stdc++.h>
using namespace std;
int my[50010];
int Tian[50010];
int ans=0;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>my[i];
	}
	for(int i=1;i<=n;i++)
	{
		cin>>Tian[i];
	}
	sort(my+1,my+n+1);
	sort(Tian+1,Tian+n+1);
    int i=1,j=1,k=n;
    while(j<=k)
    {
        if(my[i]<Tian[1])
        {
            k--;
        }
        if(my[i]>Tian[j])
        {
            i++;
            j++;
            ans++;
        }
        else
        {
            i++;
        }
    }
	cout<<ans;
	return 0;
}
