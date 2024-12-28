#include<bits/stdc++.h>
using namespace std;
struct poker
{
    char col;
    char num;
};

poker p[60];
int ans=1;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>p[i].col>>p[i].num;
    }
    for(int i=2;i<=n;i++)
    {
        bool f=0;
        for(int j=1;j<i;j++)
        {
            if(p[i].col==p[j].col&&p[i].num==p[j].num)
            {
                f=1;
            }
        }
        if(!f)
        {
            ans++;
        }
    }
    cout<<52-ans;
    return 0;
}
