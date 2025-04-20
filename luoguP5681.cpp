#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    if((a*a)!=b*c)
    {
        cout<<((a*a<b*c)?"Bob":"Alice");
    }
    else
    cout<<"Bob";
    return 0;
}
