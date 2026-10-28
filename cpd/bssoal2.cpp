#include<iostream>
using namespace std;
#include <algorithm>
#include<vector>
int main()
{
	int arr_s, target, jawaban;
	cin >> target;
	cin>>arr_s;
	vector<int>arr(arr_s);
	for(int i = 0; i < arr_s; i++)
	{
		cin >> arr[i];

	}
	sort(arr.begin(), arr.end());
	jawaban = lower_bound(arr.begin(), arr.end(), target) - arr.begin();
	cout << jawaban;



	
	return 0;
}
