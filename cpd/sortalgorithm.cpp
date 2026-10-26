#include <iostream>
using namespace std;
#define MAX 100
#include<cstdlib>

int main()
{
int arr[MAX], n, temp = 0;
cout << "enter a number N";
cin >> n;

for(int i = 0; i < n; i++)
{
	arr[i] = rand();
}

for(int i = 0; i < n; i++)
{
	for(int j = i + 1; j < n; j++)
	{
		if(arr[j] < arr[i])
		{
			temp = arr[i];
				arr[i] = arr[j];
			arr[j] = temp;
				

		}
	}
}
for(int i = 0; i < n; i++)
{
	cout<<arr[i] << " ";
}

	return 0;
}
