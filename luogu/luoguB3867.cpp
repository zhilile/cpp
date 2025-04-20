#include<bits/stdc++.h>
using namespace std;
int b[1010];
int main()
{
    int N,D;
    cin>>N>>D;
    for(int i=1;i<=D;i++)
    {
        int p;
        cin>>p;
        b[p]+=i;
    }
    for(int i=0;i<N;i++)
    {
        cout<<b[i]<<' ';
    }
    return 0;
}
