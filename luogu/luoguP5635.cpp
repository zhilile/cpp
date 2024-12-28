#include <iostream>
using namespace std;
int t,p,x,y;
int ans[210];
short v[10010][10010];
int sum=0;
int comput(int x,int y)
{
    if(v[x][y]==-1)
    {
        return 3;
    }
    if(v[x][y]>0)
    {
        return v[x][y];
    }
    v[x][y]=-1;
    if(x==0)
    {
        v[x][y]=1;
        return 1;
    }
    if(y==0)
    {
        v[x][y]=2;
        return 2;
    }
    int ans=(x+y)%p;
    if(sum%2==0)
    {
        v[x][y]=comput(x,ans);
    }
    else
    {
        v[x][y]=comput(ans,y);
    }
    return v[x][y];
}
int main(){
	cin>>t>>p;
	for(;sum<t;sum++)
	{
	    cin>>x>>y;
	    ans[sum]=comput(x,y);
	    
	}
	for(int i=0;i<t;i++)
	{
	    if(ans[i]==1)
	    {
	        cout<<1;
	    }
	    else if(ans[i]==2)
	    {
	        cout<<2;
	    }
	    else
	    {
	        cout<<"error";
	    }
	}
	return 0;
}
