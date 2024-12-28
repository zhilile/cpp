#include<bits/stdc++.h>
using namespace std;

long long a[100010],b[100010],c[100010];

long long f[30][30][30];

long long w(long long x,long long y,long long z)
{
    if(x<=0||y<=0||z<=0)
    {
        return 1;
    }
    if(x>20||y>20||z>20)
    {
        return w(20,20,20);
    }
    
    if(f[x][y][z]!=0)
    {
        return f[x][y][z];
    }
    
    long long ans=0;
    
    if(x<y&&y<z)
    {
        ans=w(x,y,z-1)+w(x,y-1,z-1)-w(x,y-1,z);
    }
    else
    {
        ans=w(x-1,y,z)+w(x-1,y-1,z)+w(x-1,y,z-1)-w(x-1,y-1,z-1);
    }
    f[x][y][z]=ans;
    return ans;
}


int main()
{
    int i=0;
    while(1)
    {
        long long x,y,z;
        cin>>x>>y>>z;
        if(x==-1&&y==-1&&z==-1)
        {
            break;
        }
        a[i]=x;
        b[i]=y;
        c[i]=z;
        i++;
    }
    for(int j=0;j<i;j++)
    {
        long long ans=w(a[j],b[j],c[j]);
        printf("w(%ld, %ld, %ld) = %ld\n",a[j],b[j],c[j],ans);
    }
    return 0;
}
