#include<iostream>
using namespace std;

int main(){
int case_ajah, farmers, size_f, number_animal, f_e_f;
cin >> case_ajah;
for(int i = 0; i < case_ajah; i++){
    cin >> farmers;
    int r = 0;
for(int j = 0;j < farmers; j++){
cin >> size_f >> number_animal >> f_e_f;
r += (size_f * f_e_f);
cout << r << "\n";
}
}
    return 0;
}