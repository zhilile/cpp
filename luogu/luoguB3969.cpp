#include<bits/stdc++.h>
using namespace std;
int p[1000010];
int main()
{
    int n,b;
    cin>>n>>b;
    int sum=1;
    for(int i=2;i<=n;i++)
    {
	    if(p[i]==0){//说明i是质数 
		    for(int j=i+i;j<=n;j+=i){
		        if(i<=b)
		        {
		            p[j]=1;
		        }
		        else
		        {
		            p[j]=2;
		        }
		    }
	    }
    }
    for(int i=2;i<=n;i++)
    {
        if(p[i]==1||(p[i]==0&&i<=b))
        {
            sum++;
        }
    }
    cout<<sum;
	return 0;
}
