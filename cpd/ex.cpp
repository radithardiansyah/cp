#include<iostream>
using namespace std;
#include<algorithm>
#include<string>
#include<vector>
int main()
{
	vector<int>arr = {3, 30, 34, 5, 9};
	int n = arr.size();
	
	vector<string>arr_string(n);

	for(int i = 0; i < n; i++)
	{
		arr_string[i] = to_string(arr[i]);
	}
	sort(arr_string.begin(), arr_string.end(), [](const string &a, const string &b)
			{
			return a + b > b + a;


			});

	for(int i = 0; i < n; i++)
	{
		cout << arr_string[i];
	}
	


	return 0;
}
