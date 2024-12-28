#include<bits/stdc++.h>
using namespace std;
string a="";
bool isLuckNum(string a)
{
    int sum=0;
    int len=a.length();
    for(int i=len-1;i>=0;i-=2)
    {
        int TBD=a[i]-'0'; 
        TBD*=7;
        while(TBD>9)
        {
            TBD=TBD%10+TBD/10;
        }
        a[i]=(TBD+'0');
    }
    for(int j=0;j<len;j++)
    {
        sum+=(a[j]-'0');
    }
    if(sum%8==0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        cout<<(isLuckNum(a)?'T':'F')<<endl;
        a="";
    }
    return 0;
}
