#include <iostream>
using namespace std;
#include<string>
int main(){
    int case_ajah, angka_1;
string  angka_ditulis_oleh_adick;
cin >> case_ajah;
for(int i = 0; i < case_ajah; i++){
cin >> angka_ditulis_oleh_adick;

if(angka_ditulis_oleh_adick.size() == 5){
    cout << "three" << "\n";
}else{
    angka_1 = 0;
    if(angka_ditulis_oleh_adick[0] == 'o'){
angka_1 ++;
    }
    if(angka_ditulis_oleh_adick[1] == 'n'){
        angka_1++;
    }
    if(angka_ditulis_oleh_adick[2] == 'e'){
angka_1++;
    }
  
}
if(angka_1 >= 2){
        cout << "one" << "\n";
    }else{
        cout << "two" << "\n";
    }   


}
  
    return 0;
}