#include<iostream>
#include<numeric>

using namespace std;
//ngebuat program yg tau n itu a + b paling kecil
int main()
{
	long long n, a, b;
	cin >> n;
	if(n % 2 == 0)//bilangan genap selalu dari 2 bilangan yg sama ditambah
	{
		a = n/2;
		b = n/2;

	}else
	{
		long long p = 1;
		for(long long i = 2; i * i <= n; ++i)
		{
			if(n % i == 0)
			{
				p = i;
				break;
			}
		}
		if(p == 1)//bilangan prima cuma bisa dibagi 1
		{
			a = 1;
			b = n - 1;
		}else
		{
			a = n/p;
			b = n - a;
		}
	}


	

	return 0;
}
//sifat sifat bilangan
//genap selalu bilangan sama
//ganjil
//kalau dia prima cuma bisa 1 dan dirinya
//selain itu kebalikannya
