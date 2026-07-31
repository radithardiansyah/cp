#include<iostream>
using namespace std;
#include<vector>
#include<cmath>

int main(){
int case_ajah, worriedman_1, worriedman_2, worriedman_3, angka_terbesar, angka_terkecil, total_worried, total_fixed;
vector<int>s;
cin >> case_ajah;
for(int i = 0; i < case_ajah; i++){
    s.clear();
cin >> worriedman_1 >> worriedman_2 >> worriedman_3;
total_worried = worriedman_1 + worriedman_2 + worriedman_3;
s.push_back(worriedman_1);
s.push_back(worriedman_2);
s.push_back(worriedman_3);
angka_terbesar = s[0];
angka_terkecil = s[0];
for(int i = 0; i < s.size(); i++){
    if(angka_terbesar > s[i]){
        angka_terbesar = s[i];
    }
    if(angka_terkecil < s[i]){
        angka_terkecil = s[i];
    }
}
total_fixed = angka_terbesar + angka_terkecil;
cout << abs(total_fixed - total_worried) << "\n";
}
    return 0;
}