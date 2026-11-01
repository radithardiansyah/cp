#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{ 
	int n;
	cin >> n;
	vector<pair<int, int>>meetings;
	for(int i = 0; i < n; ++i)
	{
		int start_time, end_time;
		cin >> start_time >> end_time;
		meetings.push_back({start_time, end_time});
	}
	sort(meetings.begin(), meetings.end(), [](const pair<int, int> &a, const pair<int, int> &b)
			{
			if(a.second != b.second)
			{
			return a.second < b.second;
			}
			return a.first < b.first;
			});

	int total_meetings = 0;
	int last_end_time = -1;

	for(int i = 0; i < n; ++i)
	{
		if(meetings[i].first >= last_end_time)
		{
			total_meetings++;
			last_end_time = meetings[i].second;
		}
	
	}
	cout << total_meetings << "\n";
		return 0;
}
