#include <iostream>
using namespace std;
#include <algorithm>
#include<vector>
int main(){
	int jumlah_arr, jumlah_queries;
	bool check;
	cin>>jumlah_arr >> jumlah_queries;
	vector<int>arr(jumlah_arr);
	vector<int>queries(jumlah_queries);
	for(int i = 0; i < jumlah_arr; i++)
	{
		cin>>arr[i];
	}
	for(int i = 0; i < jumlah_queries; i++)
	{
		cin>>queries[i];
	}
	sort(arr.begin(), arr.end());
	for(int i = 0; i < jumlah_queries; i++)
	{
	check = binary_search(arr.begin(), arr.end(), queries[i]);
		if(check)
		{
			cout << "ada bosku";
		}else
		{
			cout << "ngga ada bosku";
		}


	}
	
	return 0;
}
