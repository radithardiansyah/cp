#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
	int arr_s, l, r;
	cin >> arr_s >>l >> r;
	vector<int>arr(arr_s);
	for(int i = 0; i < arr_s; i++)
	{
		cin >> arr[i];

	}
	auto l_b = lower_bound(arr.begin(), arr.end(), l);
	auto u_b = upper_bound(arr.begin(), arr.end(), r);
	cout << u_b - l_b;

	return 0;
}
//apa yg direturn upperbound, lowerbound, equalrange;
