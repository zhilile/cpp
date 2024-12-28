#include<bits/stdc++.h>
using namespace std;
char A[11][11];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>A[i][j];
        }
    }
    int ans=0;
    for(int x1=1;x1<=n;x1++)
    {
        for(int y1=1;y1<=m;y1++)
        {
            for(int x2=x1;x2<=n;x2++)
            {
                for(int y2=y1;y2<=m;y2++)
                {
                    int z=0,o=0;
                    for(int i=x1;i<=x2;i++)
                    {
                        for(int j=y1;j<=y2;j++)
                        {
                            if(A[i][j]=='0')
                            {
                                z++;
                            }
                            else
                            {
                                o++;
                            }
                        }
                    }
                    if(z==o)
                    {
                        ans=max(ans,z+o);
                    }
                }
            }
        }
    }
    cout<<ans;
    return 0;
}
