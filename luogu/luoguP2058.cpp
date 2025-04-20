#include<bits/stdc++.h>
using namespace std;
int nation[100005];
int ans;
struct people
{
    int time;
    int nation;
};
int main()
{
    int n;
    cin>>n;
    queue<people> boat;
    for(int i=1;i<=n;i++)
    {
        int boat_time;
        cin>>boat_time;
        int people_sum;
        cin>>people_sum;
        for(int j=1;j<=people_sum;j++)
        {
            int people_nation;
            cin>>people_nation;
            boat.push({boat_time,people_nation});
            nation[people_nation]++;
            ans+=(nation[people_nation]==1);
        }
        while(!boat.empty()&&boat_time-boat.front().time>=86400)
        {
            people first_people = boat.front();
            boat.pop();
            nation[first_people.nation]--;
            ans -= (nation[first_people.nation]==0);
        }
        cout<<ans<<'\n';
    }
    return 0;
}
