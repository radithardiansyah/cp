#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<climits>
//jadi ada unsorted array lalu kita sorted dan kita cari minimum absolute
//kalau 1 dan 2 maka 1 kalau 99 dan 98 juga 1 jadi paling kecil belum tentu
//dikurang dan hasil pengurangan itu dibandingkan mana yang paling kecil
//loop
//a = arr[i] - arr[i - 1]
//bandingkan dari yg paling besar untuk mendapatkan yg paling kecil
int main()
{ 
	int n;
	cin >> n;
	vector<int>arr(n);
	for(int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	int min_val = INT_MAX;
	for(int i = 1; i < n; ++i)
	{
		int c_v = arr[i] - arr[i - 1];
		if(c_v < min_val){
			min_val = c_v;
		}
	}
	cout << min_val;


	
		return 0;
}
