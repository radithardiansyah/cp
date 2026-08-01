#include<iostream>
using namespace std;
#include<cmath>

int main(){
    int case_aja, p, h, o, s;
    cin >> case_aja;
    for(int i = 0; i < case_aja; i++){
cin >> p >> h >> o;

if(p - o >= h){
    cout <<"Props win!" << "\n";
}else{
    cout <<"Hunters win!" << "\n";
}

    }

    return 0;
}