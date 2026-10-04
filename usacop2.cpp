#include <iostream>
using namespace std;
#include <vector>
int main(){
	
	int n_sapi, banyak_salah = 0;
		

	cin >> n_sapi;
		vector<int>sapi_1(n_sapi);
	vector<int>sapi_2(n_sapi);
	for(int i = 0; i < n_sapi; i++){
		cin >> sapi_1[i];
		
	}
		for(int i = 0; i < n_sapi; i++){
		cin >> sapi_2[i];
		
	}

		for(int i = 0; i < n_sapi; i++){
			if(sapi_1[i] != sapi_2[i]){
				banyak_salah++;
			}
		}

	cout << banyak_salah;

	return 0;
}
