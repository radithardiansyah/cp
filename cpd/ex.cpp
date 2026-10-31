#include<iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main()
{
int arr[] = {10, 5, 8, 1, 7, 3};
int n = sizeof(arr)/sizeof(arr[0]);
sort(arr , arr + 5);
for(int i = 0; i < n; ++i)
{
cout << arr[i] << " ";
}
return 0;
}
