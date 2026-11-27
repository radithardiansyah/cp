#include<iostream>
using namespace std;
#include<vector>

int main(){
    int banyak_angka, max, min, range;
    cin >> banyak_angka;
    vector<int>angka(banyak_angka);
    for(int i = 0; i < banyak_angka; i++){
    cin >> angka[i];
    }
        max = angka[0];
    min = angka[0];
    for(int i = 0; i < angka.size(); i++){
        if(max < angka[i]){
            max = angka[i];
    }
    if(min > angka[i]){
min = angka[i];
    }
    }
   range = max - min;
   cout << min << max  << range;

    return 0;
}
