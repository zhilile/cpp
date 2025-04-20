#include<bits/stdc++.h>
using namespace std;
struct node
{
								int price;
								int time;
};
queue<node> subway;
queue<node> bus;
int main()
{
								int n;
								cin>>n;
								int ans=0;
								for(int i=1;i<=n;i++)
								{
																bool type;
																cin>>type;
																node new_node;
																cin>>new_node.price>>new_node.time;
																if(!type)
																{
																								ans+=new_node.price;
																								subway.push(new_node);
																}
																else
																{
																								bus.push(new_node);
																}
								}
								int bus_size=bus.size();
								for(int i=1;i<=bus_size;i++)
								{
																node first_bus=bus.front();
																if(!subway.empty())
																{
																								node first_subway=subway.front();
																								if(first_bus.time-first_subway.time<=45&&first_subway.time<first_bus.time&&first_subway.price>=first_bus.price)
																								{
																																subway.pop();
																								}
																								else
																								{
																																cout<<first_bus.time<<' ';
																																if(first_bus.time-first_subway.time>45)
																																{
																																								subway.pop();
																																}
																																ans+=first_bus.price;
																								}
																}
																else
																{
																								ans+=first_bus.price;
																}
																bus.pop();
								}
								cout<<ans;
								return 0;
}
