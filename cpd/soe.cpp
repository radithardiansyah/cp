#include<iostream>
#include<vector>
#include <bits/stdc++.h>
#include<algorithm>
#include <cmath>

using namespace std;
const int MAXN = 1e6 + 5;
bool prime[MAXN];
void sieve()
{
	fill(prime, prime + MAXN, false);
	prime[0] = prime[1] = false;

	for(int p = 2; p * p < MAXN; ++p)
	{
		if(!prime[p])
		{
			for(int i = p * p; i < MAXN; i += p)
			{
				prime[i] = true;
			}
		}
	}
	
}

int main(){
int n;
cin >> n;

sieve();

for(int i = 2; i <= n; ++i)
{
if(prime[i])
{
	cout << i << " ";
}
}
cout << "\n";

	return 0;
}
