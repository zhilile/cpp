#include<bits/stdc++.h>
using namespace std;
string a;
int n;
char t[10000];


char pan(int l,int r)
{
    
    bool B=0,I=0;
    for(int i=l;i<=r;i++)
    {
        if(a[i]=='0')
        {
            I=1;
        }
        else
        {
            B=1;
        }
    }
    if(I==1&&B==1)
    {
        return 'F';
    }
    else if(B==1)
    {
        return 'I';
    }
    else
    {
    return 'B';
    }
}

void fen(int l,int r,int k)
{
    if(l>r)
    {
        return ;
    }
    t[k]=pan(l,r);
    if(l==r)
    {
        return ;
    }
    int mid=(l+r)/2;
    fen(l,mid,k*2);
    fen(mid+1,r,k*2+1);
}

void hou(int i)
{
    if(t[i]==0)
    {
        return;
    }
    hou(i*2);
    hou(i*2+1);
    cout<<t[i];
}

int main()
{
    cin>>n;
    cin>>a;
    fen(0,a.length()-1,1);
    hou(1);
    return 0;
}
