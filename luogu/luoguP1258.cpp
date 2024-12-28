#include<bits/stdc++.h>
using namespace std;
#define dd double 
int main()
{
	dd s,vr,vc,J,Y,x;
	J=-1;
	Y=-2;
	cin>>s>>vr>>vc;
	dd l=0,r=(s/vc);
	x=(l+r)/2;
	while(abs(J-Y)>1e-6)
	{
		dd t1=x;
		dd js1=x*vc;
		dd ys1=x*vr;
		dd t2=(js1-ys1)/(vr+vc);
		dd js2=t2*vr;
		dd ys2=t2*vr;
		dd jt3=(s-js1-js2)/vr;
		dd yt3=(s-ys1-ys2)/vc;
		J=t1+t2+jt3;
		Y=t1+t2+yt3;
		if(J>Y)
		{
			l=x;
		}
		if(Y>J)
		{
			r=x;
		}
		x=(l+r)/2;
	}
	cout<<fixed<<setprecision(6)<<J;
	return 0;
}

