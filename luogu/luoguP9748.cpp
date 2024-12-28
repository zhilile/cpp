#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool f=0;
    int num;
    cin>>num;
    int ans1=0;
    int ans2=0;
    while(num>0)
    {  
        if(num%3==1 && f==0)
        {
            ans2=ans1+1;
            f=1;
        }
        if(num%3==0)
        {
            num=num-num/3;
        }
        else
        {
            num=num-num/3-1;
        }
        ans1++;
    }
    cout<<ans1<<" "<<ans2;
    return 0;
}
