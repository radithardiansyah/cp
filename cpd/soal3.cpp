#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
	int arr_s, day;
	cin >> arr_s >> day;
	vector<int>arr(arr_s);
	for(int i = 0; i < arr_s; i++)
	{
		cin>>arr[i];
	}
	auto ans = upper_bound(arr.begin(), arr.end(), day);
	if(ans == arr.end())
	{
		cout << "-1";;
	}else
	{
		cout << *ans;
	}



	return 0;
}
