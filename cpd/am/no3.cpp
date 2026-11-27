#include<iostream>

using namespace std;
//how to learn
//take a pen and make a note
//understand each
//practice

//learn maximal input output and time execution
//try doing the problem, read the answer if u cant figure it out

//belajar untuk paham algoritma, jadi baca, coba, dan terus ulang
const long long B_MOD = 1e9 + 7;

long long power(int base, int exp)
{
long long result = 1;
base &= B_MOD;
while(exp > 0)
{
	if(exp%2 == 1)
	{
		result = (result *= base) % B_MOD;
	}
	base *= base;
	exp /= 2;
}
return result;
}
int main()
{
	long long n;
	while (cin >> n)
	{
		if(n == 1)
		{
			cout << 3 % B_MOD << "\n";
		}else
		{
			long long dua_pangkat_n_min_1 = power(2, n-1);
			long long jawaban = (3 * dua_pangkat_n_min_1) % B_MOD;
			cout << jawaban << "\n";
		}
	}
	return 0;
}
