#include <bits/stdc++.h>
using namespace std;
int f[2100][2100];
int main()
{
    string a,b;
    cin>>a>>b;
    int n=a.length();
    int m=b.length();
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            f[i][j]=n+m;
        }
    }
    f[0][0]=0;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0)
            {
                f[i][j]=j;
            }
            else if(j==0)
            {
                f[i][j]=i;
            }
            else if(a[i-1]==b[j-1])
            {
                f[i][j]=f[i-1][j-1];
            }
            else
            {
                f[i][j]=min(min(f[i-1][j],f[i][j-1]),f[i-1][j-1])+1;
            }
        }
    }
    cout<<f[n][m];
    return 0;
}
