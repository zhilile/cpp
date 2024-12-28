#include<bits/stdc++.h>
using namespace std;

int main()
{
    int kh,km,jh,jm;
    cin>>kh>>km>>jh>>jm;
    int k,j;
    k=kh*60+km;
    j=jh*60+jm;
    cout<<j-k;
    return 0;
}
