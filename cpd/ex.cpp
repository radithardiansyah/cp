#include<iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main()
{
	int arr[10] = {1,5,4,3,6,7,8,2,3,6};
	int n = sizeof(arr)/sizeof(arr[0]);
	sort(arr + 2, arr+8);

	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
return 0;
}
