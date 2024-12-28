#include<bits/stdc++.h>
using namespace std;

int dailyV[30];
int foodderV[30][20];
int v,g;
struct node
{
    int vitamin[30];
    int num[20];
    int ans;
};

queue <node> q;

void bfs()
{
    while(!q.empty())
    {
        node pastTop=q.front();
        q.pop();
        bool flag=1;
        for(int i=1;i<=v;i++)
        {
            if(pastTop.vitamin[i]<dailyV[i])
            {
                cout<<pastTop.vitamin[i]<<endl;
				cout<<dailyV[i]<<endl;
				flag=0;
                break;
            }
        }
        if(flag)
        {
        	cout<<"12345678910";
            cout<<pastTop.ans<<' ';
            for(int i=1;i<=pastTop.ans;i++)
            {
                cout<<pastTop.num[i]<<' ';
            }
            return;
        }
        for(int i=pastTop.num[pastTop.ans]+1;i<=g;i++)
        {
        	//cout<<i<<endl;
            node newTop;
            newTop.ans=pastTop.ans+1;
            newTop.num[pastTop.ans+1]=i;
            for(int j=1;j<=v;j++)
            {
                newTop.vitamin[j]=pastTop.vitamin[j]+foodderV[i][j];
                //cout<<newTop.vitamin[j]<<endl;
            }
        }
    }
}

int main()
{
    cin>>v;
    for(int i=1;i<=v;i++)
    {
        cin>>dailyV[i];
    }
    cin>>g;
    for(int i=1;i<=g;i++)
    {
        for(int j=1;j<=v;j++)
        {
            cin>>foodderV[i][j];
        }
    }
    node queueTop;
    for(int i=1;i<=g;i++)
    {
        for(int j=1;j<=v;j++)
        {
            queueTop.vitamin[j]=foodderV[i][j];
        }
        queueTop.ans=1;
        queueTop.num[1]=i;
        q.push(queueTop);
    }
    bfs();
}
