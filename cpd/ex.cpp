#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include <bits/stdc++.h>
int main()
{ 
	//kondisi pengecekkan di mana diurutkan menggunakan biner
	//lalu jika biner kembar, maka akan dibandingkan siapa lebih besar integernya
	int n;
	cin >> n;
	vector<int>arr(n);

	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	sort(arr.begin(), arr.end(), [](const int &a, const int &b)
			{
			if(__builtin_popcount(a) != __builtin_popcount(b))
			{
			return __builtin_popcount(a) < __builtin_popcount(b);
			}
			return a < b;

			});
	for(int i = 0; i < n; i++)
	{
		cout << arr[i];
	}
	
		return 0;
}
