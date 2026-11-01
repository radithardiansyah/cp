#include<iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <string>
struct Team 
{
string name;
int solved_problems;
int penalty_time;
};
int main()
{
	int n;
	cin >> n;
	vector<Team>teams(n);
	for(int i = 0; i < n; ++i)
	{
		cin >> teams[i].name;
		cin >> teams[i].solved_problems;
		cin >> teams[i].penalty_time;

	}
	sort(teams.begin(), teams.end(), [](const Team &a,const Team &b)
			{
if(a.solved_problems != b.solved_problems)
{
return a.solved_problems > b.solved_problems;
}
if(a.penalty_time != b.penalty_time)
{
return a.penalty_time < b.penalty_time;

}
return a.name < b.name;



			});

return 0;
}
