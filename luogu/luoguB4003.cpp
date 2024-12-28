#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    n%=26;
    for(char i='A';i<='Z';i++)
    {
    	char k=i+n;
        if(k<='Z')
        {
            cout<<k;
        }
        else
        {
            cout<<(k-'Z');
        }
    }
    return 0;
}
