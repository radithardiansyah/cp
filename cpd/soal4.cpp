//1 what lower nd upper do
//lower is targetting the number we want
//upper is targetting the number with bigger value than we want

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
	vector<int>v = {10,20,20,20,30,40};
	
	auto range = equal_range(v.begin(), v.end(), 20);
	cout << range.second - range.first;//using distance to count from the first and second of the value
					   
	for(auto i = range.first; i != range.second; ++i)//using loop in condition that first is not the same as second to only print the same number
	{
		cout << *i;
	}

	return 0;
}
